//Yasmin Alves
//21.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;

    cin >> N;

    cout << N/3600 << ":";
    cout << (N%3600)/60 << ":";
    cout << ((N%3600)%60) << endl;
    
 
    return 0;
}
