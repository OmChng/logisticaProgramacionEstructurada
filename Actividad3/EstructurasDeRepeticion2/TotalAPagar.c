#include <stdio.h>

int main(){
  int i = 1, j, k, l, m, n = 0;
  printf("\nESTRUCTURAS DE REPETICIÓN 2\n");
  printf("\nPor favor ingrese cuántos tipos de diferentes artículos lleva en el carrito: ");
  scanf("%5d", &j);
  if(j <= 0){
    printf("\nSu carrito está vacío! No debe de pagar nada.");
    printf("\nGracias por usar mi programa.\n");
    return 0;
  } else {
    for(k = 0; k < j; k++){
      printf("\n¿Cuántas unidades del %dº artículo lleva?: ", k + 1);
      scanf("%5d", &l);
      while(l == 0){
        printf("\nNo puede llevar %d unidades de un artículo, es ilógico.", l);
        printf("\n¿Cuántas unidades del %dº artículo lleva?: ", k + 1);
        scanf("%5d", &l);
      }
      printf("\n¿Cuánto cuesta una unidad del %dº artículo?: ", k + 1);
      scanf("%5d", &m);
      while(m == 0){
        printf("\nVenga, ni que regalaran las cosas en esta tienda...");
        printf("\n¿Cuánto cuesta una unidad del %dº artículo?: ", k + 1);
        scanf("%5d", &m);
      }
      n += l*m;
    }
    printf("\nUsted debe de pagar: $%d pesos\n", n);
    printf("\nGracias por usar mi programa.\n");
  }
  return 0;
}