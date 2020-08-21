//Yasmin Alves
//29.06.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float val[100]; int i = 0; float a;

    while (i < 100) {
        cin >> a;
        val[i] = a;

        i++;
    }
    i = 0;
    while (i < 100) {
        if (val[i] <= 10) {
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << val[i] << endl;
            i ++;
        }else { i++; }
    }
    
 
    return 0;
}
