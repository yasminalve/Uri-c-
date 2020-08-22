//Yasmin Alves
//11.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, maior = 0;

    while (cin >> n && n != 0) {
        if (n > maior) maior = n;
        else maior = maior;
    }
    cout << maior << endl;
 
    return 0;
}
