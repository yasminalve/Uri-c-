//Yasmin Alves
//15.07.2020

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n[100], maior, pos;
    cin >> n[0]; maior = n[0]; pos = 1;
    for (int i = 1; i < 100; i++) {
        cin >> n[i];
        if (n[i] > maior) {
            maior = n[i];
            pos = i + 1;
        }
    }
    cout << maior << endl << pos << endl;
 
    return 0;
}
