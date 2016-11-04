#include <stdio.h>
#include <string.h>


void getUnique(char[], int);

int main(){
  // Poner longitud del arreglo falta!!!
  char a[11];
  printf("Ingresa tu nombre: \n");
  gets(a);
  getUnique(a, 11);
}

void getUnique(char a[], int lengthInput){
  char uniq[lengthInput];
  int  count[lengthInput];
  int  length, i, j, duplicate;
  // Init conditions.
  uniq[0]  = a[0];
  count[0] = 1;
  length   = 1;
  // This loop goes over input.
  for(i = 1; i < lengthInput; i++){
    duplicate = 0;
    // This loop goes over uniq.
    for(j = 0; j < length; j++){
      if(a[i] == uniq[j]){
        count[j]++;
        duplicate = 1;
      }
    } // END LOOP
    if(duplicate == 0){
      uniq[length]  = a[i];
      count[length] = 1;
      length++;
    }
  } // END LOOP
  printf("Letter | Count\n");
  for(i = 0; i < length; i++){
    printf("%c  %d\n", uniq[i], count[i]);
  }
}
