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
    if (i == 1) res = 1.0/6;
    for (int j = 2; j <= i; j++) {
         if (j == 2){
         den = 6 + 1.0/6;
         res = 1.0/den;
         } else {
            den = 6 + res;
            res = 1.0/den;
         }
    }
    cout << fixed << setprecision(10);
    cout << res + 3 << endl;
 
    return 0;
}
