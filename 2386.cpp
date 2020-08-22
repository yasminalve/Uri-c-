//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, N, F, q = 0;
    
    cin >> A >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> F;
        if (F*A >= 40000000) {
            q += 1;
        }
    } 
    cout << q << endl;
 
    return 0;
}
