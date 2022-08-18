#include <stdio.h>

int main (){
  int i = 1, n, num;
  printf("\nESTRUCTURAS DE REPETICIÓN 1\n");
  printf("\nPor favor ingrese la cantidad de números que quiere analizar: ");
  scanf("%10d", &n);
  if(n == 0) {
    printf("\nGracias por usar mi programa.\n");
    return 0;
  }
  do{
    printf("\nPor favor ingrese el %dº número que quiere analizar: ", i);
    scanf("%d", &num);
    while(num == 0){
      printf("El número a analizar debe ser mayor que cero.");
      printf("\nPor favor ingrese el %dº número que quiere analizar: ", i);
      scanf("%d", &num);
    }
    if(num %2 == 0) printf("\nEl número '%d' es par.\n", num);
    else printf("\nEl número '%d' es impar.\n", num);
    i++;
  } while (i <= n);
  printf("Todos sus números fueron analizados.");
  printf("\nGracias por usar mi programa.\n");
  return 0;
}