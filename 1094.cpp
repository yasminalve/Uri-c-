//Yasmin Alves
//15.07.2020
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
    int t, c, r, s, T, temp; char cob;
    T = c = r = s = 0;
    cin >> t;
    while (t--) {
        cin >> temp >> cob;
        switch (cob) {
            case 'C': c += temp; break;
            case 'S': s += temp; break;
            case 'R': r += temp; break;
            default:break;
        }
        T += temp;
    }
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", T, c, r, s);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", 100.0*c/T, 100.0*r/T, 100.0*s/T);

    return 0;
}
