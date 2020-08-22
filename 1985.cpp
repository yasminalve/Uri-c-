//Yasmin Alves
//12.07.2020
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    
    float p = 0; int cod, q, i;
    cin >> q;
    while (q--) {
        cin >> cod >> i;
        switch (cod)
        {
        case 1001: p += i*1.5; break;
        case 1002: p += i*2.5; break;
        case 1003: p += i*3.5; break;
        case 1004: p += i*4.5; break;
        case 1005: p += i*5.5; break;
        
        default: break;
        }
    }
    cout << fixed << setprecision(2);
    cout << p << endl;
    
    
 
    return 0;
}
