//Yasmin Alves
//29.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int x; int pos = 0, i = 0, neg = 0, par = 0, impar = 0;

    while (i < 5) {
        cin >> x;
        if (x > 0) {
            pos ++;
        } else if (x != 0) {
            neg++;
        }

        if (x%2 == 0) {
            par++;
        } else {
            impar++;
        }
        i ++;
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;


   
       
    
        
    return 0;
}
