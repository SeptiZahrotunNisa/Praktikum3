#include<iostream>

using namespace std;

int main() {
    int i=0;
    int max=0;
    int n,a;

    cout << "Masukan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++) {
            cout << "Masukan bilangan ke-" << i+1 << ": ";
            cin >> a;

            if (a > max)
                max = a;
    }

    cout << "Bilangan terbesar adalah: " << max << endl;
}
