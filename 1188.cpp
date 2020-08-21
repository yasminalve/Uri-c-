//Yasmin Alves
//03.07.2020
#include <iostream>
#include <iomanip>
 
using namespace std;

double soma ( double M[12][12]);
 
int main() {
 
    char T;
    double temp, M[12][12];

    cin >> T;

    for (int i = 0; i < 12; i ++) {
        for (int j = 0; j < 12; j++) {
            cin >> temp;
            M[i][j] = temp;
        }
    }
    cout << fixed << setprecision(1);
    if (T == 'S') cout << soma(M) << endl;
    else if (T == 'M') cout << soma(M)/30 << endl;




 
    return 0;
}
double soma (double M[12][12]) {
    double som = 0;
    for (int i = 0; i < 12; i ++) {
        for (int j = 0; j < 12; j++) {
            if ((j + i > 11) && (i > j)) som += M[i][j];
            else som += 0;
        }
    }
    return som;
}
