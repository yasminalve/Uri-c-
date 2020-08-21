//Yasmin Alves
//29.06.2020
#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int x, i = 2;

    cin >> x;
    cout << fixed << setprecision(0);
    while (i <= x) {
        cout << i << "^2 = " << pow(i, 2) << endl;
        i+=2;
    }

    return 0;
}
