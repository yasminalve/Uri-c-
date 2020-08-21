//Yasmin Alves
//27.07.2020
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;



int main() {
    int grenais = 0, golInter = 0, golGremio = 0, condicao = 1, empates = 0;
    int intertemp, gremiotemp;

    while (condicao == 1 && condicao != 2) {
        grenais ++;
        cin >> intertemp >> gremiotemp;

        if (intertemp > gremiotemp) golInter ++;
        else if (intertemp < gremiotemp) golGremio ++;
        else if (intertemp == gremiotemp) empates++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> condicao;

        
    }
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << golInter << endl;
    cout << "Gremio:" << golGremio << endl;
    cout << "Empates:" << empates << endl;
    if (golInter > golGremio) {
        cout << "Inter venceu mais" << endl;
    } else if (golGremio > golInter) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    
    
    
    return 0;
}
