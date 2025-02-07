#include <stdio.h>
#include <string.h>

// Função que normaliza e verifica palindromo ao mesmo tempo
int ehPalindromo(const char str[]) {
    int i = 0, j = strlen(str) - 1;

    while (i < j) {
        // Ignorar espaços
        while (i < j && str[i] == ' ') i++;
        while (i < j && str[j] == ' ') j--;

        // Converter para maiusculas e comparar
        char charEsq = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 32 : str[i];
        char charDir = (str[j] >= 'a' && str[j] <= 'z') ? str[j] - 32 : str[j];

        if (charEsq != charDir)
            return 0;

        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[] = "Socorram me subi no onibus em marrocos";

    if (ehPalindromo(str))
        printf("A string e um palindromo\n");
    else
        printf("A string nao e um palindromo\n");

    return 0;
}
