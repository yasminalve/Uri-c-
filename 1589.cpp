//Yasmin Alves
//10.06.2020

#include <iostream>
 
using namespace std;
 
int main() {
 
    int T, R1, R2, total;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> R1 >> R2;
        
        total = R1 + R2;
        
        cout << total << endl;
    }
    
 
    return 0;
}
