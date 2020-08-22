//Yasmin Alves
//10.06.2020
#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, T, V, dist = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> T >> V;
        dist += V*T;
    }
    cout << dist << endl;
    
 
    return 0;
}
