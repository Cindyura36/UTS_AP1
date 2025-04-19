#include <iostream>
using namespace std;

int main() {
    char biner[100];
    cout << "Masukkan kode biner: ";
    cin >> biner;

    int panjang = 0;
    while (biner[panjang] != '\0')
    {
        panjang++;
    }

    int desimal = 0;
    int pangkat = 1;

    for (int i = panjang - 1; i >= 0; i--)
    {
        if (biner[i] == '0')
        {

        }

        else if (biner[i] == '1')
        {
            desimal += pangkat;
        }
        
        else
        {
            cout << "Pesan Rusak!" << endl;
            return 0;
        }

        pangkat *= 2;
    }

    cout << "Angka desimal dari biner " << biner << " adalah: " << desimal << endl;

    return 0;
}