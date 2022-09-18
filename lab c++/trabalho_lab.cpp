#include <iostream>

#include "Create.h"
#include "Read.h"
#include "Put.h"
#include "Delete.h"

using namespace std;

int main() {

int options_menu;

  do {
        system("cls"); //(windows)
        //system("clear"); (linux)
     cout<<"==========MENU================================\n";
     cout<<"1 - CADASTRAR BANCA\n";
     cout<<"2 - ALTERAR DADOS\n";
     cout<<"3 - LISTAR BANCA\n";
     cout<<"4 - DELETAR BANCA\n";
     cout<<"0 - SAIR\n";
     cout<<"=============================================\n";
     cout<<"Digite o numero da opcao: ";
     cin>>options_menu;
 
        switch (options_menu) {

            case 1:
            cout<<"=> CADASTRAR BANCA\n";
            cad();
            break;
            
            case 2:
            cout<<"=> ALTERAR DADOS\n";
            modificar();
            break;
            
            case 3:
            cout<< "=> LISTAR BANCA\n";
            listar();
            break;

            case 4:
            cout<< "=>DELETAR BANCA\n";
            Delete();
            break;

            case 0:
            cout<< "FIM\n";
            break;
            
            
            default :
            cout<< "Valor invalido!\n";
      }
    }  while (options_menu != 0);

    return 0;
}

