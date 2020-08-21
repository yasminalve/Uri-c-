//Yasmin Alves
//12.07.2020

#include <iostream>
 
using namespace std;
 
int main() {
 
    for (int i = 1, j = 7; i < 10 ; j--) {
        if (j == 4)  {j = 7; i += 2;}
        printf("I=%d J=%d\n", i, j);
        if (i == 9 && j == 5) break;
    }
 
    return 0;
}
