#include <iostream>
#include "Classe.h"
#include <string.h>
using namespace std;

void cad() { 
    Aluno estudante;
    char nome_arqu[100];
    int continuar_cad;

    
     do{
        system("cls"); //(windows)
        //system("clear"); (linux)

        cout<<"nome do arquivo: ";
         fflush(stdin);
          gets(nome_arqu);
         

        FILE *f = fopen(nome_arqu,"rb"); //teste para saber se o arquivo existe.

        if (f!=NULL) {
            //teste para saber se o arquivo existe.
            // Se o retorno de "rb" != NULL, orquivo ja existe.
            fclose(f);
           cout<< "O arquivo" <<nome_arqu<< " ja existe! :D "<<endl;
            
        
        }else{
        //criaando arquivo
        // Se o retorno de "rb" = NULL, orquivo não existe.
         system("cls"); //(windows)
        //system("clear"); (linux) 
    cout<< "=================================DADOS DO ALUNO=================================\n";
        cout<<"\n";
        cout<< "Nome: ";
        fflush(stdin);
       gets(estudante.nome);
         cout<<"Matricula: ";
        cin>>estudante.matricula,"\n";
        fflush(stdin);
         cout<<"Curso: ";
        gets(estudante.curso);
         cout<<"Email: ";
       gets(estudante.email);
         cout<<"Orientador: ";
       gets(estudante.orientador);
         cout<<"frequencia: ";
        cin>>estudante.frequencia;
        fflush(stdin);
        cout<<"\n";
    cout<< "=================================DADOS DO AVALIADOR=================================\n";
        cout<< "\n";
        cout<< "NOME: ";
       gets(estudante.avaliador.nome);
       cout<<"INSTITUICAO: ";
       gets(estudante.avaliador.instituicao);
       cout<<"EMAIL: ";
       gets(estudante.avaliador.email);
       cout<<"\n";
   cout<<"================================= DADOS DA BANCA=================================\n";
       cout<<"\n";  
       cout<<"TITULO: ";
       gets(estudante.banca.Titulo);
       cout<<"RESUMO: ";
       gets(estudante.banca.Resumo);
       cout<<"HORARIO: ";
       gets(estudante.banca.Horario);
       cout<<"LOCAL: ";
       gets(estudante.banca.Local);


        
        FILE *f = fopen(nome_arqu,"ab");

        fwrite(&estudante, sizeof(Aluno), 1, f);
        fclose(f);
     }
        
      cout<<"\n";
      cout<<"[1] para continuar\n";
      cout<<"[0] para sair\n";
      cout<<"\n";
      cout<<"Deseja continuar Cadastrando: ";
      cin>>continuar_cad;

    if (continuar_cad !=0 || continuar_cad !=1){

        while (continuar_cad !=0 && continuar_cad !=1){

            system("cls"); //(windows)
            //system("clear"); (linux)
            cout<<"\n";
            cout<<"[1] para continuar\n";
            cout<<"[0] para sair\n";
            cout<<"\n";
            cout<<"DIGITE UMA OPCAO VALIDA: ";
            cin>>continuar_cad;
            
        }
        

    }

    
    } while (continuar_cad !=0); 
    


    
}
