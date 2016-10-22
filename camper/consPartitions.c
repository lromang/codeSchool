#include <stdio.h>
#include <stdlib.h>

int getMaxLength(int);
int constructSum(int, int);

int main(){
  int objective, proxy, sum, maxLength, lengths, lowerBound, uperBound, nWays, printMe;
  // Pedir número.
  printf("Ingrese el número del cual quiere encontrar particiones: \n");
  scanf("%d", &objective);
  // Checar si es positivo.
  while(objective <= 0){
    printf("El número tiene que ser positivo!!! \n");
    printf("Ingrese el número del cual quiere encontrar particiones: \n");
    scanf("%d", &objective);
  }

  /*
   * Iterar sobre todas las secuencias de números
   * 3 <= lengths <= maxLength
   */
  lengths   = 3;
  maxLength = getMaxLength(objective);
  nWays     = 0;
  while(lengths <= maxLength){
    proxy      = (int) objective / lengths;
    lowerBound = proxy;
    uperBound  = proxy + lengths;
    sum        = constructSum(lowerBound, lengths);
    while((sum < objective) && (lowerBound < uperBound)){
      lowerBound++;
      sum        = constructSum(lowerBound, lengths);
    }
    if(sum == objective){
      printMe = 0;
      // Imprimir resultados.
      printf("\n======================================= \n");
      printf("Suma de %d terminos para %d: \n", lengths, objective);
      printf("%d", lowerBound - printMe);
      while(printMe < lengths){
        printf(" + %d ", lowerBound - printMe);
        printMe++;
      }
      printf("\n======================================= \n");
      // Increase number of ways.
      nWays++;
    }
    lengths++;
  }
}

/*
 * Esta función me dice la longitud
 * máxima de la cadena de números
 * consecutivos que sumen n.
 */
int getMaxLength(int n){
  int k = 0;
  while((k *(k + 1) / 2) < n){
    k++;
  }
  return k;
}

int constructSum(int n, int length){
  int sum = 0;
  int i = 0;
  while(i < length){
    sum = sum + (n - i);
    i++;
  }
  return sum;
}
