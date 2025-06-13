#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float c,f;
	printf("bir sicaklik degeri giriniz:");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("girdiginiz fahrenheit degerinin celsius karsiligi:%f ",c);
	
	
	return 0;
}
