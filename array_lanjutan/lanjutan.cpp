#include <iostream>
using namespace std;

int main(){

    int a, b, max, min;
    int nilai[5];
    string nama[5];

    cout << "Masukan jumlah siswa yang akan diisi: ";
    cin >> b;

    for(a = 0; a < b; a++){
        cout << "Masukan nama siswa ke-" << a + 1 << " : ";
        cin >> nama[a];
        cout << "Masukan nilai " << nama[a] << " : ";
        cin >> nilai[a];

    }


    cout << endl;
    cout << endl;

    cout << "Daftar Nilai Bahasa Inggris" << endl;
    cout << "SMK Wikrama Bogor" << endl;
    cout << "PPLG X-1" << endl;
    cout << "===================================" << endl;
    cout << "No." << "          " << "Nama" << "            " << "Nilai" << endl;
    cout << "===================================" << endl;

    for(a = 0; a<b; a++){
        cout << a+1 << "            "<< nama[a] << "            " << nilai[a] << endl;

    }

    cout << "===================================" << endl;
    cout << endl;


    min = nilai[0];
    for(a = 0; a<b; a++){
        if(nilai[a] > max){
            max = nilai[a];
        }
        else if(nilai[a] < min){
            min = nilai[a];
        }
    }

    cout << "Nilai terbesar diantara nilai-nilai tersebut adalah " << max << endl;
    cout << endl;
    cout << "Dan Nilai terkecil diantara nilai-nilai tersebut adalah " << min << endl;

    cin.get();
    return 0;
}


