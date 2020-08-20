//Yasmin Alves
//24.06.2020
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
    
    int a, b, c;
    cin >> a >> b;

    if ((b % a == 0) || (a % b == 0)) cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;
   
    return 0;
}
