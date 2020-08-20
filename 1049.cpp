//Yasmin Alves
//27.06.2020
#include <iostream>
#include <iomanip>
 
using namespace std;
struct Bicho
{
    string vertebra;
    string tipo;
    string alimento;
    string animal;
};

 
int main() {
 
    Bicho teste[10];
        teste[0].vertebra = "vertebrado"; teste[1].vertebra = "vertebrado"; 
        teste[2].vertebra = "vertebrado"; teste[3].vertebra = "vertebrado";
        teste[4].vertebra = "invertebrado"; teste[5].vertebra = "invertebrado"; 
        teste[6].vertebra = "invertebrado"; teste[7].vertebra = "invertebrado";
        teste[0].tipo = "ave"; teste[1].tipo = "ave"; 
        teste[2].tipo = "mamifero"; teste[3].tipo = "mamifero"; 
        teste[4].tipo = "inseto"; teste[5].tipo = "inseto"; 
        teste[6].tipo = "anelideo"; teste[7].tipo = "anelideo";
        teste[0].alimento = "carnivoro"; teste[1].alimento = "onivoro"; 
        teste[2].alimento = "onivoro"; teste[3].alimento = "herbivoro";
        teste[4].alimento = "hematofago"; teste[5].alimento = "herbivoro"; 
        teste[6].alimento = "hematofago"; teste[7].alimento = "onivoro";
        teste[0].animal = "aguia"; teste[1].animal = "pomba"; 
        teste[2].animal = "homem"; teste[3].animal = "vaca";
        teste[4].animal = "pulga"; teste[5].animal = "lagarta"; 
        teste[6].animal = "sanguessuga"; teste[7].animal = "minhoca";

    string vert, tip, alim;

    cin >> vert >> tip >> alim;

    for (int i = 0; i < 8; i++) {
        if (vert == teste[i].vertebra && tip == teste[i].tipo && alim == teste[i].alimento) {
            cout << teste[i].animal << endl;
        }
    }
         



    
    return 0;
}
