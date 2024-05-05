#include <stdio.h>
#include <stdlib.h>

int main() {

  // Malloc ile 10 elemanlı bir int dizisi ayırma
  int *dizi1 = (int *)malloc(10 * sizeof(int));

  // Diziyi kontrol etme
  if (dizi1 == NULL) {
    printf("Bellek ayırma başarısız!\n");
    return 1;
  }

  // Dizinin ilk 3 elemanına değer ata
  dizi1[0] = 10;
  dizi1[1] = 20;
  dizi1[2] = 30;

  // Dizinin ilk 3 elemanını yazdırma
  for (int i = 0; i < 3; i++) {
    printf("%d ", dizi1[i]);
  }

  printf("\n");

  // Calloc ile 5 elemanlı bir char dizisi ayırma ve sıfırlama
  char *dizi2 = (char *)calloc(5, sizeof(char));

  // Diziyi kontrol etme
  if (dizi2 == NULL) {
    printf("Bellek ayırma başarısız!\n");
    return 1;
  }

  // Dizinin ilk 3 elemanını yazdırma (sıfırlara sıfırlanmış)
  for (int i = 0; i < 5; i++) {
    printf("%c ", dizi2[i]);
  }

  printf("\n");

  // Belleği serbest bırakma
  free(dizi1);
  free(dizi2);

  return 0;
}
