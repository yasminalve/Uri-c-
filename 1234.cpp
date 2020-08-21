//Yasmin Alves
//18.06.2020
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
 
int main() {
    int i = 0, tam;
    string n; 

    while (getline(cin, n)) {
        i = 0;
        tam = n.size();
        for (int j = 0; j < tam && j < 51; j++) {
            if (isalpha(n[j])) {
                if (i%2 == 0) {
                    n[j] = toupper(n[j]);
                } else {
                    n[j] = tolower(n[j]);
                }
                
                i++;
            }
        }
        cout << n << "\n";
        
    }
    return 0;
}
