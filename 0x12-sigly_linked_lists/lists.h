#ifndef _MY_HEADER_
#define _MY_HEADER_

/**
 * struct lists_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct lists_s *next;
} list_t;

int _putchar(char c);

size_t print_list(const list_t *h);

#endif
