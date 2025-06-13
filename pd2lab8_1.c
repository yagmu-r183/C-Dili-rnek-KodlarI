#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleshort(char **words,int count)
{
	
	int i,j;
	char *temp;
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(strcmp(words[j],words[j+1]>0))
			{
				temp=words[j];
				words[j]=words[j+1];
				words[j+1]=temp;
			}
			
		}
	}
}

int main(void)
{
	int count,i;
	printf("kelime sayisi girin:");
	scanf("%d",&count);
	char **words=malloc(count*sizeof(char));
	for( i=0;i<count;i++)
	{
		printf("kelime %d i girin:",i+1);
		char word[100];
		scanf("%s",word);
		words[i]=malloc((strlen(word)+1)*sizeof(char));
		strcpy(words[i],word);
	}
	bubbleshort(**words,count);
	return 0;
}
