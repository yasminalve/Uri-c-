//Yasmin Alves
//14.07.2020
#include <iostream>

using namespace std;


int main() {

    int n, temp, maior, menor;

    while (cin >> n && n != 0) {
        int pres[2*n];

        for (int i = 0; i < 2*n; i ++) {
            cin >> pres[i];
        }
        menor = pres[n-1] + pres[n];
        maior = menor;
        for (int i = 0; i < 2*n; i ++) {
            temp = pres[i] + pres [2*n - i - 1];
            if (temp > maior) maior = temp;
            else if (temp < menor) menor = temp;
        }

        cout << maior << " " << menor << endl;
    }
 
    return 0;
}
