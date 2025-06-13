#include <stdio.h> 
#include <math.h>
int cevirme(int n[10])
{
	int x;
	if(n<=0) return 0;
	else
	{
		x=n%2;
		n=n-x;
		n=n/2;
		return x+10*cevirme(n);
	}
	
}

int main()
{
	int n,c,i,b[10]={2,3,1,0,2,3,8,0,3,9};
	for(i=0;i<10;i++)
	{
		c=cevirme(b[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("numaranin ikilik tabanda karsiligi: %d",b[i]);
	}
    return 0;
}

