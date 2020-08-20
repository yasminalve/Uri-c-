//Yasmin Alves
//09.06.2020
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double A, B, C, tri, cir, trap, quad, ret;

    cout << fixed << setprecision (1);

    cin >> A >> B >> C;
    
    tri = ((A*C)/2);
    cir = (3.14159*(C*C));
    trap = (((A+B)*C)/2);
    quad = (B*B);
    ret = (B*A);

    cout << fixed << setprecision (3);

    cout<<fixed;
    cout<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
    cout<<setprecision(3)<<"CIRCULO: "<<cir<<endl;
    cout<<setprecision(3)<<"TRAPEZIO: "<<trap<<endl;
    cout<<setprecision(3)<<"QUADRADO: "<<quad<<endl;
    cout<<setprecision(3)<<"RETANGULO: "<<ret<<endl;



    return 0;
}
