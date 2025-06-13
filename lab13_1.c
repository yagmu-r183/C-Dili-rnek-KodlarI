#include <stdio.h>
#include <stdlib.h>

int karealan(int kenar)
{
	int alan;
	alan=kenar*kenar;
	return alan;
}

int main() 
{
	int a;
	printf("karenin kenarini gir:");
	scanf("%d",&a);
	printf("alan:%d",karealan(a));
	return 0;
}
