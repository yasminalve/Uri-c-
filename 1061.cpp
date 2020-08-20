//Yasmin Alves
//27.06.2020
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    int di, df, hi, hf, mi, mf, si, sf, hor, min, sec, dias;
    scanf("Dia %d", &di);
    scanf("%d : %d : %d\n", &hi, &mi, &si);
    scanf("Dia %d", &df);
    scanf("%d : %d : %d", &hf, &mf, &sf);

    dias = df - di;

    if (hi <= hf) hor = hf - hi;
    else {
        hor = 24 - hi + hf;
        dias --;
    }

    if (mi <= mf) min = mf - mi;
    else {
        min = 60 - mi + mf;
        hor--;
    } 

    if (si <= sf) sec = sf - si;
    else {
        sec = 60 - si + sf;
        min--;
    }
        cout << dias << " dia(s)" << endl;
        cout << hor << " hora(s)" << endl;
        cout << min << " minuto(s)" << endl;
        cout << sec << " segundo(s)" << endl;
    

        
       
    
        
    return 0;
}
