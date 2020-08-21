//Yasmin Alves
//21.06.2020
#include <iostream>
#include <algorithm>
 
using namespace std;

struct Pessoa {
    string nome;
    string cor;
    char tamanho;
};

bool ordem (Pessoa a, Pessoa b);
 
int main() {

    int N;
    Pessoa a[61];

    cin >> N;

    while (N != 0) {

        for (int i = 0; i < N; i++) {
            cin.ignore();
            getline (cin, a[i].nome);
            cin >> a[i].cor >> a[i].tamanho;
        }
        stable_sort (a, a + N, ordem);

        for (int i = 0; i < N; i++) {
            cout << a[i].cor << " " << a[i].tamanho << " " << a[i].nome << endl;
        }

    cin >> N;
        if (N!=0) cout << endl;
    }
    
    return 0;
}

bool ordem (Pessoa a, Pessoa b) {
    'P' > 'M' > 'G';


    if (a.cor == b.cor) {
        if (a.tamanho == b.tamanho) {
            return a.nome < b.nome;
        }
        return a.tamanho > b.tamanho;
    } else {
        return a.cor < b.cor;
    }
}
