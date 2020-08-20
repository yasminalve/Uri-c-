//Yasmin Alves
//10.06.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int t, v, km;
    float l;
    
    cin >> t >> v;
    km = t*v;
    l = (float)km/12;
    
    cout << fixed << setprecision(3);
    cout << l << endl;
    
 
    return 0;
}
