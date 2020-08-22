//Yasmin Alves
//14.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int x, soma, q, i = 0;
    char oper;
    
    
    while (cin >> q && q != 0){ 
        i++;
        cin >> soma;
        for (int j = 0; j < (q-1); j ++) {
            cin >> oper >> x;
            if (oper == '+') soma += x;
            else if (oper == '-') soma -= x;
        }     
        cout << "Teste " << i << endl << soma << "\n\n";  
    }

    return 0;
}
