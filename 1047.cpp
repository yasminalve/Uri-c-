//Yasmin Alves
//27.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c, d, min, hor;
    
    cin >> a >> b >> c >> d; 
    
    if (a == c) { 
        if (b == d) { hor = 24; min = 0;} // 7 7 7 7 24h00m
        else if (b < d) {hor = 0; min = d - b;} // 7 7 7 8 00h1m
        else if (b > d) {hor = 23; min = 60 - b + d;} // 7 8 7 7 23h59m
    } else if (a < c) {
        if (b == d) { hor = c - a; min = 0;} // 7 1 8 1 01h00m
        else if (b < d) {hor = c - a; min = d - b;} // 7 1 8 2 01h01m
        else if (b > d) {hor = c - a - 1; min = 60 - b + d;}   // 7 2 8 1 00h59m  
    } else if (a > c) {
        if (b == d) { hor = 24 - a + c; min = 0;} // 8 2 7 2 23h00m
        else if (b < d) {hor = 24 - a + c; min = d - b;} // 8 1 7 2 23h01m
        else if (b > d) {hor = 24 - a + c - 1; min = 60 - b + d;} // 8 2 7 1 22h59m
    }


        cout << "O JOGO DUROU "<< hor << " HORA(S) E " << min << " MINUTO(S)" << endl;
 
    return 0;
}
