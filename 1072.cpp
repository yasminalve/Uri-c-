//Yasmin Alves
//29.06.2020
#include <iostream>
 
using namespace std;

bool In (int a) {
    if (a >= 10 && a <= 20) return a;
    else return 0;
}
 
int main() {
 
    int x, in = 0, a, i = 0;

    cin >> x;

    while (i < x) {
        cin >> a;
        in += In(a);
        i++;
    }
    cout << in << " in" << endl;
    cout << x - in << " out" << endl;
 
    return 0;
}
