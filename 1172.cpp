//Yasmin Alves
//22.06.2020
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int val[10], a, i = 0;

    while (i < 10) {
        cin >> a;
        if (a <= 0) {
            val[i] = 1;
        } else {
            val[i] = a;
        }
        i++;
    }
    i = 0;
    while (i < 10) {
        cout << "X[" << i << "] = " << val[i] << endl;
        i ++;
    }
    
 
    return 0;
}
