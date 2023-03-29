#include "main.h"

/**
* reverse_array - compare two string
* @a: array to reverse
* @n: number of element in array
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i <= ((n / 2) - 1); i++)
	{
		temp = *(a + (n - i) - 1);
		if (i == 0)
		{
			*(a + (n - 1)) = *(a);
		}
		else
		{
			*(a + (n - 1) - i) = *(a + i);
		}
			*(a + i) = temp;
	}
}
