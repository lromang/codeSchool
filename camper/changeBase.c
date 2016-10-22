#include <stdio.h>
#include <stdlib.h>

void changeBase(int, int);

int main(){
  int number, base;
  printf("Ingrese un número \n");
  scanf("%d", &number);
  printf("Ingrese una base \n");
  scanf("%d", &base);
  while(base > 16){
    printf("Sólo se aceptan bases en el rango [2, 16] \n");
    printf("Ingrese una base \n");
    scanf("%d", &base);
  }
  changeBase(number, base);
}

void changeBase(int number, int base){
  int cocient = number;
  int baseEntry;
  // Iter
  do{
    baseEntry = cocient % base;
    if(baseEntry < 9){
      printf("%d", baseEntry);
    }else{
      switch(baseEntry){
      case 10:
        printf("A");
        break;
      case 11:
        printf("B");
        break;
      case 12:
        printf("C");
        break;
      case 13:
        printf("D");
        break;
      case 14:
        printf("E");
        break;
      case 15:
        printf("F");
        break;
      default:
        printf("No se reconoce la base.");
        break;
      }
    }
    cocient  = (int) cocient / base;
  }while(cocient > 0);
  printf("\n");
}
