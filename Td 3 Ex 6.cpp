#include <iostream>
using namespace std;

class vect {
protected:
    int nelem;
    int* adr;

public:
    vect(int n) : nelem(n), adr(new int[n]) {}

    ~vect() {
        delete[] adr;
    }

    int& operator[](int index) {
        return adr[index];
    }
};

class vectok : public vect {
public:
    vectok(int n) : vect(n) {}

    vectok(const vectok& other) : vect(other.nelem) {
        for (int i = 0; i < nelem; i++) {
            adr[i] = other.adr[i];
        }
    }

    vectok& operator=(const vectok& other) {
        if (this == &other) {
            return *this;
        }

        delete[] adr;
        nelem = other.nelem;
        adr = new int[nelem];
        for (int i = 0; i < nelem; i++) {
            adr[i] = other.adr[i];
        }

        return *this;
    }

    int taille() {
        return nelem;
    }
};

int main() {
    vectok v1(10);
    for (int i = 0; i < v1.taille(); i++) {
        v1[i] = i * 2;
    }

    vectok v2 = v1; 
    vectok v3(3);
    v3 = v1; 

    cout << "v1 : ";
    for (int i = 0; i < v1.taille(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "v2 : ";
    for (int i = 0; i < v2.taille(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    cout << "v3 : ";
    for (int i = 0; i < v3.taille(); i++) {
        cout << v3[i] << " ";
    }
    cout << endl;

    return 0;
}

