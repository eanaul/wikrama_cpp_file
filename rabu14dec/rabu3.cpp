#include <iostream>
using namespace std;

int main(){
    int inp, rey;
    string r[33][1];


    cout << "Masukan data siswa (hanya 1-5 siswa): ";
    cin >> inp;
    cout << "Masukan isi data siswa (hanya 1-5 data): ";
    cin >> rey;

    for(int a=0; a < inp; a++){

        cout << endl;
        for(int x=0; x < rey; x++){
            cout << "masukan nama siswa: ";
            cin >> r[a][x];
        }



    }
 cout << endl;


     for(int a=0; a < inp; a++){

        cout << endl;
        for(int x=0; x < rey; x++){
            cout << r[a][x];
        }



    }


    
}