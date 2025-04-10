#include <stdio.h>
// Procedimento com recursividade
void moverTorre(int casas){ // Movimento Torre
    if(casas > 0){
        printf("Direita\n"); // Direção do movimento Torre
        moverTorre (casas - 1);
    }
}

void moverBispo(){ // Movimento Bispo
    int i = 1;
    // Mover 5 casas diagonal a direita
    do { // Entrada (1x pelo menos)
        printf("CimaDireita\n"); // Direção do movimento Bispo
        i++; // Incremento
    }while(i <= 5); // Condição
}

void moverRainha(int casas){ // Movimento Rainha
    if(casas > 0){
        printf("Esquerda\n"); // Direção do movimento Rainha
        moverRainha(casas - 1);
    }
}

void moverCavalo(){ // Movimento Cavalo
    int i = 1; // Flag para controlar o movimento em 'L'
    while (i--)
    {
        for (int j = 0; j < 4 ; j++)
        {
            if(j == 2)continue;
            if(j == 3)break;
            printf("Cima\n"); // Imprime "Cima" duas vezes
        }
        printf("Direita\n"); // Imprimei "Direita" uma vez
    }
}

int main (){
    int Torre = 5;
    int Rainha = 8;


    printf("\nMovimento Torre!\n");
    moverTorre(Torre);

    printf("\nMovimento Bispo\n");
    moverBispo();

    printf("\nMovimento Rainha\n");
    moverRainha(Rainha);

    printf("\nMovimento Cavalo\n");
    moverCavalo();

    return 0;
}
