//Yasmin Alves
//17.07.2020
#include <iostream>
#include <string>
#include <math.h>
 
using namespace std;
 
int main() {
 
    char D; int condicao = 0;
    string N;

    do {

        cin >> D >> N;

        if (D == '0' && N == "0") {
            condicao = 1;
            break;
        }

       int tam = N.size();

        for (int i = 0; i <= tam; i ++) {

            //cout << N << " : " << i << " : " << N[i] << endl;

            if (D == N[i] ) {
                N.erase(i, 1);
                i --;
            } 
            if (N[0] == '0' && N != "0") {
                N.erase(0, 1);
            }
             
        } 
        
        if (N == "") {
            cout << "0" << endl;
        } else cout << N << endl;

        


    } while(condicao != 1);
    


 
    return 0;
}
