#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int>& liste) {
    int n = liste.size();
    for (int i = 1; i < n; ++i) {
        int key = liste[i];
        int j = i - 1;

        while (j >= 0 && liste[j] > key) {
            liste[j + 1] = liste[j];
            j = j - 1;
        }
        liste[j + 1] = key;
    }
}

void selectionSort(vector<int>& liste) {
    int n = liste.size();

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (liste[j] < liste[min_idx])
                min_idx = j;

        swap(liste[min_idx], liste[i]);
    }
}

void bubbleSort(vector<int>& liste) {
    int n = liste.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (liste[j] > liste[j + 1])
                swap(liste[j], liste[j + 1]);
        }
    }
}

int main() {
    vector<int> liste;
    int n, val;

    cout << "Entrer la taille de la liste: ";
    cin >> n;

    cout << "Entrer les elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        liste.push_back(val);
    }

    cout << "Entrer le type de tri:\n";
    cout << "1.  tri par Insertion \n";
    cout << "2.  tri par Selection \n";
    cout << "3.  tri a Bull\n";
    cout << "4. Exit\n";

    while (1) {
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                insertionSort(liste);
                break;
            case 2:
                selectionSort(liste);
                break;
            case 3:
                bubbleSort(liste);
                break;
            case 4:
                return 0;
            default:
                cout << "choix invalide, veuillez entrez un autre.";
                continue;
        }

        cout << "la liste triee: \n";
        for (int i = 0; i < n; i++)
            cout << liste[i] << " ";

        cout << "\nEntrez un type de tri:\n";
    }

    return 0;
}
