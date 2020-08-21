//Yasmin Alves
//27.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
    int n, alcool = 0, gas = 0, diesel = 0; 
    while (cin >> n && n != 4) {
        switch (n)
        {
        case 1: alcool ++; break;
        case 2: gas ++; break;
        case 3: diesel ++; break;
        
        default: break;
        }
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << diesel << endl;
 
    
 
    return 0;
}
