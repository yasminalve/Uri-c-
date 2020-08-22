//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;

struct Refeicao {
    int C;
    int B;
    int P;
};
 
int main() {

    Refeicao a, r; 
    int pessoas = 0;

    cin >> a.C >> a.B >> a.P;
    cin >> r.C >> r.B >> r.P;

    if (r.C > a.C) pessoas += (r.C - a.C);
    if (r.B > a.B) pessoas += (r.B - a.B);
    if (r.P > a.P) pessoas += (r.P - a.P);

    cout << pessoas << endl;

    return 0;
}
