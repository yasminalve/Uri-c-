//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int t, n1, n2, soma, i, j;
    cin >> t;
    while (t--) {
        cin >> n1 >> n2;
        soma = 0;

        if (n1 < n2) {i = n1; j = n2;}
        else {i = n2; j = n1;}
        if (i % 2 == 0) i ++;
        else i += 2;

        for (int x = i; x < j; x += 2) {
            soma += x;
        }
        cout << soma << endl;
    }
    return 0;
}
