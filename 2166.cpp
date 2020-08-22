//Yasmin Alves
//11.07.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double res = 0, den;
    int i;
    cin >> i;
    if (i == 0) res = 0;
    if (i == 1) res = 0.5;
    for (int j = 2; j <= i; j++) {
         if (j == 2){
         den = 2 + 0.5;
         res = 1.0/den;
         } else {
            den = 2 + res;
            res = 1.0/den;
         }
    }
    cout << fixed << setprecision(10);
    cout << res + 1 << endl;
 
    return 0;
}
