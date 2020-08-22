//Yasmin Alves
//11.07.2020
#include <iostream>
#include <stdio.h>
#include <string>

 
using namespace std;
 
int main() {

    int t, n, k, res;

    cin >> t;

    for (int i = 0; i < t; i ++) {
        cin >> n >> k;
        res = n/k + n%k;
        
        { cout << res << endl; }
    }
 
    return 0;
}
