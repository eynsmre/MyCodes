#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tahminn();
int dogruMu(int, int, int);

int main()
{
	printf("Sayiyi tahmin et uygulamasina hos geldiniz. \n Bilgisayar 0 ile 100 arasinda rastgele bir sayı tutacak. Bilmek icin 7 hakkin var.");
	
	int tahmin,kere,a;
	kere=1;
	
	srand ( time(NULL) );
	a = rand()%100;
	printf("%d \n", a);
	tahmin=tahminn();
	
	if (dogruMu(tahmin,a,kere)==0){
		tahmin=tahminn();
		kere+=1;
			if (dogruMu(tahmin,a,kere)==0){
		tahmin=tahminn();
		kere+=1;
	if (dogruMu(tahmin,a,kere)==0){
		tahmin=tahminn();
		kere+=1;
	if (dogruMu(tahmin,a,kere)==0){
		tahmin=tahminn();
		kere+=1;
	if (dogruMu(tahmin,a,kere)==0){
		tahmin=tahminn();
		kere+=1;
	if (dogruMu(tahmin,a,kere)==0){
		tahmin=tahminn();
		kere+=1;
	if (dogruMu(tahmin,a, kere)==0){
		printf("%d denemede dogruyu bulamadiniz." ,kere);
		
			
		
			
		
	}		
		
	}		
		
	}		
		
	}		
		
	}		
		
	}
		
	}
	return 0;
}

int tahminn(){
	int t;
	printf("lutfen bir sayi giriniz: \n");
	scanf("%d", &t);
	return t;
}

int dogruMu(int t, int s, int k){
	if(t<s){
		printf("sayiyi arttir.\n");
	}
	else if(t>s){
		printf("sayiyi dusur.\n");
	}
	else{
		printf("Tebrikler %d. denemede buldun" ,k );
		return 1;
	}
	return 0;
}
