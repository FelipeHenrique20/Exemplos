#include <stdio.h>
#include <string.h>

//Fução para deixar em maiusculo
void upper(char str[]){
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
}

//Função para remover espaços
void strip(char str[]){
    int tam = strlen(str);
    int pos = 0;

    for (int i = 0; i < tam; i++){
        if (str[i] == ' ') {
            continue;
        }
        str[pos] = str[i];
        pos++;
    }
    str[pos] = '\0';
}

//Função palindromo
void palindromo(char str[]){
    int tam = strlen(str);
    int ehPalindromo = 1;

    for (int i = 0; i < tam; i++){
        if (str[i] != str[tam - 1 - i]){
            ehPalindromo = 0; // Se encontrar diferença, não é palíndromo
            break;
        }
    }

    if (ehPalindromo)
        printf("A string e um palindromo\n");
    else
        printf("A string nao e um palindromo\n");
}

int main() {
    char str[] = "Socorram me subi no onibus em marrocos";

    upper(str);
    strip(str);
    palindromo(str);

    return 0;
}
