//Yasmin Alves
//12.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
    int n, l, c, t = 0;
    cin >> n;
    while (n--) {
        cin >> l >> c;
        if (l > c) t += c;
    }
    cout << t << endl;
    return 0;
}
