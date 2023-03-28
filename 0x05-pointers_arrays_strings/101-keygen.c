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

	char allowed_characters[1000] = "";

	strcat(allowed_characters, letters);
	strcat(allowed_characters, digits);
	strcat(allowed_characters, special_characters);

	srand(time(NULL));

	char password[(PASSWORD_LENGTH + 1)];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_index = rand() % strlen(allowed_characters);

		password[i] = allowed_characters[random_index];
	}
		password[PASSWORD_LENGTH] = '\0';

	printf(password);

	return (0);
}
