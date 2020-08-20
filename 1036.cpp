//Yasmin Alves
//22.06.2020
#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   double a, b, c;
   
   cin >> a >> b >> c;
   
   double delta = (b*b - 4*a*c);
   if (delta < 0 || a == 0) {cout << "Impossivel calcular" << endl;}
   else {
       delta = sqrt(delta);
       cout << fixed << setprecision(5);
       cout << "R1 = " << (-b + delta)/(2*a) << endl;
       cout << "R2 = " << (-b - delta)/(2*a) << endl;
   }
 
    return 0;
}
