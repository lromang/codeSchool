#include <stdio.h>

int main(){
  int sum = 0;
  int counter = 0;
  int input;
  // Read and sum.
  printf("Ingrese una secuencia de números: \n");
  scanf("%d", &input);
  // Create sum.
  while(counter < 9){
    if(input > 0){
      sum = sum + input;
      counter++;
    }
    scanf("%d", &input);
  }
  sum = sum + input;
  printf("La suma de los números positivos ingresados es: %d \n", sum);
}
