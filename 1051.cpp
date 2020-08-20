//Yasmin Alves
//27.06.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float salario; int perc;
    
    cin >> salario; 
    
    if (salario >= 0 && salario <= 2000) perc = 0;
    else if (salario >= 2000.01 && salario <= 3000) perc = 8;
    else if (salario >= 3000.01 && salario <= 4500) perc = 18;
    else if (salario > 4500) perc = 28;

    cout << fixed << setprecision(2);
    
    if (perc == 0) cout << "Isento" << endl;
    else if (perc == 8) cout << "R$ " << (salario - 2000)*0.08 << endl;
    else if (perc == 18) cout << "R$ " << (salario - 3000)*0.18 + 80 << endl;
    else if (perc == 28) cout << "R$ " << (salario - 4500)*0.28 + (1500*0.18) + 80 << endl;


    
    return 0;
}
