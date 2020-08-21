//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    for (float i = 0; i <= 2.1; i += 0.2) {
        for (float j = 1 + i; j <= (i + 3.1); j += 1.0) {
            cout << "I=" << i << " " << "J=" << j << "\n";
        }
        
    }
    return 0;
}
