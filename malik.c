//1+2+4+7+11+...upto n terms.w.c.p to calculate sum of the given seies,
#include<stdio.h>
int main()
{
	int term=1,sum=0,i=1,n;
	int diff=1;
	printf("enter the number of term:");
	scanf("%d",&n);
	while(i <=n)
	{
		sum=sum=term;
		term=term+diff;
		diff++;
		i++;
	}
	printf("enter the sum of series:%d\n",sum);
	return 0;
}

