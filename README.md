--- Calculadora em C – Projeto Terminal
Este projeto consiste em uma calculadora desenvolvida em linguagem C, com entrada e saída de dados via terminal. 
Ela realiza operações aritméticas básicas e oferece um modo "programador" com funcionalidades adicionais como conversões entre bases numéricas e operações bit a bit.

--- Funcionalidades
Modo Básico
Adição
Subtração
Multiplicação
Divisão (com tratamento de divisão por zero)

--- Modo Programador
Conversão de decimal para binário e hexadecimal
Conversão de binário para decimal
Conversão de hexadecimal para decimal
Operações bit a bit: AND, OR, XOR, NOT

gcc calc.c -o calc
./calc

--- Requisitos
Compilador C (GCC ou similar)
Terminal para entrada/saída
Sistema operacional compatível com execução de binários C (Linux, Windows, macOS)

--- Estrutura do Código
main() → Menu principal e controle de fluxo
Funções matemáticas básicas: somar, subtrair, multiplicar, dividir
Funções de conversão: decimalParaBinario, decimalParaHexadecimal, binarioParaDecimal, hexadecimalParaDecimal

Funções bitwise: operacoesBitwise

Menu separado para o modo programador: modoProgramador()
