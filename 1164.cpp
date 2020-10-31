//Yasmin Alves
//31.10.2020
#include <iostream>

using namespace std;

int main() {

    int N, x;
    
    cin >> N;
    for (int i = 0; i < N; i ++) {
        cin >> x;
        int soma = 0;

        for (int j = 1; j < x ; j++) {
            if (x % j == 0) soma += j;
        }
        
        if (soma == x) cout << x << " eh perfeito\n";
        else cout << x << " nao eh perfeito\n";
    }
 
    
    return 0;
}
