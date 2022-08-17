#include <stdio.h>

int main(){
  int num;
  printf("\n\n\nPor favor ingrese un número mayor a cero para validar si es par o impar: ");
  scanf("%d", &num);

  if(num % 2 == 0)
    printf("\nEl número: %d es par\n\n\n", num);
  else 
    printf("\nEl número: %d es impar\n\n\n", num);
  return 0;
}