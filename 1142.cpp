//Yasmin Alves
//11.07.2020
#include <iostream>
#include <stdio.h> 
 
using namespace std;
 
int main() {

    int o, cont = 1;
    cin >> o;

    while (o > 0) {
        printf ("%d %d %d PUM\n", cont, cont + 1, cont + 2);
        cont += 4;
        o--;
    }
 
    return 0;
}
