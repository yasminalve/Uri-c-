//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int t = 0; float n, soma = 0;
    while (t != 2) {
        cin >> n;
        if (n >= 0 && n <= 10) {
            t++; soma += n;
        } else {
            cout << "nota invalida\n";
        }
        
    }
    printf ("media = %.2f\n", soma/2);
    return 0;
}
