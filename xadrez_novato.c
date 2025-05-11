
#include <stdio.h>
int main(){

    //Aqui segue a movimentação do Bispo

    printf("Movimento da Bispo.\n");
    for (int bispo = 0; bispo < 5; bispo++)
    {
        printf("Cima-Direita\n");
    }

    //Aqui seugue o movimento da Rainha
    printf("Movimento do Rainha.\n");
    int rainha = 0;
    while (rainha < 8)
    {
        printf("Esquerda\n");
        rainha++;
    }

    //Aqui segue a movimentação da torre

    printf("Movimento da Torre.\n");
    int torre = 0;
    do
    {
        printf("Frente\n");
        torre++;
    } while (torre < 5);

    return 0;
}
