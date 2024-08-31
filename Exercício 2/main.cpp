#include <iostream>
using namespace std;

int verificaLetra(string x){
  
  int n = 0, s = x.length();

  for(int i = 0; i < s;i++){
    
    if (x.front() == 'a' || x.front() == 'A')
      n++;
    
    x.erase(x.begin());
  }
  
    return n;
}

int main(){
 
  string x;
  
  cout << "Insira uma palavra para ser consultada: ";
  cin >> x;

  cout << "\n A letra 'A' aparece " << verificaLetra(x) << " vezes na palavra " << x << ".";

  return 0;
}