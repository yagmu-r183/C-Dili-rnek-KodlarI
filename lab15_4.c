#include <stdio.h>
#include <stdlib.h>

void fon(int x)
{
	if(x>0)
	{
		fon(--x);
		printf("%d\t",x);
		fon(--x);
	}
}

int main() 
{
	int a=4;
	fon(a);
	return 0;
}
