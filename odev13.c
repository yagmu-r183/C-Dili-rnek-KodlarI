#include <stdio.h>
#include <stdlib.h>
/**bir romanin her gün bir önceki gün okuduðu sayfadan 5 sayfa fazlasini
okumaktadir. ilk gün 10 sayfa okuyarak baslayan Furkan' in 1.000 sayfalik bir romani kaç
günde bitirecegini bulan program***
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
