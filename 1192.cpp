//Yasmin Alves
//12.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    
    char l; int t, r, n1, n2;
    cin >> t;
    while (t--){
        cin >> n1 >> l >> n2;
		if (n1 == n2) r = n1*n2;
		else if (l > 64 && l < 91) r = n2 -n1;
		else if (l > 96 && l < 123) r = n1 + n2;
		
		cout << r <<endl;
    }
    
 
    return 0;
}
