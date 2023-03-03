#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ogrenci {
    char isim[50];
    char soyisim[50];
    int ogrencino;
    char adres[100];
    char il[50];
    char ilce[50];
    char postakodu[10];
};

int main(int argc, char *argv[]) {
	  struct ogrenci ogrenci1 = {"mehmet yigit", "Erdem", 1353541, "... mah ...sokak no46 ","istanbul", "Sultangazi", "13463"};

    printf("isim soyisim: %s %s\n", ogrenci1.isim, ogrenci1.soyisim);
    printf("ogrenci numarasi: %d\n", ogrenci1.ogrencino);  
    printf("adres: %s %s %s %s\n", ogrenci1.adres,ogrenci1.il, ogrenci1.ilce, ogrenci1.postakodu);
    
    printf("--------------------------------------------------\n");
    struct ogrenci ogrenci2= {"isim", "soyisim", 1353541, "adres ","il", "ilce", "13463"};
    
    printf("isim soyisim: %s %s\n", ogrenci2.isim, ogrenci2.soyisim);
    printf("ogrenci numarasi: %d\n", ogrenci2.ogrencino);  
    printf("adres: %s %s %s %s\n", ogrenci2.adres,ogrenci2.il, ogrenci2.ilce, ogrenci2.postakodu);
    
    printf("--------------------------------------------------\n");
    struct ogrenci ogrenci3= {"isim", "soyisim", 1353541, "adres ","il", "ilce", "13463"};
    
    printf("isim soyisim: %s %s\n", ogrenci3.isim, ogrenci3.soyisim);
    printf("ogrenci numarasi: %d\n", ogrenci3.ogrencino);  
    printf("adres: %s %s %s %s\n", ogrenci3.adres,ogrenci3.il, ogrenci3.ilce, ogrenci3.postakodu);
    
    printf("--------------------------------------------------\n");
    struct ogrenci ogrenci4= {"isim", "soyisim", 1353541, "adres ","il", "ilce", "13463"};
    
    printf("isim soyisim: %s %s\n", ogrenci4.isim, ogrenci4.soyisim);
    printf("ogrenci numarasi: %d\n", ogrenci4.ogrencino);  
    printf("adres: %s %s %s %s\n", ogrenci4.adres,ogrenci4.il, ogrenci4.ilce, ogrenci4.postakodu);
    
    printf("--------------------------------------------------\n");
    struct ogrenci ogrenci5= {"isim", "soyisim", 1353541, "adres ","il", "ilce", "13463"};
    
    printf("isim soyisim: %s %s\n", ogrenci5.isim, ogrenci5.soyisim);
    printf("ogrenci numarasi: %d\n", ogrenci5.ogrencino);  
    printf("adres: %s %s %s %s\n", ogrenci5.adres,ogrenci5.il, ogrenci5.ilce, ogrenci5.postakodu);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}
