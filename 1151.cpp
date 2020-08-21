//Yasmin Alves
//27.07.2020
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> fibonacci;
    int N, a = 0, b = 1, soma;
    fibonacci.push_back(a);
    fibonacci.push_back(b);
    cin >> N;
    for (int i = 0; i < N; i ++) {
        soma = a + b;
        fibonacci.push_back(soma);
        a = b;
        b = soma;
    }
    for (int i = 0; i < N; i ++) {
        if (i == N-1) {
            cout << fibonacci[i] << endl;
        } else {
            cout << fibonacci[i] << " ";
        }
    }
    
    
    
    return 0;
}
