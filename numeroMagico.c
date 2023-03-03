#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int magico = rand () % 100;
    int palpite;
    int cont = 0;
    while (1){
        cont++;
    printf ("Digite seu Palpite [0..99]: -  TENTATIVAS [%d/7]\n",cont);
    scanf("%d", & palpite);
   // cont++
    if(palpite == magico){
        printf("Parabens voce venceu!!!!\n\n");
        return 0;
    }else{
        printf("Voce errou\n");
        if(palpite > magico){
            printf("Seu palpite foi alto\n\n");
        }else{
            printf("Seu palpite foi baixo \n\n");
        }
    }
    if(cont == 7){
        printf ("suas chance acabaram\n\n");
    printf("O numero magico era %d", magico);
        return 0;
    }

     }

 // printf ("%d", magico);
  //  return 0;
}
