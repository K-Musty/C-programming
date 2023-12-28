#include <stdio.h>
#include <stdlib.h>
/**
 * This is meant for small malloc program
 */
int main(void)
{
	int k;
	int point, i, j;

	printf("Enter number of memory\n");
	scanf("%d\n", &n);
	point = (int *)malloc(sizeof(int) * n);

	if (point == NULL)
	{
		printf("Memory not found");
		exit(1);
	}
	printf("Please enter your given memory");
	for (i = 0; i < n; i++)
		scanf("%d\n", point[i]);

}
