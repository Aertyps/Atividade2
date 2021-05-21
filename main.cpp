#include <iostream>

using namespace std;

int mudaMsg(string* m1, char s1, char s2, string* m2, int tam){

  int troca = 0;
  string m = *m1;
  string novom = "";
  
  if(tam == 0){
   
  }else{

    if(m[tam] == s1){
      novom += s2; 
      troca++;
    }else{
      novom += m[tam];
    }
    
  }
  

  return troca;
}

int main() {

  string msg ="", novaMsg ="" ;
  char substituir, substituto;

  cout << "Digite uma mensagem: " << endl;
  cin >> msg;
  cout << "Digite um caractere a ser substituído: " << endl;
  cin >> substituir;
  cout << "Digite um caractere a ser colocado no lugar do anterior: " << endl;
  cin >> substituto;
  
  int trocas = mudaMsg(&msg, substituir, substituto, &novaMsg, msg.length());
 
  cout << "\n"+novaMsg+"\n";
  cout << msg+"\n";
  cout << trocas;
}