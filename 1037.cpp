//Yasmin Alves
//22.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    float s;
    cin >> s;
    if (s >= 0 && s <= 25) {
        cout << "Intervalo [0,25]" << endl;
    } else if (s > 25 && s <= 50) {
        cout << "Intervalo (25,50]" << endl;
    } else if (s > 50 && s <= 75) {
        cout << "Intervalo (50,75]" << endl;
    } else if (s > 75 && s <= 100) {
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl;
    }
 
    return 0;
}
