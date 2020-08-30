#include<stdio.h>
int main()
{
	int i, j, n;
	printf("enter the numher of rows : \n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
