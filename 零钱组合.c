#include <stdio.h>
int main()
{
	int one, two, five;
	int yuan;
	scanf("%d",&yuan);
	for (one = 0; one <= 10 * yuan; one++)
	{
		for (two = 0; two <= yuan * 10 / 2; two++)
		{
			for (five = 0; five <= yuan * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == yuan * 10)
				{
					printf("%d��%d����%d��ë���%dԪ\n", one, two, five, yuan);
				}
			}
		}
	}
}
