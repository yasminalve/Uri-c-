//Yasmin ALves
//21.06.2020
#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
 
    float x1, x2, y1, y2, distancia;
    
    cin.precision(1);
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    distancia = pow((x2 - x1), 2) + pow ((y2 - y1), 2);
    distancia = sqrt(distancia);

    cout << fixed << setprecision(4) << distancia << endl;
 
    return 0;
}
