#include <stdio.h> 
#include <string.h>
#include <math.h> 

struct Aluno{
    int idade;
    char nome[50];
    float media_nota;
};

int main(){
    struct Aluno aluno1;
    strcpy(aluno1.nome, "Gustavo");
    aluno1.idade = 19;
    aluno1.media_nota = 9.5;

    printf("Fim do programa!!! ");
    return 0;
}

