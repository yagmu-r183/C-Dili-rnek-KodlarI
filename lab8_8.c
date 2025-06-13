#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float fit,cm;
	printf("fit cinsinden bir deger giriniz:");
	scanf("%f",&fit);
	cm=fit*30.48;
	printf("girdiginiz degerin cm cinsinden karsiligi:%f",cm);
	return 0;
}
