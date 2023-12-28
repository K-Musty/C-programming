#include <stdio.h>
#include <stdlib.h>
/**
 * This is meant for small malloc program
 */
int main(void)
{
	int n;
	int *point, i, j;

	printf("Enter number of memory: ");
	scanf("%d\n", &n);
	point = (int *)malloc(sizeof(int) * n);

	if (point == NULL)
	{
		printf("Memory not found");
		exit(1);
	}
	printf("Please enter your given memory\n");
	for (i = 0; i < n; i++)
		scanf("%d", (point + i));
	for (j = 0; j < n; j++)
		scanf("%d", (point + i));
	return (point);
}
