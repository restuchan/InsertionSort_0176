#include <iostream>
using namespace std;

int arr[20];
int n;

void input (){
    while (true){
        cout << "Masukkan jumlah data pada Array : ";
        cin >> n;

        if (n<=20){
            break;
        }
        else{
            cout << "\nArray yang anda masukkan maksimal 20 Element.\n";
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)

}