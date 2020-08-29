//Yasmin Alves
//29.08.2020

#include <iostream>
#include <vector>
#include <stdio.h>
 
using namespace std;
 
int main() {
    int m, f1, f2, f3, maior;
    cin >> m >> f1 >> f2;
    f3 = m - f1 - f2;
    maior = f1;
    if (f2 > maior) maior = f2;
    if (f3 > maior) maior = f3;

    cout << maior << endl;
    
    return 0;
}
