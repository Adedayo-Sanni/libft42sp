
#include <stdio.h>
#include <string.h>

int main(){
  char resultado[50] = "Programa ";
  printf("%s\n", resultado);

  strcat(resultado, "de Ensino ");
  printf("%s\n", resultado);

  strcat(resultado, "e Tutoria");
  printf("%s\n", resultado);
  
  char curso[10] = " - BCC";
  strcat(resultado, curso);
  printf("%s", resultado);
  
  return 0;
}
