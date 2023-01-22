#include <iostream>
using namespace std;

int main(){
    int a;
    cout<< "berapa siswa? ";
    cin>> a;
    
    int j;

    string nama[a];
    string nis[a];
    string rayon[a];
    int dpk[a];

    

    for(int i=0; i<a; i++){
        cout<<"masukan nama: ";
        cin >> nama[i];
        cout<< "masukan nis: ";
        cin >> nis[i];
        cout<< "masukan rayon: ";
        cin >> rayon[i];
        cout<< "masukan dpk: ";
        cin >> dpk[i];
        cout << endl;
    }

    for(int i=0; i<a; i++){
        cout<< "Nama: " << nama[i] <<endl;
        cout<< "NIS: " << nis[i] << endl;
        cout << "Rayon: " << rayon[i] << endl;
        cout << "DPK: " << dpk[i]<< endl;
        cout << endl;
    }
    
cin.get();
    

}