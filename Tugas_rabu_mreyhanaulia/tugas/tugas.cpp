#include <iostream>
using namespace std;

//M. Reyhan Aulia Treeana PPLG X-1
// Absen 14; NIS 12209113

   int main()
{
    int i,j, max, min;
    int nilai[10];
    string nama[10];
    float total, rata2;

    

    
    cout << "Berapa Elemen yang akan diisi? ";
    cin >>j;

    for (i=0; i<j; i++){
        cout << "Masukan Nama Siswa Ke-"<<i+1<<" = ";
        cin >>nama [i];
        cout << "Masukan Nilai ke-"<<i+1<<" = ";
        cin >>nilai[i];
    }
    
    cout << "\n" << endl;

     cout << "Daftar Nilai Matematika" << endl;
        cout << "PPLG X-1" << endl;
        cout << "SMK Wikrama Bogor" << endl;
        cout << "=========================================" << endl;
        cout << "No." << "           " << "Nama" <<"                "<< "Nilai" << endl;
        cout << "=========================================" << endl;

    for (i=0; i<j; i++)
    {

        cout << i+1<< "             " << nama [i] << "                 " << nilai [i]<< endl;
    }

    cout << "=========================================" << endl;

    for (i=0; i<j; i++){
        if (nilai[i] > max){
            max = nilai[i];
        } 
        else if(nilai[i] < min){
            min = nilai[i];
        }
    }

        
    total = 0;
  for(i = 0; i < j; i++){
    total = total+nilai[i];
  }
  rata2 = (total/j);

    cout << "Nilai terbesar: " << max << endl;

    cout << "Nilai terkecil: " << min << endl;

    cout << "Nilai rata-rata dari "<< j <<
          " inputan nilai adalah: " << rata2<<endl;


    return 0;
}



