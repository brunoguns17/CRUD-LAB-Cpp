#include <iostream>

using namespace std;

void Delete(){
    char nome_arqu[50];
    int verifica_registro;

    do{
        system("cls"); //(windows)
        //system("clear"); (linux)
        
        cout<<"Qual arquivo deseja deletar: ";
         fflush(stdin);
        gets(nome_arqu);
        // nome do arquivo

    // tenta abrir o arquivo para escrita
    FILE *file = fopen(nome_arqu, "r");

    if(file){

        fclose(file);

        // tenta remover o arquivo
        
          cout<< "\nO arquivo" <<nome_arqu<< " foi deletado com sucesso!! :D " <<endl;
          remove(nome_arqu);
    }
    else{
        
         cout<< "\nErro! :/ O arquivo:" <<nome_arqu<< " , NAO EXISTE!! "<<endl;
       
        
        // Ao tentar remover um arquivo que não existe a função retorna o valor -1

       
     
    }

    cout<<"\n";
    cout<<"[1] para continuar\n";
    cout<<"[0] para sair\n";
    cout<<"\n";
    cout<<"Continuar deletando: ";
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