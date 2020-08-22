//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;

int main() {
 
    int A, B, C, D, E, T, soma = 0;
    
    cin >> T >> A >> B >> C >> D >> E;

    if (T >= 1 && T <= 4) {

        if (A == T) soma ++;
        if (B == T) soma ++;
        if (C == T) soma ++;
        if (D == T) soma ++;
        if (E == T) soma ++;
    
        cout << soma << endl;
    
    } 
    
    return 0;
}
