#include <stdio.h>
#include <string.h>

int main() {
    int i, resultado, vitorias = 0;
    int empates = 0, derrotas = 0;
    int pontos = 0, opcao;
    float media;
    char senha[30];

    // PARTE 1 - RESULTADOS DO CORINTHIANS

    printf("===== SPORT CLUB CORINTHIANS PAULISTA =====\n");

    for (i = 1; i <= 5; i++) {
        printf("\nJogo %d\n", i);
        printf("1 - Vitoria\n");
        printf("2 - Empate\n");
        printf("3 - Derrota\n");
        printf("Resultado: ");
        scanf("%d", &resultado);

        while (resultado < 1 || resultado > 3) {
            printf("Resultado invalido! Digite novamente: ");
            scanf("%d", &resultado);
        }

        if (resultado == 1) {
            vitorias++;
            pontos += 3;
        }
        else if (resultado == 2) {
            empates++;
            pontos += 1;
        }
        else {
            derrotas++;
        }
    }

    media = (float)pontos / 5;

    printf("\n===== RESUMO DOS JOGOS =====\n");
    printf("Vitorias: %d\n", vitorias);
    printf("Empates: %d\n", empates);
    printf("Derrotas: %d\n", derrotas);
    printf("Total de pontos: %d\n", pontos);
    printf("Media de pontos: %.2f\n", media);

    // PARTE 2 - SENHA

    printf("\n===== AREA DO FIEL TORCEDOR =====\n");
    printf("Digite a senha: ");
    scanf("%29s", senha);

    while (strcmp(senha, "Corinthians") != 0) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%29s", senha);
    }

    printf("Acesso permitido!\n");

    // PARTE 3 - MENU INTERATIVO

    do {
        printf("\n===== MENU CORINTHIANS =====\n");
        printf("1 - Consultar pontuacao\n");
        printf("2 - Mensagem de boas-vindas\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nVitorias: %d\n", vitorias);
                printf("Empates: %d\n", empates);
                printf("Derrotas: %d\n", derrotas);
                printf("Pontos: %d\n", pontos);
                printf("Media: %.2f pontos por jogo\n", media);
                break;

            case 2:
                printf("\nVai Corinthians! Aqui e bando de loucos!\n");
                break;

            case 3:
                printf("\nEncerrando o sistema. Vai Corinthians!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
