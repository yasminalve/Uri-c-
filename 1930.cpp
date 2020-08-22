//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int T1, T2, T3, T4, SOMA;
    cin >> T1 >> T2 >> T3 >> T4;
    
    SOMA = T1 + T2 + T3 + T4 - 3;

    if ( SOMA >= 5 && SOMA <=21) {
        cout << SOMA << endl; 
    }
 
    return 0;
}
