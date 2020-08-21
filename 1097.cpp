//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
    
    for (int i = 1; i <= 9; i += 2) {
        int j = i + 6;
        cout << "I=" << i << " J=" << j << endl;
        cout << "I=" << i << " J=" << j - 1 << endl;
        cout << "I=" << i << " J=" << j - 2 << endl;
        
    }
 
    return 0;
}
