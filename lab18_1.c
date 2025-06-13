#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	int i;
	int *ptr=(int *)malloc(5 * sizeof(int));
	
	for(i=0;i<5;i++) // 0 1 2 3 4
	*(ptr+i)=i;
	printf("%d ",*ptr++);//once degeri yaz sonra  bir artir 0
	printf("%d ",(*ptr)++);//1 yazip bir artiracak
	printf("%d ",*ptr);//artirilmis degeri yazar yani 2
	printf("%d ",*++ptr);//bir sonraki adrese gidip degeri bir artirip yazacak yani 2 olcak
	printf("%d ",++*ptr);// 2. elemani bir kere daha artirip 3 olacak
	
	return 0;
}
