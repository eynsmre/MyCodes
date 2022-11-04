#include <stdio.h>

int sayiAl();
int secenek();
void asalMi(int);
int faktoriyel(int);


int main(){
	
	int ss,opt;
	ss = sayiAl();
	opt=secenek();
	
	
	
	if(opt==2){
		asalMi(ss);
		}
		

	else{
		faktoriyel(ss);
			}
	
	return 0;
}

int sayiAl(){
	int s;
	
	do{
		printf("Lutfen pozitif bir sayi giriniz: ");
		scanf("%d", &s);
		
	}while(s<2);
	
	return s;
}

int secenek(){
	int op;
	do{
	printf("Girdiginiz sayinin faktoriyeli alýnsýn istiyorsanýz 1, asal olup olmadigini ogrenmek istiyorsaniz 2 yazin.");
	scanf("%d",&op);
	}while(op!=1 && op!=2);
	
	return op;
}

void asalMi(int s){
	int i=2;
	while(i<s){
		if(s%i==0){
			printf("%d sayisi asal degildir.", s);
			return;
		}
		i++;
	}
	printf("%d sayisi asaldir.", s);
}

int faktoriyel(int s){
	int sonuc=1,i;
	for(i=1 ; i<=s ; i++){
		sonuc*=i;
		}
		printf("%d", sonuc);
	return sonuc;
}
