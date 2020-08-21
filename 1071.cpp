//Yasmin Alves
//29.06.2020
#include <iostream>
 
using namespace std;

int som (int a, int b);
 
int main() {
 
    int soma = 0, a, b;
    cin >> a >> b;

    if (a < b) {
        cout << som(a, b) << endl;
    } else {
        cout << som(b, a) << endl;
    }
    
 
    return 0;
}
int som (int a, int b) {
    int res = 0;
    for (int i = a + 1; i < b; i++) {
            if (i % 2 != 0)  {
                res += i;
            }
    }
    return res;
}
