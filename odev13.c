#include <stdio.h>
#include <stdlib.h>
/**bir romanin her g�n bir �nceki g�n okudu�u sayfadan 5 sayfa fazlasini
okumaktadir. ilk g�n 10 sayfa okuyarak baslayan Furkan' in 1.000 sayfalik bir romani ka�
g�nde bitirecegini bulan program***
**guzel soru bi daha bak****/
int main() 
{
	int sayfa=10,okunan_sayfa=0,gun=0;
	while(okunan_sayfa<1000)
	{
	  okunan_sayfa+=sayfa;
	  sayfa+=5;
	  gun++;	
	}
	printf("kitabi %d gunde bitirdi",gun);
	
    
	return 0;
}
