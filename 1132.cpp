//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int t, n1, n2, soma = 0, i, j;
    cin >> n1 >> n2;
        soma = 0;

        if (n1 < n2) {i = n1; j = n2;}
        else {i = n2; j = n1;}

        for (int x = i; x <= j; x ++) {
            if (x % 13 != 0) soma += x;
        }
        cout << soma << endl;

    return 0;
}
