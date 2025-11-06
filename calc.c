#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Operações básicas
float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return a / b;
}

// Conversões
void decimalParaBinario(int n) {
    printf("Binário: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

void decimalParaHexadecimal(int n) {
    printf("Hexadecimal: %X\n", n);
}

int binarioParaDecimal(char *bin) {
    int dec = 0;
    for (int i = 0; bin[i] != '\0'; i++) {
        dec = dec * 2 + (bin[i] - '0');
    }
    return dec;
}

int hexadecimalParaDecimal(char *hex) {
    int dec;
    sscanf(hex, "%x", &dec);
    return dec;
}

// Operações bit a bit
void operacoesBitwise(int a, int b) {
    printf("AND: %d\n", a & b);
    printf("OR: %d\n", a | b);
    printf("XOR: %d\n", a ^ b);
    printf("NOT A: %d\n", ~a);
    printf("NOT B: %d\n", ~b);
}

// Menu do modo programador
void modoProgramador() {
    int escolha;
    int num1, num2;
    char bin[33], hex[9];

    do {
        printf("\n--- MODO PROGRAMADOR ---\n");
        printf("1. Decimal para Binário/Hexadecimal\n");
        printf("2. Binário para Decimal\n");
        printf("3. Hexadecimal para Decimal\n");
        printf("4. Operações Bitwise\n");
        printf("0. Voltar\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite um número decimal: ");
                scanf("%d", &num1);
                decimalParaBinario(num1);
                decimalParaHexadecimal(num1);
                break;
            case 2:
                printf("Digite um número binário: ");
                scanf("%s", bin);
                printf("Decimal: %d\n", binarioParaDecimal(bin));
                break;
            case 3:
                printf("Digite um número hexadecimal: ");
                scanf("%s", hex);
                printf("Decimal: %d\n", hexadecimalParaDecimal(hex));
                break;
            case 4:
                printf("Digite dois números inteiros: ");
                scanf("%d %d", &num1, &num2);
                operacoesBitwise(num1, num2);
                break;
            case 0:
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (escolha != 0);
}

// Menu principal
int main() {
    int opcao;
    float num1, num2;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n");
        printf("5. Modo Programador\n0. Sair\n");
        printf("Escolha uma opção: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida! Reinicie o programa.\n");
            exit(1);
        }

        switch (opcao) {
            case 1:
                printf("Digite dois números: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", somar(num1, num2));
                break;
            case 2:
                printf("Digite dois números: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", subtrair(num1, num2));
                break;
            case 3:
                printf("Digite dois números: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", multiplicar(num1, num2));
                break;
            case 4:
                printf("Digite dois números: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", dividir(num1, num2));
                break;
            case 5:
                modoProgramador();
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
