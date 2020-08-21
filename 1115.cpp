//Yasmin Alves
//10.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
    int x = 1, y = 1;
 
    while (x !=0 && y != 0) {
        cin >> x >> y;
        if (x != 0 && y != 0) {
            if (x > 0 && y > 0) cout << "primeiro" << endl;
            if (x > 0 && y < 0) cout << "quarto" << endl;
            if (x < 0 && y > 0) cout << "segundo" << endl;
            if (x < 0 && y < 0) cout << "terceiro" << endl;
        }
    }
 
    return 0;
}
