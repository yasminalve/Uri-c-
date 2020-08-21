//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int t = 0, r; float n, soma = 0;
    do {    
        while (t != 2) {
            cin >> n;
            if (n >= 0 && n <= 10) {
                t++; soma += n;
            } else {
                cout << "nota invalida\n";
            }
            
        }
        printf ("media = %.2f\n", soma/2);
        do {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> r;
            t  = 0;
            soma = 0;
        } while ((r != 2)&&(r != 1));
        
    } while (r == 1);
    return 0;
}
