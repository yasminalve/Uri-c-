//Yasmin Alves
//14.07.2020
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, q, r, temp;
    cin >> a >> b;
    r = a % b;
    if (r < 0) {
        temp = abs(b);
        for (int i = 0; i < temp; i ++) {
            r ++;
            if ((a-r)%b == 0) break;
        }
        
    }
    q = (a - r)/b;
    cout << q << " " << r << endl;
    
 
    return 0;
}
