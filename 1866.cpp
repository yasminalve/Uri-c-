//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, c;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int soma = 0;
        cin >> c;
        if (c % 2 == 0) {
            soma = soma;
        } else {
            soma = soma + 1;
        }
        cout << soma << endl;
    }
    

    return 0;
}
