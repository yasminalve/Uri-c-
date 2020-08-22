//Yasmin Alves
//12.07.2020
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    string s; int t = 0, p = 0, j = 0;
    while (cin >> s && s != "ABEND") {
        cin >> t;
        if (s == "SALIDA") {p += t; j ++;}
        if (s == "VUELTA") {p -= t; j --;}
    }
    cout << p << endl << j << endl;
    
 
    return 0;
}
