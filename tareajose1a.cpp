#include <iostream>
using namespace std;

  int main(void){
  int numero=7;
  int divisor=2;
  bool primo= true;
 
  while (divisor<numero){
    if (numero % divisor ==0){
      primo=false;
    }
    divisor++;
  }

  if(primo==true){
    cout << numero <<endl;
  }
 
  return 0;
  }
