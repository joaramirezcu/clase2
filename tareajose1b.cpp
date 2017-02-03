#include<iostream>
using namespace std;

int main(){
  float N=10;
  float suma=0;
  float i=1;

  while(i<=N){
    suma = suma + (1/i);
    cout << i << "  "<< "  " << suma << endl;
    i++;
  }

}
