//Yasmin Alves
//11.07.2020
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int n, m; string s;
    
    cin >> n >> m;

    while (m --) {
        cin >> s;
        if (s == "fechou") n ++;
        if (s == "clicou") n --;
    }
    cout << n << endl;
    
 
    return 0;
}
