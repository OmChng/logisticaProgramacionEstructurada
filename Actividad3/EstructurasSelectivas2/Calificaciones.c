#include <stdio.h>

int main()
{
  float calif;
  printf("\nIngrese su calificación: ");
  scanf("%4f", &calif);
  if(calif < 0 || calif > 10.0) printf("\nERROR\n\n");
  if(calif == 10.0) printf("\nExcelente!\n\n");
  if(calif < 10.0 && calif >= 9.0) printf("\nMuy Bien!\n\n");
  if(calif < 9.0 && calif >= 8.0) printf("\nBien.\n\n");
  if(calif < 8.0 && calif >= 7.0) printf("\nRegular...\n\n");
  if(calif < 6.9 && calif >= 0.0) printf("\nNo acreditado.\n\n");
}