/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : Overview of C Language
*Percobaan        : -
*Hari dan Tanggal : Selasa, 15 Februari 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>

float factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }

  int res = 1;
  for (int i = n; i > 0; i--)
  {
    res = res * i;
  }
  return (float)res;
}



int main()
{
  int n = 0;
  float x = 1, res = 0;

  printf("Masukkan jumlah suku: ");
  scanf("%d", &n);
  printf("Masukkan nilai x: ");
  scanf("%f", &x);

  if (n < 1)
  {
    printf("Jumlah suku harus lebih dari 0!\n");
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    res = res + power(x, i) / factorial(i);
  }

  printf("Pendekatan numerik dari e pangkat %.8f dengan %d suku adalah: %.8f\n", x, n, res);
  return 0;
}
