#include <iostream>
using namespace std;
class Complexe {
private:
    double reel;
    double imaginaire;

public:
    Complexe(double r, double i) : reel(r), imaginaire(i) {}

    Complexe operator+(const Complexe& other ) {
        return Complexe(reel + other.reel, imaginaire + other.imaginaire);
    }

    Complexe operator-(const Complexe& other) {
        return Complexe(reel - other.reel, imaginaire - other.imaginaire);
    }

    Complexe operator*(const Complexe& other) {
        return Complexe(reel * other.reel - imaginaire * other.imaginaire,
                        reel * other.imaginaire + imaginaire * other.reel);
    }

    void afficher() {
        cout << "Partie reelle : " << reel << ", Partie imaginaire : " << imaginaire << "i" <<endl;
    }
};

int main() {
    double reel1, imaginaire1, reel2, imaginaire2;

    cout << "Entrez la partie reelle du premier nombre complexe : "<<endl;
    cin >> reel1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : "<<endl;
    cin >> imaginaire1;

    cout << "Entrez la partie reelle du deuxieme nombre complexe : "<<endl;
    cin >> reel2;
    cout << "Entrez la partie imaginaire du deuxieme nombre complexe : " <<endl;
    cin >> imaginaire2;

    Complexe c1(reel1, imaginaire1);
    Complexe c2(reel2, imaginaire2);

    Complexe addition = c1 + c2;
    Complexe soustraction = c1 - c2;
    Complexe produit = c1 * c2;

    cout << "l'addition : "<<endl;
    addition.afficher();

    cout << "la soustraction : "<<endl;
    soustraction.afficher();

    cout << "la multiplication : "<<endl;
    produit.afficher();

    return 0;
}

