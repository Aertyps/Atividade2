#include <iostream>

using namespace std;

int mudaMsg(string* m1, char s1, char s2, string* m2, int tam){

  int troca = 0;
  string m = *m1;
  string novom = *m2;
  tam--;
  
  if(tam >= 0){

    if(m[tam] == s1){
      novom[tam] = s2; 
      troca++;
    }

    *m2 = novom;
    troca += mudaMsg(m1, s1, s2, m2, tam);
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

  novaMsg = msg;
  int trocas = mudaMsg(&msg, substituir, substituto, &novaMsg, msg.length());
 
  cout << "\n"+novaMsg+"\n";
  cout << msg+"\n";
  cout << trocas;
}