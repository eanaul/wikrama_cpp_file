#include <iostream>
using namespace std;

int main(){

    int sis;
    cout << "Masukan jumlah siwa yang ingin di daftarkan: ";
    cin >> sis;

    string nama[sis];
    string nis[sis];
    string asek[sis];
    string alamat[sis];
    int nilai[sis];

    cout << endl;

    for(int i=0; i<sis; i++){

        cout << "Masukan Nama: ";
        cin >> nama[i];
        cout << "Masukan NIS: ";
        cin >> nis[i];
        cout << "Masukan Asal Sekolah Siswa: ";
        cin >> asek[i];
        cout << "Masukan Alamat Siswa: ";
        cin >> alamat[i];
        cout << "Masukan Nilai DPK Siswa: ";
        cin >> nilai[i];
        cout << "\n";
    }


    for(int i = 0; i<sis; i++){

        cout << "Siswa ke-" << i+1 << endl;
        cout << "Nama: " << nama[i] << endl;
        cout << "NIS: " << nis[i] << endl;
        cout << "Asal Sekolah: " << asek[i] << endl;
        cout << "Alamat: " << alamat[i] << endl;
        cout << "Nilai: " << nilai[i] << endl;
        cout << "\n";
    }



}