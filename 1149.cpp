//Yasmin Alves
//27.07.2020
#include <iostream>
using namespace std;

int main() {
    int a, b, som = 0;
    cin >> a;
    
    while (cin >> b && b <= 0) {}
    for (int i = 0; i < b; i ++) {
        som += (a + i);
    }
    cout << som << endl;
    return 0;
}
