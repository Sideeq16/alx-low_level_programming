#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* Set the desired password length*/
#define PASSWORD_LENGTH 8

/**
* main - Generate random password
* Return: Generated Password
*/

int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char digits[] = "0123456789";
	char special_characters[] = "!@#$%^&*()_+-=[]{}\\|;':\",./<>?";
	int i;
	char password[(PASSWORD_LENGTH + 1)];

	char allowed_characters[1000] = "";
	int random_index;

	strcat(allowed_characters, letters);
	strcat(allowed_characters, digits);
	strcat(allowed_characters, special_characters);

	srand(time(NULL));


	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		random_index = rand() % strlen(allowed_characters);

		password[i] = allowed_characters[random_index];
	}
		password[PASSWORD_LENGTH] = '\0';

	printf("%s", password);

	return (0);
}
