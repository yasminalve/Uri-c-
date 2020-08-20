//Yasmin Alves
//26.03.2020
#include <iostream>
#include <iomanip> 

using namespace std;

int main () {
    string nome;
    double totalVendas, salarioFixo, total;

    cout << fixed << setprecision(2);

    cin >> nome >> salarioFixo >> totalVendas;
    total = salarioFixo + 0.15*totalVendas;;
    
    cout << "TOTAL = R$ " << total << endl;


    return 0;
}
