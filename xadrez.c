#include <stdio.h>

void moverTorre(int passos, int dir) {
    if(passos <=0) return;
        switch (dir) {
            case 1: printf("Direita\n");
            break;
            case 2: printf("Esquerda\n");
            break;
            case 3: printf("Cima\n");
            break;
            case 4: printf("Baixo\n");
            break;

            defaut:printf("Direção invalida\n"); return;
        }moverTorre(passos - 1, dir);
    }

void moverRainha(int passos, int dir){
    if(passos <= 0) return;
    switch (dir){
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
        default: printf("Direção invalida"); return;      
} moverRainha(passos - 1,dir);
}


void moverBispo(int passos, int dir) {
    if(passos <= 0) return;
    switch (dir){
                case 1: printf("Cima Direita\n");
                break;
                case 2: printf("Cima Esquerda\n");
                break;
                case 3: printf("Baixo Direita\n");
                break;
                case 4: printf("Baixo Esquerda\n");
                break;
                default:printf("Direção invalida\n");return;
    } moverBispo(passos - 1, dir);
}
void moverCavalo(int dir, int etapa) {
    if(etapa == 0) return;
    switch (dir) 

    case 1:
      if (etapa == 2)
       printf("Baixo\n");
       else if (etapa == 1){
        printf("Baixo\nEsquerda\n");
        moverCavalo(dir, etapa - 1);
      
        break;
           
    case 2: 
        if(etapa == 2)
        printf("Baixo\n");
        else if (etapa == 1)
        printf("Baixo\nDireita\n");
        moverCavalo(dir,etapa - 1);
        break;
    
     case 3: 
        if (etapa ==2)
         printf("Cima\n");
         else if(etapa == 1)
         printf("Cima\nDireia\n");
         moverCavalo(dir, etapa - 1);
         break;
     
     case 4: 
        if(etapa == 2)
        printf("Cima\n");
        else if(etapa ==1)
        printf("Cima\nDireita\n");
        moverCavalo(dir, etapa -1);
        break;
     
     default:
     printf("Direção invalida");
        return;
    
    }
    
}

int main() {
 int dir; 
 int passos;

    printf("===Torre===\n");
    printf("Escolha a direção da Torrre:\n");
    printf("1) Direta 2) Esquerda 3) Cima 4) Baixo\n ");
    printf("Opção: ");
    scanf("%d", &dir);

    printf("Quantos passos? ");
    scanf("%d", &passos);

    printf("Movimento da Torre:\n");
    moverTorre(passos,dir);
    printf("\n");

    printf("=== Bispo ===\n");
    printf("Escolha a diagonal do Bispo:\n");
    printf("1) Cima Direita 2) Cima Esquerda 3) Baixo Direita 4) Baixo Esquerda\n");
    printf("Opção: ");
    scanf("%d", &dir);

    printf("Quantos passos? ");
    scanf("%d", &passos);

    printf("\nMovimento do Bispo:\n");
    moverBispo(passos,dir);
    printf("\n");
    
     printf("=== Rainha ===\n");
     printf("Escolha a direção da Rainha: \n");
     printf("1) Direita 2) Esquerda 3) Cima 4) Baixo\n");
     printf("5) Cima Direita 6) Cima Esquerda 7)Baixo Direita 8)Baixo Esquerda\n");
     printf("Opção: ");
     scanf("%d", &dir);

     printf("Quantos passos? ");
     scanf("%d", &passos);

     printf("\nMovimento da Rainha:\n");
     moverRainha(passos,dir);
     printf("\n");

     printf("=== Cavalo ===\n");
     printf("Escolha o movimento do Cavalo em L: \n");
     printf("1) 2 Baixo + 1 Esquerda\n");
     printf("2) 2 Baixo + 1 Direita\n");
     printf("3) 2 Cima + 1 Esquerda\n");
     printf("4) 2 Cima + 1 Direita\n");
     printf("Opção: ");
     scanf("%d", &dir);

     printf("\nMovimentação do Cavalo:\n");
     moverCavalo(dir,2);
     printf("\n");

    return 0;
}
