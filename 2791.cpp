//Yasmin Alves
//11.07.2020
#include <iostream>
#include <stdio.h>
#include <string>

 
using namespace std;
 
int main() {

    bool c[4];

    cin >> c[0] >> c[1] >> c[2] >> c[3];
    
    for (int i = 0; i < 4; i ++) {
        if (c[i] == 1) cout << i + 1 << endl; 
    }
 
    return 0;
}
