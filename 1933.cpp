//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, B;
    cin >> A >> B;
    
    if (A >= 1 && A <= 13 && B >= 1 && B <=13) {
        if (A >= B) {
            cout << A << endl;
        } else {
            cout << B << endl;
        }
    }
    return 0;
}
