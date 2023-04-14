// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char* multiply(char* num1, char* num2) {
    // Convert the input numbers from strings to arrays of integers
    int vec1[strlen(num1)];
    for (int i = 0; i < strlen(num1); i++) {
        vec1[i] = num1[strlen(num1) - i - 1] - '0';
    }
    int vec2[strlen(num2)];
    for (int i = 0; i < strlen(num2); i++) {
        vec2[i] = num2[strlen(num2) - i - 1] - '0';
    }
 
    // Initialize the result array with zeros
    int result[strlen(num1) + strlen(num2)];
    memset(result, 0, sizeof(result));
 
    // Multiply each digit in vec2 with vec1 and add the result to the appropriate position in the result array
    for (int i = 0; i < strlen(num2); i++) {
        int carry = 0;
        for (int j = 0; j < strlen(num1); j++) {
            int product = vec1[j] * vec2[i] + carry + result[i + j];
            carry = product / 10;
            result[i + j] = product % 10;
        }
        result[i + strlen(num1)] = carry;
    }
 
    // Remove leading zeros from the result array and convert it back to a string
    while (strlen(num1) + strlen(num2) > 1 && result[strlen(num1) + strlen(num2) - 1] == 0) {
        strcpy(&result[strlen(num1) + strlen(num2) - 1], &result[strlen(num1) + strlen(num2)]);
    }
    char* str = (char*)malloc((strlen(num1) + strlen(num2) + 1) * sizeof(char));
    memset(str, '0', strlen(num1) + strlen(num2));
    for (int i = 0; i < strlen(num1) + strlen(num2); i++) {
        str[strlen(num1) + strlen(num2) - i - 1] = result[i] + '0';
    }
    str[strlen(num1) + strlen(num2)] = '\0';
    return str;
}
int main(int argc, char *agrv[]) {
    
	if (argc < 3 || arc > 3)
	{
		printf("%s", "Error");
		exit(98);
	}
	if (!isdigit(argv[1]) && !isdigit(argv[2]))
	{
		printf("%s", "Error");
		exit(98);
	}
	

	printf("%s\n", multiply(argv[1],argv[2]);
   
	return 0;
}
