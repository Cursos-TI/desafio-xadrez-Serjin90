/****************************
    xadrez_Aventureiro.c
****************************/
#include <stdio.h>
#include <unistd.h>// Para usar as funções 'sleep'/'usleep' para gerar atrasos no programa
#include <locale.h>// Para uso da função 'setlocale'
char opt1;// Variável usada como seletor do 'switch' de menu
int ctrl1;// Variável usada como controle do loop externo ("Loop1")
int mov_torre = 5, mov_bispo = 5, mov_rainha = 8, cavalo1 = 1, cavalo2 = 2;
/*Variáveis para quantidade de casas a serem
  movimentadas em cada peça de xadrez     */
int main(void){
    setlocale(LC_ALL, "pt_BR");// Define idioma para correta impressão de caracteres em tela.
    ctrl1 = 1;
    while(ctrl1 != 0){// Loop1
        printf("\n\tESCOLHA QUAL DAS PEÇAS ABAIXO VOÇÊ QUER MOVIMENTAR\n\tDIGITE UMA DAS LETRAS CORRESPONDENTES ABAIXO\n\n\n");
        usleep(150000);// Atraso de 150 ms 
        printf("\n\t[ R ] ---> TORRE");
        usleep(150000);// Atraso de 150 ms 
        printf("\n\t[ B ] ---> BISPO");
        usleep(150000);// Atraso de 150 ms 
        printf("\n\t[ Q ] ---> RAINHA");
        usleep(150000);// Atraso de 150 ms 
        printf("\n\t[ K ] ---> CAVALO");
        usleep(150000);
        printf("\n\t[ E ] ---> SAIR DO PROGRAMA\n\n\n");
        scanf("%c", &opt1);
        scanf("%*c");// Limpa '\n' do buffer de entrada de dados

        switch(opt1){
            case 'R':
                for(int r = 0; r < mov_torre; r++){
                    printf("\tDireita ->\n");
                    usleep(400000);// Atraso de 400 ms
                }
                break;
            case 'B':
                for(int b = 0; b < mov_bispo; b++){
                    printf("\tCima ↑, Direita →\n");
                    usleep(400000);// Atraso de 400 ms
                }
                break;
            case 'Q':
                for(int q = 0; q < mov_rainha; q++){
                    printf("\t← Esquerda\n");
                    usleep(400000);// Atraso de 400 ms
                }
                break;
            case 'K':
                for(int k1 = 0; k1 < cavalo1; k1++){    // Laços aninhados
                    for(int k2 = 0; k2 < cavalo2; k2++){
                        printf("\tBaixo ↓\n");
                        usleep(400000);// Atraso de 400 ms
                    }
                    printf("\tDireita →\n");
                    usleep(400000);// Atraso de 400 ms
                }
                break;
            case 'E':
                ctrl1 = 0;// Altera variável de controle para finalizar loop
                break;
            default:
                printf("\n\tOpção incorreta!!!.\n\tPressione ENTER e escolha novamente.\n\n");
                getchar();// Cria uma pausa no programa por esperar uma entrada do usuário.
                break;
        }
    }
    return 0;
}
