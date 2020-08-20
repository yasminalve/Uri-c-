//Yasmin Alves
//24.06.2020
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
    
    float a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if (((a + b) > c && c > fabs (a - b))) cout << "Perimetro = " << a + b + c << endl; 
    else if (((a + c) > b && b > fabs(a - c))) cout << "Perimetro = " << a + b + c << endl;
    else if (((c + b) > a && a > fabs(b - c))) cout << "Perimetro = " << a + b + c << endl;
    else cout << "Area = " << (a + b)*c/2 << endl;
   
    return 0;
}
