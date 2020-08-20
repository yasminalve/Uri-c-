//Yasmin Alves
//26.03.2020
#include <iostream>
#include <iomanip> 

using namespace std;

int main () {
    double pi = 3.14159;
    double raio, volume;

    cin >> raio;

    volume = (4/3.0)*pi*(raio*raio*raio);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " <<  volume << endl;



    return 0;
}
