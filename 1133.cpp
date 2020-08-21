//Yasmin Alves
//27.07.2020
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;



int main() {
    int a, b, temp;
    cin >> a >> b;
    temp = a;
    if (temp < b) b = b;
    else {
        temp = b;
        b = a;
        a = temp;
    }

    for (int i = a + 1; i < b; i ++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }


    
    
    
    return 0;
}
