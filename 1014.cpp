//Yasmin Alves
//21.06.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int x;
    float y;
    
    cin >> x;
    cin.precision(1);
    cin >> y;

    cout << fixed << setprecision(3) << (float)x/y << " km/l" << endl;
 
    return 0;
}
