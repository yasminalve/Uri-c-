//Yasmin Alves
//29.06.2020
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int val[10], a, i = 0;
    cin >> a;

    while (i < 10) {
        val[i] = a;
        a = a*2;

        i++;
    }
    i = 0;
    while (i < 10) {
        cout << "N[" << i << "] = " << val[i] << endl;
        i ++;
    }
    
 
    return 0;
}
