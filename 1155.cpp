//Yasmin Alves
//17.08.2020
#include <stdio.h>


using namespace std;
 
int main() {
 
   float soma = 0;
   for (int i = 1; i <= 100; i++) {
       soma += 1.00/i;
   }

   printf("%.2f\n", soma);
 
    return 0;
}
