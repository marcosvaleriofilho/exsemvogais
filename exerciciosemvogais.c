#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Elabore um programa que leia uma string de no máximo 10 caracteres. O programa deverá imprimir a string sem suas vogais. */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char string10[10];
    int c = 0;
    printf("\nDigite a string: ")/
    scanf("%s", string10);

    while(string10[c] !='\0' )
    {
     if(string10[c] != 'a' && string10[c] != 'A' && string10[c] != 'e' && string10[c] != 'E' && string10[c] != 'i' &&
     string10[c] != 'I' && string10[c] != 'o' && string10[c] != 'O' && string10[c] != 'u' && string10[c] != 'U')

            printf("%c", string10[c]);
        c++;
    }
    system("pause");
    return 0;
}
