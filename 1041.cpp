//Yasmin Alves
//24.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    float a, b;
    cin >> a >> b;
    
    if (a > 0 && b > 0) cout << "Q1" << endl;
    if (a < 0 && b > 0) cout << "Q2" << endl;
    if (a < 0 && b < 0) cout << "Q3" << endl;
    if (a > 0 && b < 0) cout << "Q4" << endl;
    if (a == 0 && b == 0) cout << "Origem" << endl;
    if (a == 0 && b != 0) cout << "Eixo Y" << endl;
    if (a != 0 && b == 0) cout << "Eixo X" << endl;
  
    return 0;
}
