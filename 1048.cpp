//Yasmin Alves
//27.06.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float salario; int perc;
    
    cin >> salario; 
    
    if (salario >= 0 && salario <= 400) perc = 15;
    else if (salario >= 400.01 && salario <= 800) perc = 12;
    else if (salario >= 800.01 && salario <= 1200) perc = 10;
    else if (salario >= 1200.01 && salario <= 2000) perc = 7;
    else if (salario > 2000) perc = 4;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salario + salario*perc/100 << endl;
    cout << "Reajuste ganho: " << salario*perc/100 << endl;
    cout << "Em percentual: " << perc << " %" << endl;


    
    return 0;
}
