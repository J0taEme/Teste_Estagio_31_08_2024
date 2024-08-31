#include <iostream>
using namespace std;

bool verificaFibonacci(int x){

  int result = 0, f1 = 1, f2 = 1;
  
  switch (x){
    
    case 0:
      return 1;
    break;

    case 1:
      return 1;
    break;

    default :
      while (x > result){
        
        result = f1 + f2;
        f2 = f1;
        f1 = result;

      }
      if(result == x)
        return 1;
      else
        return 0; 
    break; 
  }
  
}

int main(){
 
  int x;
  
  cout << "Insira um número para ser consultado: ";
  cin >> x;

  if(verificaFibonacci(x))
      cout << "O número " << x << " se encontra na sequencia de Fibonacci.";

    else
      cout << "O número " << x << " não se encontra na sequencia de Fibonacci.";

  return 0;
}