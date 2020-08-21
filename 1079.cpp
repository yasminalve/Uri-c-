//Yasmin Alves
//15.07.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int t; float n[3], media;
    cin >> t;
    while (t--) {
        cin >> n[0] >> n[1] >> n[2];
        media = n[0]*2 + n[1]*3 + n[2]*5;
        printf("%.1f\n", media/10);
    }
 
    return 0;
}
