#include <iostream>
using namespace std;

int main(){

    int satu, dua;

    cout << "Baris: ";
    cin >> satu;
    cout << "Kolom: ";
    cin >> dua;

    int rey[satu][dua];
    int opera;
    
    for(int r=0; r<satu; r++){

        for(int x=0; x<dua; x++){

            cout << "Masukan angka ke-"<<r+1<<": ";
            cin >> rey[r][x];
        }
    }

    cout<< endl;

    for(int r=0; r<satu; r++){

        for(int x=0; x<dua; x++){

            cout<< "Angka ke-"<<r+1<<" adalah: " <<rey[r][x];
            cout << endl;
            cout << "rey";
        }
    }

    cout << endl;

    cout << "(+ = 1, - = 2, / = 3, * = 4 )" << endl;
    cout << "Pilih Operatornya: ";
    cin >> opera;


}