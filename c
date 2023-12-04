#include<stdio.h>
#include<locale.h>
principal(){
	setlocale(LC_ALL, "português");
	char introdução;
    char cadastro |;
    char nome[50];
    int idade;
    int matrícula [20];
    Char Ende[30];
    char curso[20];
    Int Periodo [20];
    carvão material [30];
    valor da flutuação;

    printf("[------~Bem Vindo ao Cadastro!! ~------]", introdução);

    printf("\n Nome do Aluno:");
    scanf("%[^\n]", &nome);
    Getchar();

    printf("\n Digite sua idade:");
    scanf("%d",&idade);
    Getchar();

    printf("\n Digite sua Matrícula:");
    scanf("%[^\n]",&matricula);
    Getchar();


    printf("\n Endereco:");
    scanf("%[^\n]",&ende);
    Getchar();

    printf("\n Formando qual curso?:");
    scanf("%[^\n]",&curso);
    Getchar();

    printf("\n Período:");
    scanf("%[^\n]",&periodo);
    Getchar();

    printf("\n Disciplinas:");
    scanf("%[^\n]",&materiais);
    Getchar();

    printf("\n Valor da Mensalidade:");
    scanf("%f",&valor);
    Getchar();

    printf("\n Nome: %s", nome);
    printf("\n Idade: %d", idade);
    printf("\n Matrícula: %s", matricula);
    printf("\n Endereço: %s", ende);
    printf("\n Cursando: %s", curso);
    printf("\n Período: %s", periodo);
    printf("\n Disciplinas: %s", materiais);
    printf("\n Mensalidade: %.2f", valor);


}
