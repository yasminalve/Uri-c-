//Yasmin Alves
//22.06.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int cod, qtd;
    float total;
    
    cin >> cod >> qtd;
    
    if (cod == 1) total = 4*qtd;
    else if (cod == 2) total = 4.5*qtd;
    else if (cod == 3) total = 5*qtd;
    else if (cod == 4) total = 2*qtd;
    else if (cod == 5) total = 1.5*qtd;
    
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;
 
    return 0;
}
