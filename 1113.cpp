//Yasmin Alves
//11.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, j;
    while (cin >> i >> j && i != j) {
        if (i > j) cout << "Decrescente" << endl;
        else cout << "Crescente" << endl;
    }
 
    return 0;
}
