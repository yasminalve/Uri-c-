//Yasmin Alves
//29.06.2020

#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int x, i = 0, a;

    cin >> x;

    while (i < x) {
        cin >> a;
        if (a % 2 == 0) {
            if (a == 0) cout << "NULL" << endl;
            else {
                cout << "EVEN ";
                if (a > 0) cout << "POSITIVE" << endl;
                else cout << "NEGATIVE" << endl;
            }   
        } else {
            cout << "ODD ";
            if (a > 0) cout << "POSITIVE" << endl;
            else cout << "NEGATIVE" << endl;
        }
        i++;
    }
    
 
    return 0;
}
