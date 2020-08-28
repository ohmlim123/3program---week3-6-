#include<stdio.h>
int main()
{
	int i;
	int a[100];
	int b = 0;
	for (i = 0;1;i++)
	{
		scanf_s("%d", &a[i]);

		b++;


		if (a[i] == 0)
		{
			break;
		}
		
		
	}
	int y;
	for (y = b-1;y > 0;y--)
	{
		printf("%d ", a[y-1]);
	}


	return 0;
}