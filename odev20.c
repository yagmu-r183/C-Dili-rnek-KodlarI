#include <stdio.h>
#include <stdlib.h>
//tek boyutlu arraylarda parametre gonderimi 

int carp(int array[],int size)
{
	int i,carpim=1;
	for(i=0;i<size;i++)
	{
	   carpim*=array[i];
	}
	return carpim;
}

int main() 
{
	int sayilar[5]={5,4,3,2,6};
    printf("array elemanlarinin carpimi: %d",carp(sayilar,5));
}
