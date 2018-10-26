# Praktikum3

##Latihan1.cpp

**Alur Algoritma
1. Mendeklarasikan Variabel int a, max, n sebagai sebagai Variabel input
2. Membaca input dari keyboard cin >> n
3. Membandingkan nilai Variabel **A** dengan Variabel **max** jika **a>max**
4. Bandingkan kembali kedua Variabel sebanyak jumlah **n** atau bilangan yang di input
5. Sampai menemukan hasil **a=max** maka cetaklah 
6. Cetak bilangan terbesar dari semua bilangan yang di inputkan

**Flowchart Program**


**Code Program**
```c++
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
```

**Hasil**


##Latihan2.cpp

**Alur Algoritma**
1. Mendeklarasikan Variabel int A, B, C sebagai Variabel input
2. Membaca input dari keyboard cin >> A >> B >> C
3. Membandingkan nilai Variabel **A** dengan Variabel **B** jika A lebih kecil dari pada B
4. Bandingkan kembali variabel B dengan C
5. Jika kondisi TRUE maka cetaklah bilangan secara berurutan dari yang Terkecil-Terbesar yaitu **A,B,C**
6. Jika kondisi FALSE bandingkan kembali  Variabel A dengan Variabel C jika A lebih kecil dari C
7.Jika kondisi TRUE maka  cetaklah bilangan secara berurutan dari yang Terkecil-Terbesar yaitu **A,C,B**
8. Jika kondisi FALSE maka cetaklah bilangan secara berurutan dari Terkecil-Terbesar yaitu *C,A,B**
9. Kemudian jika A lebih kecil dari C
10. Jika kondisi TRUE maka cetaklah bilangan secara berurutan dari yang Terkecil-Terbesar yaitu **B,A,C**
11. Jika kondisi FALSE bandingkan kembali Variabel C jika B lebih kecil dari C
12. Jika kondisi TRUE maka cetaklah bilangan secara berurutan dari yang Terkecil-Terbesar yaitu **B,C,A**
13. Jika kondisi FALSE maka cetaklah bilangan seacara beurutan dari yang Terkecil-Terbessr yaitu **C,B,A**
14 END

**Flowchart Program**


**Code Program**
```c++
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
```
**Hasil**


##Latiham3.cpp

**Alur Algoritma**
1. Mendeklarasikan Variabel int A, B, C sebagai variabel input 
2. Membaca input dari keyboard cin >> A >> B >> C
3. Membandingkan nilai Variabel **A** dengan Varibel **B** jika sama
4. Bandingkan kembali Variabel A dengan Variabel C
5. Jika kondisi TRUE atau ketiga Variabel sama maka Cetaklah **SEGITIGA SAMA SISI**
6. Jika kondisi FALSE atau jika hanya dua yang sama maka Cetaklah **SEGIRTIGA SAMA KAKI**
7. Dan jika Variabel A sama dengan Variabel C, jika kondisi TRUE Cetaklah **SEGITIGA SAMA KAKI**
8. Jika kondisi FALSE semakin kembali Variabel C dengan Variabel B, jika kondisi TRUE Cetaklah **SEGITIGA SAMA KAKI**
9. Jika kondisi FALSE Cetaklah **SEGITIGA SEMBARANG**
10. END

**Flowchart Program**


**Code Program**
```c++
#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    cout<<"DATA KE-1: ";
    cin>> A;
    cout<<"DATA KE-2: ";
    cin>> B;
    cout<<"DATA KE-3: ";
    cin>> C;
    if (A==B)
    {
        if (A==C)
            cout << "Segitiga Sama Sisi";
        else
            cout << "Segitiga Sama Kaki";
    }else{
    if (A==C)
        cout << "Segitiga Sama Kaki";
    else
    {
        if (B==C)
            cout << "Segitiga Sama Kaki";
        else
            cout << "Segitiga Sembarang";
    }
    }
    }
```
**Hasil
