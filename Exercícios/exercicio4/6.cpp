
#include <iostream>
using namespace std;

void JogoDePerguntas();

int main(){
    
   int iNumero;
   char cContinua = 1;

   do{

     cout << "Pense e Informe um número de 1 a 100 = ";
     cin >>  iNumero;
     
     JogoDePerguntas();

     cout << "\n\nDeseja continuar a jogar? (s/n) = ";
     cin >>  cContinua;
     cContinua = toupper(cContinua);

   }while(cContinua == 's' );

   return 0;
}

void JogoDePerguntas() {
    
   int iVezes = 0, iInicial = 1, iFinal = 100, iGerado;
   char cCaracter;
   
   system("clear");

   do{

      iVezes ++;
      iGerado = iInicial + (iFinal - iInicial) /2;
      
      cout << "\nNúmero de Vezes = " << iVezes << "\n";

      cout << "\nO Número escolhido é maior, menor ou igual a <" << iGerado << ">?\n"  
               "Digite '=', '<' ou '>' = ";
      cin >>  cCaracter;

      switch (cCaracter){
         case '=':
              cout << "\n======================================";         
              cout << "\n JOGO FINALIZADO COM SUCESSO!";
              cout << "\n=====================================";              
              return;
              break;
              
         case '>':
              iInicial = iGerado + 1;
              break;
              
         case '<':
              iFinal = iGerado - 1;
              break;
        }

   } while(iVezes < 7);
   
   return;
   
}


