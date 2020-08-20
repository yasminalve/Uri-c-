//Yasmin Alves
//24.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    double a, b, c;
    
    cin >> a >> b >> c;
    
    if ((a >= (b + c)) || (b >= (a + c)) || (c >= (b + a))) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if ((a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (a*a + b*b))) cout << "TRIANGULO RETANGULO" << endl;
        else {

            if ((a*a > (b*b + c*c)) || (b*b > (a*a + c*c)) || (c*c > (a*a + b*b))) cout << "TRIANGULO OBTUSANGULO" << endl;
            else if ((a*a < (b*b + c*c)) || (b*b < (a*a + c*c)) || (c*c < (a*a + b*b))) cout << "TRIANGULO ACUTANGULO" << endl;
            if (a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
            if (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a))) cout << "TRIANGULO ISOSCELES" << endl;
   
        }
    }
 
    return 0;
}
