//Yasmin Alves
//20.06.2020
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

bool par (int i, int j) {return (i < j);}
bool impar (int i, int j) {return (i > j);}



 
int main() {

    int N;
    vector <int> impapar;

    cin >> N;

    for (int i = 0; i < N; i ++) {
        int pos;

        cin >> pos;

        impapar.push_back(pos);
        
    }
    sort (impapar.begin(), impapar.end(), par);
    for (auto x: impapar) {
        if (x % 2 == 0) {
            cout << x << endl;
        }
    }
    sort (impapar.begin(), impapar.end(), impar);
    for (auto x: impapar) {
        if (x % 2 != 0) {
            cout << x << endl;
        }
    }


 



    return 0;
}
