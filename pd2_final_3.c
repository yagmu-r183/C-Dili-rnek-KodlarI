#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int n,a,b;
	a=12;
	n=15;
	b=8;
	func(n,a,b);
	return 0;
}

void func(int n, int a, int b) 
{ 
static int i=1; 
if (n <= 0) return; 
func(n - 3, a-2, b + n); 
printf("Output %d: %d %d %d\n", i++, n, a, b); 
}
