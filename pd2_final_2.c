#include <stdio.h>
#include <stdlib.h>

struct students{
	int number;
	char name[40];
	float grade;
};

int main() 
{
	FILE *file;
	file=fopen("student.dat","w");
	if(file==NULL)
	{
		printf("dosya acilmadi");
	}
	else
	{
		
	}
	return 0;
}
