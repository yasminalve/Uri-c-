//Yasmin Alves
//11.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, j = 0, k;
    cin >> i;
    while (i--) {
        cin >> k;
        if (k == 2 ||k == 3) j++;
    }
    cout << j << endl;
 
    return 0;
}
