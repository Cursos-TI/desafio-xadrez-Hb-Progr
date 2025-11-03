#include <stdio.h>

int main() {

    int dir, passos;

    printf("===Torre===\n");
    printf("Escolha a direção da Torrre:\n");
    printf("1) Direta 2) Esquerda 3) Cima 4) Baixo\n ");
    printf("Opção: ");
    scanf("%d", &dir);

    printf("Quantos passos? ");
    scanf("%d", &passos);

    printf("\nMovimento da Torre:\n");
    for(int i = 0; i < passos; i++) {
        switch (dir) {
            case 1: printf("Direita\n");
            break;
            case 2: printf("Esquerda\n");
            break;
            case 3: printf("Cima\n");
            break;
            case 4: printf("Baixo\n");
            break;

            defaut:printf("Direção invalida\n"); i = passos; break;
        }
    }

    printf ("\n");

    printf("=== Bispo ===\n");
    printf("Escolha a diagonal do Bispo:\n");
    printf("1) Cima Direita 2) Cima Esquerda 3) Baixo Direita 4) Baixo Esquerda\n");
    printf("Opção: ");
    scanf("%d", &dir);

    printf("Quantos passos? ");
    scanf("%d", &passos);

    printf("\nMovimento do Bispo:\n");
    int j = 0;
    if (passos <= 0) {
        printf("Nada a mover.\n");
    } else {
        do {
            switch (dir){
                case 1: printf("Cima Direita\n");
                break;
                case 2: printf("Cima Esquerda\n");
                break;
                case 3: printf("Baixo Direita\n");
                break;
                case 4: printf("Baixo Esquerda\n");
                break;
                default:printf("Direção invalida\n");
                j = passos; break;

            }
            j++;
        } while (j < passos);
        printf("\n");
    }
     printf("=== Rainha ===\n");
     printf("Escolha a direção da Rainha: \n");
     printf("1) Direita 2) Esquerda 3) Cima 4) Baixo\n");
     printf("5) Cima Direita 6) Cima Esquerda 7)Baixo Direita 8)Baixo Esquerda\n");
     printf("Opção: ");
     scanf("%d", &dir);

     printf("Quantos passos? ");
     scanf("%d", &passos);

     printf("\nMovimento da Rainha:\n");
     int k = 0;
     while (k < passos) {
        switch (dir) {
        case 1: printf ("Direita\n");
        break;
        case 2: printf("Esquerda\n");
        break;
        case 3: printf("Cima\n");
        break;
        case 4 : printf("Baixo\n");
        break;
        case 5: printf("Cima Direita\n");
        break;
        case 6: printf("Cima Esquerda\n");
        break;
        case 7: printf("Baixo Direita\n");
        break;
        case 8: printf("Baixo Esquerda\n");
        break;
        default: printf("Direção invalida");
        k = passos; break;
        }
        k++; 
    }
     printf("\n");

    return 0;
}
