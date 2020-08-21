//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int t, n1, n2, soma, i, j;

    while (cin >> n1 >> n2 && (n1 > 0 && n2 > 0)) {
        soma = 0;
        if (n1 < n2) {i = n1; j = n2;}
        else {i = n2; j = n1;}
        for (int x = i; x <= j; x += 1) {
            soma += x;
            cout << x << " ";
        }
        cout << "Sum=" << soma << endl;

    }
    return 0;
}
