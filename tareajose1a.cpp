
#include <iostream>
using namespace std;

bool is_prime(int number){
    for(int i=2; i<number; i++){
        if (number % i == 0) return false;
        }
        return true;
    }
    
int main(void){
    int min_number = 500;
    int max_number = 1400;
    
    for(int j = min_number; j <= max_number; j++){
        if (is_prime(j)) {cout << j << endl;}
        }
    return 0;
    }
