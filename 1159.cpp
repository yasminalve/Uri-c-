//Yasmin Alves
//17.08.2020
#include <iostream>

using namespace std;
 
int main() {
 
   int x, soma;
   while (cin >> x && x != 0)
   {
       soma = 0;
       for (int i = x; i < x + 10 ; i++) {
           if (i % 2 == 0) {
               soma += i;
           }
       }
       cout << soma << endl;
   }
   
 
    return 0;
}
