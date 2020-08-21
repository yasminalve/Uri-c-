//Yasmin Alves
//03.07.2020
#include <iostream>
#include <iomanip>
 
using namespace std;

float soma ( float M[12][12]);
 
int main() {
 
    char T;
    float temp, M[12][12];

    cin >> T;

    for (int i = 0; i < 12; i ++) {
        for (int j = 0; j < 12; j++) {
            cin >> temp;
            M[i][j] = temp;
        }
    }
    cout << fixed << setprecision(1);
    if (T == 'S') cout << soma(M) << endl;
    else if (T == 'M') cout << soma(M)/66 << endl;




 
    return 0;
}
float soma (float M[12][12]) {
    float som = 0;
    for (int i = 0; i < 12; i ++) {
        for (int j = 0; j < 12; j++) {
            if (j < 11 - i) som += M[i][j];
            else som += 0;
        }
    }
    return som;
}
