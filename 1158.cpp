//Yasmin Alves
//12.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    
    int i, x, y, t;
    cin >> i;
    while (i--) {
        cin >> x >> y;
        t = 0;
        if (x % 2 == 0) x++;
        while (y--) {
            t += x;
            x += 2;
        }
        cout << t << endl;
    }
    

    
    
 
    return 0;
}
