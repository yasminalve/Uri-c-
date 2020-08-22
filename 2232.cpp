//Yasmin Alves
//10.06.2020
#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
    
    int T, N, S = 0;
    cin >> T;

    for (int i = 0; i < T; i++) {
        S = 0;
        cin >> N;

        for (int j = N - 1; j >= 0; j--){
            S += pow (2, j);
        }
        cout << S << endl;
    }



    return 0;
}
