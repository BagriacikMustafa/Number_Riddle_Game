#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int sayi,tahmin,sayac=0,fark,i;
	srand(time(NULL));
	sayi=rand()%100+1;
	printf("[1-100] araliginda tuttugum sayiyi bulabilir misin ?\n");
	while(1){
		for(i=0;i<=1;i++){
			printf("%d.kullanici tahminini yazabilir:",i+1);
			scanf("%d",&tahmin);
			if(sayi<=tahmin){
			fark=tahmin-sayi;
			}
			else{
			fark=sayi-tahmin;}
			if(fark==0){
				printf("Tebrikler Dogru bildiniz.\n");
				break;
			}
			else if(fark<=5){
				printf("cok yaklastiniz.\n");
			}
			else if(fark>5 && fark<=10){
				printf("yaklastiniz..\n");
			}
			else if(fark>10 && fark<=30){
				printf("uzaksiniz.\n");
			}
			else{
				printf("cok uzaksiniz..\n");
			}
			}
		}
}
