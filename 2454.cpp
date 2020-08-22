//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    bool P, R;
    
    cin >> P >> R;
    
    if (P == 1 && R == 1) cout << "A" << endl;
    if (P == 1 && R == 0) cout << "B" << endl;
    if (P == 0) cout << "C" << endl;
    
 
    return 0;
}
