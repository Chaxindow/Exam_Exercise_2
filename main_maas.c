#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int maas,toplam;
	
	printf("maaas giriniz : ");
	
	
	while(1)
	{
		scanf("%d",&maas);
		
		if(maas == -1)
		{
			break;
		}
		
		toplam += maas;
	}
	
   printf("%d",toplam);
   
	return 0;
}
