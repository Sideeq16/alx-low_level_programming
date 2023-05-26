#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_error(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header(const Elf64_Ehdr* header) {
	int i = 0;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i)
        printf("%02x ", header->e_ident[i]);
    printf("\n");
    
    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASSNONE: printf("Invalid class\n"); break;
        case ELFCLASS32:   printf("ELF32\n");         break;
        case ELFCLASS64:   printf("ELF64\n");         break;
        default:           printf("Unknown\n");       break;
    }
    
    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATANONE: printf("Invalid data encoding\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n");    break;
        default:          printf("Unknown\n");                     break;
    }
    
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:      printf("UNIX - System V\n");                break;
        case ELFOSABI_HPUX:      printf("UNIX - HP-UX\n");                   break;
        case ELFOSABI_NETBSD:    printf("UNIX - NetBSD\n");                  break;
        case ELFOSABI_LINUX:     printf("UNIX - Linux\n");                   break;
        case ELFOSABI_SOLARIS:   printf("UNIX - Solaris\n");                 break;
        case ELFOSABI_AIX:       printf("UNIX - AIX\n");                     break;
        case ELFOSABI_IRIX:      printf("UNIX - IRIX\n");                    break;
        case ELFOSABI_FREEBSD:   printf("UNIX - FreeBSD\n");                 break;
        case ELFOSABI_TRU64:     printf("UNIX - TRU64\n");                   break;
        case ELFOSABI_MODESTO:   printf("Novell - Modesto\n");               break;
        case ELFOSABI_OPENBSD:   printf("UNIX - OpenBSD\n");                 break;
        default:                 printf("Unknown\n");                        break;
    }
    
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    
    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_NONE:   printf("NONE (No file type)\n");         break;
        case ET_REL:    printf("REL (Relocatable file)\n");      break;
        case ET_EXEC:   printf("EXEC (Executable file)\n");      break;
        case ET_DYN:    printf("DYN (Shared object file)\n");    break;
        case ET_CORE:   printf("CORE (Core file)\n");            break;
        default:        printf("Unknown\n");                     break;
    }
    
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char* argv[]) {
        printf("%s",argv[1]);
    if (argc != 2) {
        display_error("Invalid number of arguments");
    }
    
    const char* filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        display_error("Failed to open file");
    }
    
    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        display_error("Failed to read ELF header");
    }
    
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        display_error("Not an ELF file");
    }
    
    display_elf_header(&header);
    
    close(fd);
    return 0;
}
