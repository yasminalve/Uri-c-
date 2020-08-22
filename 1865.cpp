//Yasmin Alves
//11.07.2020
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int n, t; string nome;

    cin >> t;

    while (t--) {
        cin >> nome;
        cin >> n;
        if (nome == "Thor") cout << "Y" << endl;
        else cout << "N" << endl;
    }
    
 
    return 0;
}
