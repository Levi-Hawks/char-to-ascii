#include <stdio.h>

void main ()
{
  char caracter[20];
  int indice;
  printf("Digite qualquer coisa: ");
  scanf("%s", &caracter);
  for (indice=0;caracter[indice] != '\0';indice++)
  {
    printf("[%c] = %d\n", caracter[indice], caracter[indice]);
  }
}

