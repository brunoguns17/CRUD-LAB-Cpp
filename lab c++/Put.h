#include <iostream>
#include"Classe.h"
using namespace std;

void modificar(){

    char nome_arqu[50];
    int verifica_registro;
    Aluno estudante;
    // lendo arquivo
   do{
    system("cls"); //(windows)
    //system("clear"); (linux)
    cout<<"qual arquivo modificar: ";
     fflush(stdin);
    gets(nome_arqu);
    
    
    FILE *f = fopen(nome_arqu, "rb");

    if (f) {
        fread(&estudante, sizeof(Aluno), 1, f);
            printf("\n============================================================================================\n");
            cout<<"INFORMACOES DO TCC: "<<nome_arqu;
            cout<<"\n";
            printf("============================================================================================\n");
            cout<<("\n");
        printf("------------------------------DADOS DO ALUNO------------------------------------------------\n");
            cout<<"\n";                                                                 
            cout<<"NOME: "<<estudante.nome<<endl;                  
            cout<<"MATRICULA: "<<estudante.matricula<<endl;                  
            cout<<"CURSO: "<<estudante.curso<<endl;
            cout<<"EMAIL: "<<estudante.email<<endl;
            cout<<"ORIENTADOR: "<<estudante.orientador<<endl;
            cout<<"FREQUENCIA: "<<estudante.frequencia<<endl;
            cout<<"\n";
        printf("------------------------------DADOS DO AVALIADOR---------------------------------------------\n");
            cout<<"\n";
            cout<<"AVALIADOR: "<<estudante.avaliador.nome<<endl;
            cout<<"INSTITUICAO: "<<estudante.avaliador.instituicao<<endl;
            cout<<"EMAIL: "<<estudante.avaliador.email<<endl;
            cout<<"\n";
        printf("---------------------------------DADOS DA BANCA-----------------------------------------------\n");
            cout<<"\n";
            cout<<"TITULO: "<<estudante.banca.Titulo<<endl;
            cout<<"RESUMO: "<<estudante.banca.Resumo<<endl;
            cout<<"HORARIO: "<<estudante.banca.Horario<<endl;
            cout<<"LOCAL: "<<estudante.banca.Local<<endl;


    cout<<"****************************** ATUALIZANDO: NOVOS DADOS DO ALUNO**********************************\n";
        cout<<"\n";
        fflush(stdin);
        cout<< "Nome: ";
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
    cout<<"***************************** ATUALIZANDO: DADOS DO AVALIADOR ********************************\n";
        printf("\n");
        cout<< "\n";
        cout<< "NOME: ";
       gets(estudante.avaliador.nome);
       cout<<"INSTITUICAO: ";
       gets(estudante.avaliador.instituicao);
       cout<<"EMAIL: ";
       gets(estudante.avaliador.email);
       cout<<"\n";
    cout<<"**************************** ATUALIZANDO:  DADOS DODADOS DA BANCA ******************************\n";
       cout<<"\n";  
       cout<<"TITULO: ";
       gets(estudante.banca.Titulo);
       cout<<"RESUMO: ";
       gets(estudante.banca.Resumo);
       cout<<"HORARIO: ";
       gets(estudante.banca.Horario);
       cout<<"LOCAL: ";
       gets(estudante.banca.Local);


        FILE *f = fopen(nome_arqu,"wb");

        fwrite(&estudante, sizeof(Aluno), 1, f);
        fclose(f);



        fclose(f);
    
    }else{
        
         cout<< "O arquivo" <<nome_arqu<< " Nao existe! :D "<<endl;

    }

    cout<<"\n";
    cout<<"[1] para continuar\n";
    cout<<"[0] para sair\n";
    cout<<"\n";
    cout<<"Continuar verificando: ";
    cin>>verifica_registro;

            if (verifica_registro !=0 || verifica_registro!=1){
            while (verifica_registro !=0 && verifica_registro!=1){

                system("cls"); //(windows)
                //system("clear"); (linux)
                cout<<"\n";
                cout<<"[1] para continuar\n";
                cout<<"[0] para sair\n";
                cout<<"\n";
                cout<<"DIGITE UMA OPCAO VALIDA: ";
                cin>>verifica_registro;
                
            }
        

    }

   } while (verifica_registro!=0);
   




   }