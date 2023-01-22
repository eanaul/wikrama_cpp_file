#include <iostream>
using namespace std;

int main(){
    int rey, han;
    string data[3][4];

    cout<< "masukan data siswa yang ingin di input (maksimal 5 siwa): ";
    cin >> rey;
    cout << "ketik 4(isi nama, nis, rayon, dpk): ";
    cin >> han;

    for(int r = 0; r<rey; r++){

        for(int x=0; x<han; x++){
            cout<< "masukan data siswa: nama, nis, rayon, dpk";
            cin >> data[r][x];
        }
    }




    for(int r = 0; r<rey; r++){

        for(int x=0; x<han; x++){
            cout<< data[r][x];
        }
    }
}