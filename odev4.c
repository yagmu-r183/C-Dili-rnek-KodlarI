#include <stdio.h>
#include <stdlib.h>

// *** final sorusu *** 
int main() 
{
	int n,enkcktek;
	printf("sayi girin:");
	scanf("%d",&n);
	enkcktek=n;
	while (n!=-1)
	{
		printf("sayi girin:");
	    scanf("%d",&n);
	    if(n%2==1)
	    {
	    	if(n<enkcktek)	
	    	{
	    		enkcktek=n;
			}
		}
	   	
	}
	printf("\n");
	printf("en kucuk tek:%d",enkcktek);
	
	return 0;
}
