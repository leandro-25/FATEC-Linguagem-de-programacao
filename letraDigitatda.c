#include <stdio.h>

int main() {
   char letra1, letra2;
   printf ("digite a primeira letra: \n");
    fflush(stdin);
  letra1 = getchar();
   printf ("digite  segunda letra: \n");
    fflush(stdin);
  letra2 = getchar();
   printf ("letras digitadas %c e %c \n ",letra1, letra2);


    return 0;
}
