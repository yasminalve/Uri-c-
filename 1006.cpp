//Yasmin Alves
//26.03.2020
#include <iostream>
#include <iomanip> 

using namespace std;

int main () {
    double A, B, C, MEDIA;

    cin >> A >> B >> C;
    MEDIA = ((2*A)+(3*B)+(5*C))/10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
