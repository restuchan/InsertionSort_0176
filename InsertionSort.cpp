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

    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i + 1) << " : ";
        cin >> arr[i];
    }
}

void InsertionSort(){
    int temp;
    int J, i;

    for (i = 1; i <= n - 1; i++){
        temp = arr[i];
        J = i - 1;

        while (J >= 0 && arr[J] > temp){
            arr[J + 1] = arr[J];
            J--;
        }
        arr[J + 1] = temp;
    }
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Total Pass = " << n - 1 << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;

    for (int J = 0; J < n; J++){
        cout << arr[J] << endl;
    }

    cout << endl;
}

int main (){
    input();
    InsertionSort();
    display();
    system("Pause");
    return 0;
}