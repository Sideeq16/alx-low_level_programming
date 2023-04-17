#include <stdio.h>
#include "0-object_like_macro.h"
#include "1-pi.h"
#include "3-function_like_macro.h"
#include "4-sum.h"

int main(void)
{
	int i;

	i = SUM(98, 1024);
	printf("%d\n", i);
	return (0);
}
