//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, B, C, D, E, soma = 0;
    cin >> A >> B >> C >> D >> E;
    
        if (A % 2 == 0) soma ++;
        if (B % 2 == 0) soma ++;
        if (C % 2 == 0) soma ++;
        if (D % 2 == 0) soma ++;
        if (E % 2 == 0) soma ++;
        
        cout << soma << " valores pares" << endl;
 
    return 0;
}
