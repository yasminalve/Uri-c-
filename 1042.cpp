//Yasmin Alves
//24.06.2020
#include <iostream>
#include <vector>
#include <algorithm>

bool ordem (int a, int b) {
    return a < b;
}
 
using namespace std;
 
int main() {
    vector <int> temp;
    int a, b, c;
    cin >> a >> b >> c;

    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);

    sort (temp.begin(), temp.end(), ordem);

    for (auto i: temp) {
        cout << i << endl;
    } 
    cout << endl << a << endl << b << endl << c << endl;
    
    
  
    return 0;
}
