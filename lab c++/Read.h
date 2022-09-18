#include <iostream>
#include"Classe.h"
using namespace std;

void listar(){
    char nome_arqu[50];
    int verifica_registro;
    Aluno estudante;

    // lendo arquivo
   do{
    system("cls"); //(windows)
    //system("clear"); (linux)
    cout<<"qual arquivo quer ler: ";
    fflush(stdin);
    gets(nome_arqu);
    
    FILE *f = fopen(nome_arqu, "rb");

    if (f) {
        fread(&estudante, sizeof(Aluno), 1, f);
            printf("\n============================================================================================\n");
            cout<<"INFORMACOES DO TCC: "<<nome_arqu;
            cout<<"\n";
            printf("============================================================================================\n");
            cout<<"\n";                                                                 
            cout<<"NOME: "<<estudante.nome<<endl;                  
            cout<<"MATRICULA: "<<estudante.matricula<<endl;                  
            cout<<"CURSO: "<<estudante.curso<<endl;
            cout<<"EMAIL: "<<estudante.email<<endl;
            cout<<"ORIENTADOR: "<<estudante.orientador<<endl;
            cout<<"FREQUENCIA: "<<estudante.frequencia<<endl;
            cout<<"\n";
        cout<<"=================================DADOS DO AVALIADOR=============================\n";
            cout<<"\n";
            cout<<"AVALIADOR: "<<estudante.avaliador.nome<<endl;
            cout<<"INSTITUICAO: "<<estudante.avaliador.instituicao<<endl;
            cout<<"EMAIL: "<<estudante.avaliador.email<<endl;
            cout<<"\n";
        cout<<"================================= DADOS DA BANCA=================================\n";
            cout<<"\n";
            cout<<"TITULO: "<<estudante.banca.Titulo<<endl;
            cout<<"RESUMO: "<<estudante.banca.Resumo<<endl;
            cout<<"HORARIO: "<<estudante.banca.Horario<<endl;
            cout<<"LOCAL: "<<estudante.banca.Local<<endl;
        cout<<"=================================================================================\n";



        fclose(f);
    
    }else{
      
        cout<< "\nO arquivo" <<nome_arqu<< " Nao existe! :/ "<<endl;

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