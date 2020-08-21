//Yasmin Alves
//17.08.2020
#include <stdio.h>

 
int main() {
 
   float soma = 1;
   for (int i = 3, j = 2; i <= 39; i += 2) {
       soma += (float)i/j;
       
       j *= 2;
   }

   printf("%.2f\n", soma);
 
    return 0;
}
