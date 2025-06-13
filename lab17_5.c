#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char cum[30],*ptr;
	int uz,i,say,A[30],k=0,l=0,j;
	printf("cumle gir:");
	gets(cum);
	ptr=cum;
	uz=strlen(cum);
	i=strlen(cum);
	for(j=0;j<=uz;j++)
	{
		A[j]=0;
	}
	for(k=0;k<uz;k++)
	{
		i=uz;
		for(i-1;i>=0;i--)
		{
		    	if(cum[k]==cum[i])
				{
					A[k]++;	
				}	
		}
	}
	for(k=0;k<uz;k++)
	{
		 	printf("%c harfinden %d tane var\n",cum[k],A[k]);
	}

	return 0;
}
