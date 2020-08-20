//Yasmin Alves 
//21.06.2020
#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double N;
    int temp;

    cin >> N;

    cout << "NOTAS:" << endl;
    cout.precision(0);
    cout << (int)N/100 << " nota(s) de R$ 100.00" << endl; temp = (int)N/100; N -= temp*100;
    cout << (int)N/50 << " nota(s) de R$ 50.00" << endl; temp = (int)N/50; N -= temp*50;
    cout << (int)N/20 << " nota(s) de R$ 20.00" << endl; temp = (int)N/20; N -= temp*20;
    cout << (int)N/10 << " nota(s) de R$ 10.00" << endl; temp = (int)N/10; N -= temp*10;
    cout << (int)N/5 << " nota(s) de R$ 5.00" << endl; temp = (int)N/5; N -= temp*5;
    cout << (int)N/2 << " nota(s) de R$ 2.00" << endl; temp = (int)N/2; N -= temp*2;
    cout << "MOEDAS:" << endl;
    float moedas = N*100;
    cout << (int)moedas/100 << " moeda(s) de R$ 1.00" << endl; temp = (int)moedas/100; moedas -= temp*100;
    cout << (int)moedas/50 << " moeda(s) de R$ 0.50" << endl; temp = (int)moedas/50; moedas -= temp*50;
    cout << (int)moedas/25 << " moeda(s) de R$ 0.25" << endl; temp = (int)moedas/25; moedas -= temp*25;
    cout << (int)moedas/10 << " moeda(s) de R$ 0.10" << endl; temp = (int)moedas/10; moedas -= temp*10;
    cout << (int)moedas/5 << " moeda(s) de R$ 0.05" << endl; temp = (int)moedas/5; moedas -= temp*5;
    cout << (int)moedas/1 << " moeda(s) de R$ 0.01" << endl;
    
 
    return 0;
}
