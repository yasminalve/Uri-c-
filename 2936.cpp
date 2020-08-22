//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int Total, C, B, R, M, I;
    Total = 225;
    cin >> C >> B >> R >> M >> I;

    Total = Total + C*300 + B*1500 + R*600 + M*1000 + I*150;

    cout << Total << endl;
 
    return 0;
}
