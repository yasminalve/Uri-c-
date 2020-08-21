//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin >> N;
    for (int i = N - 1; i >= 1; i--) {
        N *= i;
    }
    cout << N << endl;
 
    return 0;
}
