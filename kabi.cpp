#include <stdio.h>
using namespace std;
int main()
{
	int i, number;
	printf("enter the maximum value:");
	scanf("%d",& number);
	printf("odd number between 1 and %d:",number);
	for(i=1 ; i<=number; i=i+2)
	{
		if(1 % 2 !=0)
		{
			printf("\t%d",i);
		}
	}
	return 0;
	
}
