#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
g�n se�tir sal� kapal�
�yeli�i var m�
varsa devam et
yoksa yeni �yelik olu�tur
isim al
tc al
sira numarasi aldir???
ne yapmak istedi�ini sor (kitap al,kurallar,duyurular,ileti�im)
kitap aratmak i�in;
ya� sor
t�r� belirle
ba�ka kitap ister mi
d�ng�
kural
ileti�im


*/

int main() {
	
	setlocale(LC_ALL, "Turkish");
	char islem[50];
	int hayir;
	int evet;
	char ad[50];
    char soyad[50];
    int tc;
    int durum;
    int yas;
    int sayi;
    int sayac;
    char i;
    int j;
    int kitapsayisi=1000;
    
    
    
 /*  FILE*dosya;
   dosya=fopen("C:\Users\BERNA\Desktop\projemdeprojem","w");
   fputs(ad,dosya);*/
    
    
    
    
    
	printf("hos geldiniz \n uyeliginiz var mi : ");
	scanf("%s",&islem);
	
	if(islem==hayir)
	{
		printf("devam et");
		
	}
	else 
	{
		printf("adinizi giriniz \n");
		gets(ad);
		scanf("%s",&ad);
		printf("tcnizi girin \n");
		scanf("%d",&tc);
	}
	
	
	
	printf("\n\n*********��LEMLER*********\n");
	printf("1.kitap al \n");
	printf("2.kurallar \n");
	printf("3.ileti�im \n");
	
	
	printf("isleminizi seciniz :  ");
	scanf("%d",&durum);
	
	switch(durum){
		case 1: 
		 {
	      printf("yasiniz kac? \n");
		      scanf("%d",&yas);
		      if(yas<=18)
		      {
		      	printf("korku kitaplar�ndan uzak durunuz!!!");
		      }
	while(1)
    {
	
    printf("sayi giriniz ( 1-10 aras� macera 20-30aras� su� 30-40aras� klasik kitapt�r )\n");
    scanf("%d",&sayi); 
    
    if(sayi<10 && sayi>=1)
    
    {
    	printf("kitap macera kitabidir\n");
    
	}
	else if(sayi<20 && sayi>=10)
	
	{
		printf("kitap suc kitabidir\n");
		
	}
	 else if(sayi<=30 && sayi>=20)
	{
		printf("kitap klasik kitapd�r\n");
		
	}
	 else if (sayi>30)
	{
		printf("�yle bir kitap yok\n");
	}
	printf("ba�ka kitap se�mek istiyor musunuz? (istemiyorsan�z0a istiyorsan�z1e basin)\n");
	scanf("%d",&durum);
	if(durum==0)
		      break;
		      else
		      {
		      	sayac++;
		      	continue;
			  }
		      printf("kayd�n�z al�nm��t�r 20 g�n i�inde geri getirin\n");
		case 2:
			  printf("kurallar�m�z a Kt�phane binas�, okuma salonlar� ve koridorlarda su hari� yiyecek ve i�ecek t�ketilmez. \n K�t�phane binas� i�ersinde cep telefonuyla konu�ulmaz.  \nK�t�phane i�erisinde izinsiz kamera, foto�raf makinesi, cep telefonu ve benzeri ara�larla �ekim yap�lmaz.  \n Kullan�c�lar, kendi e�yalar�ndan sorumludur.  \n Kaybolan ya da �al�nan e�yalardan K�t�phane ve Dok�mantasyon Daire Ba�kanl��� sorumlu de�ildir \n Okuyucu salonlar�nda ve koridorlarda y�ksek sesle konu�ulmaz. \n K�t�phane kapanmadan on be� dakika �nce, �d�n� alma ve iade i�lemleri tamamlan�r \n");

 
			  break;
		case 3:
		      printf("telefon numaram�z=0000 000 0000 \n adresimiz= K�tekli, Mu�la �nv., 48000 Mu�la Merkez/Mu�la \n");
			  break;
	   		   
	}
}
	
	 printf("1=macera2=su�3=klasik\n");
	 int dizi[3][2];  

    for(i=0;i<3;i++)
    {
        for( j=0;j<2;j+=2)
        {
            printf("%d. ki�inin kitap t�r�n� giriniz: ",i+1);
            scanf("%d",&dizi[i][j]);
            printf("%d. kitab�n sayfa say�s�n� giriniz: ",i+1);
            scanf("%d",&dizi[i][j+1]);
        }
    }
 
    printf("\n s�ra No\t kitap t�r� \t sayfa say�s�\t");
 
    for(i = 0; i < 3; i++)
    {
        printf("\nNO : %d\t", i+1);
        for( j = 0; j < 2; j+=2)
        {
            printf("\t\t%d ",dizi[i][j]);
            printf("\t\t%d \n",dizi[i][j+1]);
        }
         
    }
	 
	printf("toplam kitap say�s� %d dir\n",kitapsayisi);
	printf("bug�n alinan kitap sayisi %dir \n",i);
	kitapsayisi-=i;
	printf("mevcut kitap say�s� %dir.\n",kitapsayisi);
	
	
}
	 return 0;
	  }
	  
	 
	    

	  
