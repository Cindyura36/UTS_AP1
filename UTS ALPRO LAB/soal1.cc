#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan kode: ";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0)
    {
        cout << "ya" << endl;
    }
    
    else
    {
        cout << "bukan" << endl;
    }
    return 0;
}