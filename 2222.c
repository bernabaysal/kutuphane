#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
gün seçtir salý kapalý
üyeliði var mý
varsa devam et
yoksa yeni üyelik oluþtur
isim al
tc al
sira numarasi aldir???
ne yapmak istediðini sor (kitap al,kurallar,duyurular,iletiþim)
kitap aratmak için;
yaþ sor
türü belirle
baþka kitap ister mi
döngü
kural
iletiþim


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
	
	
	
	printf("\n\n*********ÝÞLEMLER*********\n");
	printf("1.kitap al \n");
	printf("2.kurallar \n");
	printf("3.iletiþim \n");
	
	
	printf("isleminizi seciniz :  ");
	scanf("%d",&durum);
	
	switch(durum){
		case 1: 
		 {
	      printf("yasiniz kac? \n");
		      scanf("%d",&yas);
		      if(yas<=18)
		      {
		      	printf("korku kitaplarýndan uzak durunuz!!!");
		      }
	while(1)
    {
	
    printf("sayi giriniz ( 1-10 arasý macera 20-30arasý suç 30-40arasý klasik kitaptýr )\n");
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
		printf("kitap klasik kitapdýr\n");
		
	}
	 else if (sayi>30)
	{
		printf("öyle bir kitap yok\n");
	}
	printf("baþka kitap seçmek istiyor musunuz? (istemiyorsanýz0a istiyorsanýz1e basin)\n");
	scanf("%d",&durum);
	if(durum==0)
		      break;
		      else
		      {
		      	sayac++;
		      	continue;
			  }
		      printf("kaydýnýz alýnmýþtýr 20 gün içinde geri getirin\n");
		case 2:
			  printf("kurallarýmýz a Ktüphane binasý, okuma salonlarý ve koridorlarda su hariç yiyecek ve içecek tüketilmez. \n Kütüphane binasý içersinde cep telefonuyla konuþulmaz.  \nKütüphane içerisinde izinsiz kamera, fotoðraf makinesi, cep telefonu ve benzeri araçlarla çekim yapýlmaz.  \n Kullanýcýlar, kendi eþyalarýndan sorumludur.  \n Kaybolan ya da çalýnan eþyalardan Kütüphane ve Dokümantasyon Daire Baþkanlýðý sorumlu deðildir \n Okuyucu salonlarýnda ve koridorlarda yüksek sesle konuþulmaz. \n Kütüphane kapanmadan on beþ dakika önce, ödünç alma ve iade iþlemleri tamamlanýr \n");

 
			  break;
		case 3:
		      printf("telefon numaramýz=0000 000 0000 \n adresimiz= Kötekli, Muðla Ünv., 48000 Muðla Merkez/Muðla \n");
			  break;
	   		   
	}
}
	
	 printf("1=macera2=suç3=klasik\n");
	 int dizi[3][2];  

    for(i=0;i<3;i++)
    {
        for( j=0;j<2;j+=2)
        {
            printf("%d. kiþinin kitap türünü giriniz: ",i+1);
            scanf("%d",&dizi[i][j]);
            printf("%d. kitabýn sayfa sayýsýný giriniz: ",i+1);
            scanf("%d",&dizi[i][j+1]);
        }
    }
 
    printf("\n sýra No\t kitap türü \t sayfa sayýsý\t");
 
    for(i = 0; i < 3; i++)
    {
        printf("\nNO : %d\t", i+1);
        for( j = 0; j < 2; j+=2)
        {
            printf("\t\t%d ",dizi[i][j]);
            printf("\t\t%d \n",dizi[i][j+1]);
        }
         
    }
	 
	printf("toplam kitap sayýsý %d dir\n",kitapsayisi);
	printf("bugün alinan kitap sayisi %dir \n",i);
	kitapsayisi-=i;
	printf("mevcut kitap sayýsý %dir.\n",kitapsayisi);
	
	
}
	 return 0;
	  }
	  
	 
	    

	  
