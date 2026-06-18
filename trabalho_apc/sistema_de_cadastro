#include <stdio.h>
#include <string.h>
#define tamanho_estoque 10

int main () {

struct produto {
        int id;
        char nome[50];
        float preco;
};

struct produto estoque[tamanho_estoque];

int total_registros = 0;
int opcao;
int id_busca;
int id_existe;
int indice_encontrado;

do {
    printf("\n ===sistema de gerenciamento de estoque===\n");
    printf("1. cadastrar registro\n");
    printf("2. listar registros\n");
    printf("3. buscar registro por id\n");
    printf("4. atualizar registro\n");
    printf("5. remover registros\n");
    printf("6. Sair do programa\n");
    printf("escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (total_registros >= tamanho_estoque) {
                printf("\n[erro] o sistema esta cheio! limite de %d registros atingido. \n", tamanho_estoque);
                break;
            }

            printf("\n ==cadastrar novo produto== \n");
            printf("digite o id unico:");
            scanf("%d", &id_busca);

            if (id_busca <= 0) {
                printf("[erro] o id deve ser um numero positivo maior que zero. \n");
                break;
            }

            id_existe = 0;
            for (int i = 0; i < total_registros; i++) {
                if (estoque[i].id == id_busca) {
                    id_existe = 1;
                    break;
                }
            }

            if (id_existe) {
                printf("[erro] este id ja esta cadastrado. tente outro. \n");
            } else {
                estoque[total_registros].id = id_busca;

                printf("digite o nome do produto: ");
                scanf(" %[^\n]", estoque[total_registros].nome);

                printf ("digite o preco: ");
                scanf("%f", &estoque[total_registros].preco);

                if (estoque[total_registros].preco < 0) {
                    printf("[erro] o preco nao pode ser negativo. cadastro cancelado. \n");
                } else {
                    total_registros++;
                    printf("[sucesso] produto cadastrado com sucesso \n");
                }
            }
            break;

        case 2:
            if (total_registros == 0) {
                printf("\n[aviso] nao ha registros cadastados. \n");
                break;
            }

            printf("\n ==lista de produtos== \n");
            for (int i = 0; i < total_registros; i++) {
                printf("posicao %d | id: %d | nome: %s | preco: %.2f \n",
                i + 1, estoque[i].id, estoque[i].nome, estoque[i].preco);
            }
            break;

        case 3:
            if (total_registros == 0) {
                printf("\n[aviso] operacao invalida. nao ha registros cadastrados. \n");
                break;
            }

            printf("\n ==buscar produto== \n");
            printf("digite o id que deseja buscar: ");
            scanf("%d", &id_busca);

            indice_encontrado = -1;
            for (int i = 0; i < total_registros; i++) {
                if (estoque[i].id == id_busca) {
                    indice_encontrado = i;
                    break;
                }        
            }

            if (indice_encontrado != -1) {
                printf("\n[sucesso] produto encontrado \n");
                printf("id: %d\n", estoque[indice_encontrado].id);
                printf("nome: %s\n", estoque[indice_encontrado].nome);
                printf("preco: %.2f\n", estoque[indice_encontrado].preco);
            } else {
                printf("\n[erro] produto com id %d nao encontrado. \n", id_busca);
            }
            break;

        case 4:
            if (total_registros == 0) {
                printf("\n[aviso] operacao invalida. nao ha registros cadastrados. \n");
                break;
            }
            printf("\n ==atualizar produto== \n");
            printf("digite o id do produto que deseja atualizar: ");
            scanf("%d", &id_busca);

            indice_encontrado = -1;
            for (int i = 0; i < total_registros; i++) {
                if (estoque[i].id == id_busca) {
                    indice_encontrado = i;
                    break;
                }
            }

            if (indice_encontrado != -1) {
                printf("dados atuais: %s (R$ %.2f)\n", estoque[indice_encontrado].nome, estoque[indice_encontrado].preco);
                printf("digite o novo nome: ");
                scanf(" %[^\n]", estoque[indice_encontrado].nome);

                printf("digite o novo preco: ");
                scanf("%f", &estoque[indice_encontrado].preco);

                if (estoque[indice_encontrado].preco < 0) {
                    printf("[erro] preco invalido. alteracao cancelada. \n");
                } else {
                    printf("[sucesso] registro atualizado com sucesso. \n");
                }
            } else {
                printf("[erro] registro com id %d nao encontrado. \n", id_busca);
            }
            break;

        case 5:
            if (total_registros == 0) {
                printf("\n[aviso] operacao invalida. nao ha registros cadastrados. \n");
                break;
            }

            printf("\n ==remover produto== \n");
            printf("digite o id do produto que deseja remover: ");
            scanf("%d", &id_busca);

            indice_encontrado = -1;
            for (int i = 0; i < total_registros; i++) {
                if (estoque[i].id == id_busca) {
                    indice_encontrado = i;
                    break;
                }
            }

            if (indice_encontrado != -1) {
                for (int i = indice_encontrado; i < total_registros - 1; i++) {
                    estoque[i] = estoque[i + 1];
                }
                total_registros--;
                printf("[sucesso] produto removido com sucesso. \n");
            } else {
                printf("[erro] registro com id %d nao encontrado. \n", id_busca);
            }
            break;

        case 6:
            printf("\n[aviso] saindo do sistema. \n");
            break;

        default:
            printf("\n[erro] opcao invalida. tente novamente. \n");
            break;
    }

} while (opcao != 6);

return 0;
}
