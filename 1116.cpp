//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int t, n1, n2; float res;
    cin >> t;
    while (t--) {
        cin >> n1 >> n2;

        if (n2 == 0) cout << "divisao impossivel" << endl;
        else {
            res = (float)n1/(float)n2;
            printf("%.1f\n", res);
        }
        
    }
    return 0;
}
