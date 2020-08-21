//Yasmin Alves
//17.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    string V;

    cin >> N;

    for (int i = 0; i < N; i ++) {
        cin >> V;
        int tam = V.size();
        int cont = 0;

        for (int j = 0; j < tam; j++) {
            switch (V[j]) {

                case '0': cont += 6; break;
                case '1': cont += 2; break;
                case '2': cont += 5; break;
                case '3': cont += 5; break;
                case '4': cont += 4; break;
                case '5': cont += 5; break;
                case '6': cont += 6; break;
                case '7': cont += 3; break;
                case '8': cont += 7; break;
                case '9': cont += 6; break;
                
                default: break;
            }
        }
        cout << cont << " leds" << endl;

        
    }
 
    return 0;
}
