#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int an;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			an = i;
		}		
	}
	printf("%d", an);
}
