#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int kolay (){
    srand(time(NULL));
    int rsayi = rand() % 10 +1;

    return rsayi;
    }
int orta () {
    srand(time(NULL));
    int rsayi2 = rand() % 100 + 100;

    return rsayi2;

}

int zor () {
        srand(time(NULL));
        int rsayi3 = rand() % 1000 + 1000;

        return rsayi3;
}


int main () {


printf("Oyunumuza hosgeldiniz baslamak icin bir tusa basiniz.\n");
getch();
printf("Ekranimizda sayilar belli bir sureligine belirip kaybolacaktir.\n******************************************\nBu sayilari aklinizda tutup cevaba yazmalisiniz.");
printf("\n**************************************************\n*******************************************\n");
int puan = 0;

int i = 0 ;
while (i <1) {
        printf("Hangi modda oynamak istiyorsunuz ? (Kolay = 1\nOrta = 2\nZor =3)\n");
        int tercih;
        scanf("%d",&tercih);
        if (tercih ==1) {
            printf("Kolay modu sectiniz oyunumuz basliyor.\n");
            int s = 0;
            while(s<1) {
                 printf("Oyundan cikmak icin 31 i tuslayiniz.\n");
                 int ksayi= kolay();
                 printf("Sayimiz geliyorrr.\n");
                 Sleep(2000);
                 printf("%d\n",ksayi);
                 Sleep(1000);
                 system("cls");
                 printf("Ekrandaki sayi kacti ?\n");
                 int cevap;
                 scanf("%d",&cevap);

                 if (cevap == 31){
                    goto cikis;
                 }
                 else  if (cevap==ksayi){
                        puan = puan+5;
                    printf("Tebrikler bildiniz puaniniz : %d \n",puan);
                    printf("Yeni sayiniz geliyor...\n");
                    continue;

                 }
                 else {
                    puan = puan -5;
                    printf("Malesef bilemediniz tekrar deneyin isterseniz...\n");
                    printf("Puaniniz : %d \n",puan);
                 }

            }


        }

else if (tercih ==2) {
            printf("Orta modu sectiniz oyunumuz basliyor.\n");
            int s = 0;
            while(s<1) {
                 printf("Oyundan cikmak icin 31 i tuslayiniz.\n");
                 int ksayi= orta();
                 printf("Sayimiz geliyorrr.\n");
                 Sleep(2000);
                 printf("%d\n",ksayi);
                 Sleep(500);
                 system("cls");
                 printf("Ekrandaki sayi kacti ?\n");
                 int cevap;
                 scanf("%d",&cevap);

                 if (cevap == 31){
                    goto cikis;
                 }
                 else  if (cevap==ksayi){
                        puan = puan+10;
                    printf("Tebrikler bildiniz puaniniz : %d \n",puan);
                    printf("Yeni sayiniz geliyor...\n");
                    continue;

                 }
                 else {
                    puan = puan -10;
                    printf("Malesef bilemediniz tekrar deneyin isterseniz...\n");
                    printf("Puaniniz : %d \n",puan);
                 }

            }


        }


        else if (tercih ==3) {
            printf("Zor modu sectiniz oyunumuz basliyor.\n");
            int s = 0;
            while(s<1) {
                 printf("Oyundan cikmak icin 31 i tuslayiniz.\n");
                 int ksayi= zor();
                 printf("Sayimiz geliyorrr.\n");
                 Sleep(2000);
                 printf("%d\n",ksayi);
                 Sleep(250);
                 system("cls");
                 printf("Ekrandaki sayi kacti ?\n");
                 int cevap;
                 scanf("%d",&cevap);

                 if (cevap == 31){
                    goto cikis;
                 }
                 else  if (cevap==ksayi){
                        puan = puan+15;
                    printf("Tebrikler bildiniz puaniniz : %d \n",puan);
                    printf("Yeni sayiniz geliyor...\n");
                    continue;

                 }
                 else {
                    puan = puan -15;
                    printf("Malesef bilemediniz tekrar deneyin isterseniz...\n");
                    printf("Puaniniz : %d \n",puan);
                 }

            }


        }








}




cikis :
    printf("Puaniniz: %d.\nGorusuruz..\n",puan);
	int cikiss;
	scanf("%d",&cikiss);
















return 0;

}
