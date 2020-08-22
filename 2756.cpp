//Yasmin Alves
//11.07.2020
#include <iostream>
#include <string>


using namespace std;
string espaco (int q);

int main() {
    
    int i = 9;

    cout << espaco(7) << "A" << endl;
    cout << espaco(6) << "B B" << endl;
    cout << espaco(5) << "C   C" << endl;
    cout << espaco(4) << "D" << espaco(5) << "D" << endl;
    cout << espaco(3) << "E" << espaco(7) << "E" << endl;
    cout << espaco(4) << "D" << espaco(5) << "D" << endl;
    cout << espaco(5) << "C   C" << endl;
    cout << espaco(6) << "B B" << endl;
    cout << espaco(7) << "A" << endl;
 
    return 0;
}
string espaco (int q) {
    string res = "";
    while (q--) res += " ";
    return res;
}
