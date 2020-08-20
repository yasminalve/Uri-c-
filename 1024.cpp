//Yasmin Alves
//04.04.2020
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main (){

    int N;
    string M;

    cin >> N;

    for (int i = 0; i <= N; i++) {
       

        getline (cin, M);

        if(i == 0)
            continue;
            
        int tam = M.size();

        vector <char> temp(tam);

        for (int i = 0; i < tam; i++) {temp[i] = M[i];}

            //primeira passada
            for (int i = 0; i < tam; i++) {

                if (isalpha(temp[i])) {
                    temp[i] = M[i] + 3;
                    M[i] = temp[i];
                }

            }

            //segunda passada 
            for (int i = 0, j = tam-1; i < tam; i++, j-- ){
                temp[i] = M[j];
            }

            //terceira passada 
            for (int i = tam/2; i < tam; i++) {
                temp [i] = temp [i] - 1;
            }

            for (int i = 0; i < tam; i++) {
                cout << temp[i];
            }


        cout << endl;

    }

    

    return 0;
} 
