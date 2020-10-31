//Yasmin Alves
//31.10.2020

#include <iostream>

using namespace std;

int main(){
    
    int N, H_max, H_min, aceitos = 0, temp;

    while(cin >> N >> H_min >> H_max) {

        for (int i = 0; i < N; i ++) {
            cin >> temp;
            if (temp <= H_max && temp >= H_min) aceitos ++;
        }
        cout << aceitos << endl;
        aceitos = 0;
    }

    return 0;
}
