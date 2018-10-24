#include<iostream>

using namespace std;

int main() {
    int A,B,C;

    cout << "Masukan bilangan A: "; cin >> A;
    cout << "Masukan bilangan B: "; cin >> B;
    cout << "Masukan bilangan C; "; cin >> C;

    if (A<B) {
        if (B<C)
            cout << "Urutan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "Urutan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << A << ", " << B << endl;
        }
    } else {
        if (A<C)
            cout << "Urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << "Urutan bilangan: " << B << ", " << C << ", " << A << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << B << ", " << A << endl;
        }
    }
}
