#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Personne {
    string nom;
    string prenom;
    int age;
};

bool compare(const Personne &a, const Personne &b) {
    int resultat = a.nom.compare(b.nom);
    if (resultat == 0) {
        resultat = a.prenom.compare(b.prenom);
    }
    return resultat < 0;
}

int main() {
    list<Personne> personnes;
    
    int n;
    cout << "Combien de personnes voulez-vous entrer ? ";
    cin >> n;
    
    cin.ignore();  
    
    for (int i = 0; i < n; ++i) {
        Personne personnage;
        cout << "Personne " << i + 1 << " :\n";
        cout << "Nom : ";
        getline(cin, personnage.nom);
        cout << "Prenom : ";
        getline(cin, personnage.prenom);
        cout << "age : ";
        cin >> personnage.age;
        
        personnes.push_back(personnage);
        cin.ignore();  
    }
    
    personnes.sort(compare);  
    
    cout << "\nListe triee par nom et prenom :\n";
    for (const Personne &personnage : personnes) {
        cout << "Nom : " << personnage.nom << ", Prenom : " << personnage.prenom << ", age : " << personnage.age << endl;
    }
    
    return 0;
}

