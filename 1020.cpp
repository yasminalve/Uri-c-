//Yasmin Alves
//21.06.2020
#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int N;

    cin >> N;

    cout << N/365 << " ano(s)" << endl;
    cout << (N%365)/30 << " mes(es)" << endl;
    cout << ((N%365)%30) << " dia(s)" << endl;
    
 
    return 0;
}
