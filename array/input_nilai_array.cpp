#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int nilai[10];
    string nama[10];

    

    
    cout << "Berapa Elemen yang akan diisi? ";
    cin >>j;

    for (i=0; i<j; i++){
        cout << "Masukan Nama Siswa Ke-"<<i+1<<" = ";
        cin >>nama [i];
        cout << "Masukan Nilai ke-"<<i+1<<" = ";
        cin >>nilai[i];
    }
    cout << "\nCetak" << endl;
    for (i=0; i<j; i++)
    {
        cout << "Nama ke-"<<i+1<<" = " <<nama [i] ;
        cout << " Nilai ke-"<<i+1<<" = " <<nilai [i]<<endl;
    }
    return 0;
}