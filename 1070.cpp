//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int X; 
    
    do {
         cin >> X;
    } while (X < 0);
   


    //executar 6 vezes
        if (X % 2 == 0) {
            for (int j = 1; j < 12; j += 2) {
                cout << X + j << endl;
            }
        } else {
            for (int j = 0; j < 11; j += 2) {
                cout << X + j << endl;
            }
        }
 
    return 0;
}
