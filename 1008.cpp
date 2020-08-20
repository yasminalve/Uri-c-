//Yasmin Alves
//26.03.2020
#include <iostream>
#include <iomanip> 

using namespace std;

int main () {
    int numFunc, horas;
    float valorHora, salario;

    cin >> numFunc >> horas >> valorHora;
    salario = valorHora*horas;
    

    cout << "NUMBER = " << numFunc << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;


    return 0;
}
