//Yasmin Alves
//27.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b;
    
    cin >> a >> b; 
    
        if (a < b) {cout << "O JOGO DUROU " << b - a << " HORA(S)" << endl;}
        else if (a >= b) {cout << "O JOGO DUROU " << (24 - a) + b << " HORA(S)" << endl;}

 
    return 0;
}
