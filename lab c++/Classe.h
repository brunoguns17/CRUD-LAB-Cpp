#include <iostream>
#ifndef Classe
#define Classe

using namespace std;

class Dados_da_banca {
    public:
        char Titulo[100];
        char Resumo[100];
        char Horario[5];
        char Local[100];

};

class Avaliadores{
    public:
        char nome[100];
        char instituicao[100];
        char email[50];
        
};

class Aluno {
    public:
        char nome[100];
        int  matricula;
        char curso[50];
        char email[50];
        char orientador[100];
        int frequencia;
        Avaliadores avaliador;
        Dados_da_banca banca;

    };

    #endif