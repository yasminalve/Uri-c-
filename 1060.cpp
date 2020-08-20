//Yasmin Alves
//27.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    float x;
    int cont = 0;

    for (int i = 0; i < 6; i++) {
        cin >> x;
         if (x > 0 && x != 0) cont++;
    }
    cout << cont << " valores positivos" << endl;
    
    return 0;
}
