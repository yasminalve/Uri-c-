//Yasmin Alves
//12.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, t = 0, p = 0;
    while (cin >> i && i >= 0) {
        t += i;
        p++;
    }
    printf("%.2f\n", (float)t/p);
 
    return 0;
}
