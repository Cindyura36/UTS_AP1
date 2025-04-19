#include <iostream>
using namespace std;

int main() {
    char mantra[100];
    int vokal = 0, i = 0;

    cout << "Masukkan mantra: ";
    cin >> mantra;

    while (mantra[i] != '\0')
    {
        char huruf = mantra[i];
        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' || 
            huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O')
        {
            vokal++;
        }
        i++;
    }

    if (vokal > 0)
    {
        cout << "Kekuatan mantra: " << vokal << "vokal" << endl;
    }
    
    else
    {
        cout << "Mantra tidak valid! Tidak mengandung vokal!" << endl;
    }

    return 0;
}