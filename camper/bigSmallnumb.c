#include <stdio.h>
#include <stdlib.h>

int counterPar   = 0;
int counterImpar = 0;

void pedirLeer(int*, int*, int);
void desplegaResults(int, int);
// main
int main(){
  int maxPar, minImp;
  int Nexit = 0; // Min odd number.
  // Leer número.
  printf("Ingrese el valor de un número: \n");
  scanf("%d", &Nexit);
  // If -99 exit.
  while(Nexit != -99){
    // Only positive.
    if(Nexit <0){
      printf("Sólo acepto enteros positivos: \n");
    }else{
      pedirLeer(&maxPar, &minImp, Nexit);
    }
    printf("Ingrese el valor de un número: \n");
    scanf("%d", &Nexit);
  }
  desplegaResults(maxPar, minImp);
}

void pedirLeer(int *maxPar, int *minImp, int Nexit){
  if(Nexit % 2 == 0){
    if(counterPar == 0){
      *maxPar = Nexit;
    }else{
      if(Nexit > *maxPar){
        *maxPar = Nexit;
      }
      counterPar = counterPar + 1;
    }
  }else{
    if(counterImpar == 0){
      *minImp = Nexit;
    }else{
      if(Nexit < *minImp){
        *minImp = Nexit;
      }
      counterImpar = counterImpar + 1;
    }
  }
}

void desplegaResults(int maxPar, int minImp){
  printf("======================================================\n");
  printf("El mayor par de %d pares ingresados es: %d \nEl menor impar de %d impares ingresados es: %d \n",
         counterPar + 1,
         maxPar,
         counterImpar + 1,
         minImp);
  printf("======================================================\n");
}
