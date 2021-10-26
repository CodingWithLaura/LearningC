#include <stdio.h>
#include <stdlib.h>

int main(){
  int ne_crazy_variable;
  int* pointer = 0;

  pointer = (int*)malloc(16*sizeof(int));
  printf("Hallo kleines Programm variable: %d\n",ne_crazy_variable);

  for(int i = 0;i<16;i++)
  {
    printf("i: %d wert: %d\n",i,pointer[i]);
  }
  free(pointer);
  return 0;
}
