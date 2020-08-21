//Yasmin Alves
//11.07.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int senha = 2002, tent;
    while (cin >> tent && tent != senha)
    {
        cout << "Senha Invalida" << endl;
    }
    if (tent == senha) cout << "Acesso Permitido" << endl;
    
 
    return 0;
}
