#include <stdio.h>

int main() {
    // Correção: codigo deve ser string (array de char)
    char estado;
    char codigo[10];  // Array para o código
    char cidade[50];
    int populacao;    // Corrigido acento (melhor evitar acentos em código)
    int pontos_turisticos;
    float area;
    float PIB;

    // CARTA 1
    printf("CARTA 1\n");
    
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado);  // Espaço antes do %c limpa o buffer
    
    printf("Digite o codigo: ");
    scanf("%s", codigo);  // Sem & para strings
    
    printf("Digite a cidade: ");
    scanf("%s", cidade);  // Sem &
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    printf("Digite a area: ");
    scanf("%f", &area);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);  // Removido o \n
    
    // CARTA 2
    printf("\nCARTA 2\n");
    
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado);  // Espaço antes do %c
    
    printf("Digite o codigo: ");
    scanf("%s", codigo);
    
    printf("Digite a cidade: ");
    scanf("%s", cidade);
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    printf("Digite a area: ");
    scanf("%f", &area);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    
    return 0;
}