#include<stdio.h> 
int main() 
{ 
 int i, n=5; 
 char str[50]; 
  
 FILE *fptr = fopen("List.txt", "w"); 
 if (fptr == NULL) 
 { 
  printf("Could not open file"); 
  return 0; 
 } 
 
 for (i = 0; i < n; i++) 
 { 
  puts("Enter a name"); 
  scanf("%s", str); 
  fprintf(fptr,"%d.%s\n", i, str); 
 } 
 fclose(fptr); 
  
 fptr = fopen("List.txt", "w+"); 
 if (fptr == NULL) 
 { 
  printf("Could not open file"); 
  return 0; 
 } 
  
 fprintf(fptr, "-- END OF FILE --"); 
 fclose(fptr); 
 
 return 0; 
} 
