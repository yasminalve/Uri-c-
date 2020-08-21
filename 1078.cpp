//Yasmin Alves
//11.07.2020

#include <iostream>
#include <stdio.h> 
 
using namespace std;
 
int main() {

    int i;
    cin >> i;

    for (int j = 1; j < 11; j ++) {
        printf ("%d x %d = %d\n", j, i, j*i);
    }
 
    return 0;
}
