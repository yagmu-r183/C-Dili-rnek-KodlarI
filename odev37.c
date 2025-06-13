#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Say=0,Say2=0,Say3=0,uZ,i,j,unSuZh;
    char cumle[100];
    char uh[10]={'A','E','U','I','O','i','a','e','u','o'};
    int  rakam[10]={'0','1','2','3','4','5','6','7','8','9'};
    printf("cumlenizi giriniZ:");
    gets(cumle);
    uZ=strlen(cumle);
    for (i=0;i<uZ;i++)
    {
        for(j=0;j<10;j++)
        {
            if ( cumle[i]==uh[j])
            {
                Say++;
            }
        }
        for(j=0;j<10;j++)
        {
            if (cumle[i]== rakam[j])
            {
                Say3++;
            }
        }
        if (cumle[i]==' ')
        {
            Say2++;
        }
    }
    unSuZh=uZ-(Say2+Say3+Say);
    printf ("cumlede %d kadar unlu harf icerir %d kadar rakam icerir %d kadar unSuZ harf icERiR",Say,Say3,unSuZh);

    return 0;
}
