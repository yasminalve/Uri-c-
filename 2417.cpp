//Yasmin Alves
//12.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int C[4], F[4];
    cin >> C[0] >> C[1] >> C[2] >> F[0] >> F[1] >> F[2];

    C[3] = C[0]*3 + C[1];
    F[3] = F[0]*3 + F[1];

    if(C[3] > F[3]) cout << "C" << endl;
    else if (C[3] < F[3]) cout << "F" << endl;
    else {
        if(C[2] > F[2]) cout << "C" << endl;
        else if (C[2] < F[2]) cout << "F" << endl;
        else { cout << "=" << endl;}
    }
 
    return 0;
}
