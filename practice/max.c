#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int max(int num1, int num2);
int main()
{
	int a = 100;
	int b = 230;
	int ret;
	//calling ret function
	ret = max(a,b);
	printf("Max value is : %d\n", ret);
	return 0;
}
