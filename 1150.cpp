//Yasmin Alves
//27.07.2020
#include <iostream>
using namespace std;

int main() {
    int a, b, som = 0, qt = 0;
    cin >> a;
    
    while (cin >> b && b <= a) {}
    for (int i = a; som < b; i ++) {
        qt++;
        som += i;
    }
    cout << qt << endl;
    return 0;
}
