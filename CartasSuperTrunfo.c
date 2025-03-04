#include <stdio.h> 

/*Definição da estrutura da carta, contendo as caracteristicas*/
typedef struct CartasSuperTrunfoMack2
{
    char nome[20];
    int area;
    int populacao;
    int pib;
} carta;

int main(){
    /*Definição fixa das cartas do jogador e do computador*/
    carta jogador = {"Brasil", 8, 217, 730};
    carta computador = {"Argentina", 2, 46, 630};

    printf("Sua Carta: %s\n", jogador.nome);
    printf("1º Área: %d\n", jogador.area);
    printf("2º População: %d\n", jogador.populacao);
    printf("3º PIB: %d\n", jogador.pib);

    /*Escolha do atributo para comparar*/
    int escolha;
    printf("\nEscolha um atributo para comparar(1 - Área, 2 - População, 3 - PIB): ");
    scanf("%d", &escolha);

    /*Variável para armazenar o resultado da comparação*/
    int resultado = 0;

    /*Estrutura de decisção*/
    if (escolha == 1){
        resultado = (jogador.area > computador.area) ? 1 :
                    (jogador.area < computador.area) ? 2 : 0;
    }
    else if (escolha == 2){
        resultado = (jogador.populacao > computador.populacao) ? 1 :
                    (jogador.populacao < computador.populacao) ? 2 : 0;
    }
    else if (escolha == 3){
        resultado = (jogador.pib > computador.pib) ? 1 :
                    (jogador.pib < computador.pib) ? 2 : 0;
    }
    else {
        printf("Opção Inválida!\n");
        return 1;
    }
    printf("\nCarta do Computador: %s\n", computador.nome);
    
    /*Resultado da Rodada*/
    if (resultado == 1){
        printf("você venceu!\n");
    }
    else if (resultado == 2){
        printf("O computador venceu!");
    }
    else {
        printf("Empate!\n");
    }
    return 0;
}   
