#include <iostream>
using namespace std;

int main(){
    int inp, rey;
    string r[5][5] = {
        {"Reyhan Aulia, "," PPLG X-1, "," Cicurug 6, ", " 12209113, ", "Nilai 90"},
        {"Manca Fabiansyah, ", " PPLG X-1, ", " Sukasari 1, ", " 12209114, ", "Nilai 89"},
        {"Louis Cardoso, ", " PPLG X-1, ", " Wikrama 4, ", " 12209115, ", "Nilai 92"},
        {"Asep Surya, ", " PPLG X-1, ", " Cibedug 3, ", " 12209116, ", "Nilai 25"},
        {"Dante Ikhwan, ", " PPLG X-1, ", " Ciawi 2, ", " 12209117, ", "Nilai 80"}};


    cout << "Masukan data siswa (hanya 1-5 siswa): ";
    cin >> inp;
    cout << "Masukan isi data siswa (hanya 1-5 data): ";
    cin >> rey;

    for(int a=0; a < inp; a++){

        cout << endl;
        for(int x=0; x < rey; x++){
            cout << r[a][x];
        }

    cout << endl;

    }
 cout << endl;

    
}