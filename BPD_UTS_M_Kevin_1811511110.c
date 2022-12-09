#include<stdio.h>
void main ()
{
  printf("Muhamad Kevin Pangeran\n");
  printf("1811511110\n");

  
    int nilai;
    printf("input nilai matakuliah:");
    scanf("%i, &nilai");
    if (nilai >= 76 && nilai <= 100){
      printf("\nLULUS");
      printf("\nGRADE A");
    }
    if (nilai >= 66 && nilai < 75){
      printf("\nLULUS");
      printf("\nGRADE B");
    }
    if (nilai >= 51 && nilai < 65){
      printf("\nLULUS");
      printf("\nGRADE C");
    }
    if (nilai >=0 && nilai <= 50){
      printf("\nGAGAL");
      printf("\nGRADE D");
    }
    if (nilai < 0 || nilai > 100){
      printf("\nInput nilai antara 0-100");
    }
    return 0;

  }