#include <iostream>
using namespace std;

int main()
{
    string nama;
    int nim, alpro, pds, os, rata2;

    cout << "Masukkan nama  mahasiswa : ";
    getline(cin,nama);

    cout << "Masukkan NIM mahasiswa : ";
    cin >> nim;

    cout << "Masukkan nilai Algoritma dan Pemrograman : ";
    cin >> alpro;

    cout << "Masukkan nilai Probabilitas dan Statistika : ";
    cin >> pds;

    cout << "Masukkan nilai Operasi Sistem : ";
    cin >> os;

    if(alpro >= 60)
    {
        cout << "Lulus" << endl;
    }

    else
    {
        cout << "Tidak Lulus" << endl;
    }
    
    if(pds >=  60)
    {
        cout << "Lulus" << endl;
    }

    else
    {
        cout << "Tidak Lulus" << endl;
    }

    if(os >= 60)
    {
        cout << "Lulus" << endl;
    }

    else
    {
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!!" << endl;
    }

    rata2 = (alpro+pds+os) / 3;

    cout << "Nilai Rata-Rata Semester ini : " << rata2 << endl;
}