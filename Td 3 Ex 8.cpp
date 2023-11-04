#include <iostream>
using namespace std ;

template <typename T>
T carre( T val) {
    return val * val;
}

int main() 
{
    double nombre ;
    cout<<"Entrez un nombre :"<<endl;
    cin>>nombre;
    double carrenombre = carre(nombre);
    cout << "Le carre de " << nombre << " est " << carrenombre <<endl;
   

    return 0;
}

