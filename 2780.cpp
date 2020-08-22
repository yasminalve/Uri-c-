//Yasmin Alves
//11.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
   int i;
    cin >> i;
    if (i >= 0) {
        if (i <= 800) cout << "1" << endl;
        else if (i <= 1400) cout << "2" << endl;
        else if (i <= 2000) cout << "3" << endl;
    }
 
    return 0;
}
