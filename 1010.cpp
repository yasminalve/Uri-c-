//Yasmin Alves
//26.03.2020
#include <iostream>
#include <iomanip> 

using namespace std;

struct Peca {
   int codigo;
   int numPecas;
   float valorUnitario;
};


int main () {
    float total;
    Peca temp1, temp2;

    cin >> temp1.codigo >> temp1.numPecas >> temp1.valorUnitario;
    cin >> temp2.codigo >> temp2.numPecas >> temp2.valorUnitario;

    total = temp1.numPecas*temp1.valorUnitario + temp2.numPecas*temp2.valorUnitario;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " <<  total << endl;



    return 0;
}
