#include <math.h>
#include <stdio.h>

int main() {
  float urun_tutari, odenen_para;

  
  printf("Urunun tutarini giriniz (TL): ");
  scanf("%f", &urun_tutari);

  printf("Verilen parayi giriniz (TL): ");
  scanf("%f", &odenen_para);

  

  int para_ustu_kurus = (int)roundf((odenen_para - urun_tutari) * 100.0f);
  
  printf("Toplam Para Ustu: %.2f TL (%d kurus)\n\n", (float)para_ustu_kurus / 100.0f, para_ustu_kurus);
  
  int kalan = para_ustu_kurus;

  int adet_200 = kalan / 20000;
  kalan %= 20000;
  
  int adet_100 = kalan / 10000;
  kalan %= 10000;
  
  int adet_50 = kalan / 5000;
  kalan %= 5000;
  
  int adet_20 = kalan / 2000;
  kalan %= 2000;
  
  int adet_10 = kalan / 1000;
  kalan %= 1000;
  
  int adet_5 = kalan / 500;
  kalan %= 500;
  
  int adet_1tl = kalan / 100;
  kalan %= 100;
  
  int adet_50k = kalan / 50;
  kalan %= 50;
  
  int adet_25k = kalan / 25;
  kalan %= 25;
  
  int adet_10k = kalan / 10;
  kalan %= 10;
  
  int adet_5k = kalan / 5;
  kalan %= 5;
  
  int adet_1k = kalan / 1;
  kalan %= 1;

  int toplam_kupur_sayisi = adet_200 + adet_100 + adet_50 + adet_20 + adet_10 + adet_5 + adet_1tl + adet_50k + adet_25k + adet_10k + adet_5k + adet_1k;

  printf("Para Ustu Dagilimi\n");
  printf("%d adet 200 TL Banknot\n", adet_200);
  printf("%d adet 100 TL Banknot\n", adet_100);
  printf("%d adet 50 TL Banknot\n", adet_50);
  printf("%d adet 20 TL Banknot\n", adet_20);
  printf("%d adet 10 TL Banknot\n", adet_10);
  printf("%d adet 5 TL Banknot\n", adet_5);
  printf("%d adet 1TL Madeni Para\n", adet_1tl);
  printf("%d adet 50 Kurus Madeni Para\n", adet_50k);
  printf("%d adet 25 Kurus Madeni Para\n", adet_25k);
  printf("%d adet 10 Kurus Madeni Para\n", adet_10k);
  printf("%d adet 5 Kurus Madeni Para\n", adet_5k);
  printf("%d adet 1 Kurus Madeni Para\n", adet_1k);

  printf("\nVerilen Toplam Kupur/Madeni Para Sayisi: %d\n", toplam_kupur_sayisi);

  return 0;
}
