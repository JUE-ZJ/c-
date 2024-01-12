#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	
	for(i=2;i<=num;i++)
	{
		int su=1;
		for(int p=2;p<i;p++)
		{
			
			if(i%p == 0)
			{
				su=0;
				break;
			}
		}		
		if(su == 1)
			{
				printf("%d ",i);
			}
	}
}
		
		
		
		
	
		


