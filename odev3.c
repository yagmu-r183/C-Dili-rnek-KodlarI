#include <stdio.h>
#include <stdlib.h>

//***final sorusu***
int main() 
{
   int i,dizi[10];
   for(i=0;i<10;i++)
   {
   	printf("dizinin %d. elemanini gir:",i+1);
   	scanf("%d",&dizi[i]);
   }
   printf("\n\n");
   for(i=0;i<10;i++)
   {
   	 if(dizi[i]%3==0)
   	 {
   	 	printf("%d,",dizi[i]);
     }
     
   }
   for(i=0;i<10;i++)
   {
   	 if(dizi[i]%3!=0)
   	 {
   	 	printf(",%d",dizi[i]);
     }
     
   }
	return 0;
}
