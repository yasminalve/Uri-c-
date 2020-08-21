//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int X;
    cin >> X;
    
    for (int i = 1; i < X; i+=2) {
        cout << i << endl;
    }
    if (X%2 != 0) {
        cout << X << endl;
    }
 
    return 0;
}
