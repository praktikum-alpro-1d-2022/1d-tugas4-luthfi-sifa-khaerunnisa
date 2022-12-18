#include <iostream>
using namespace std;

int main()
{
    int KodeSusu;
    char ukuran;
    float jumlah, b1, s1, k1, b2, s2, k2, b3, s3, k3;
    b1 = 10000;
    s1 = 4250;
    k1 = 2100;
    b2 = 8500;
    s2 = 4000;
    k2 = 2025;
    b3 = 17000;
    s3 = 14500;
    k3 = 8300;

    cout << "----------------------------------------------------------------" << endl;
    cout << "|  Kode Susu  |   Nama Produk  |    Ukuran    |     Harga      |" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "|  1.         |  Dancow        |  B = Besar   |  Rp. 10.000,-  |" << endl;
    cout << "|             |                |  S = Sedang  |  Rp. 4.250,-   |" << endl;
    cout << "|             |                |  K = Kecil   |  Rp. 2.100,-   |" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "|  2.         |  Indomilk      |  B = Besar   |  Rp. 8.500,-   |" << endl;
    cout << "|             |                |  S = Sedang  |  Rp. 4.000,-   |" << endl;
    cout << "|             |                |  K = Kecil   |  Rp. 2.025,-   |" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "|  3.         |  Sustacal      |  B = Besar   |  Rp. 17.000,-  |" << endl;
    cout << "|             |                |  S = Sedang  |  Rp. 14.500,-  |" << endl;
    cout << "|             |                |  K = Kecil   |  Rp. 8.300,-   |" << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "Masukkan Kode Susu (1-3) : " ;
    cin >> KodeSusu;
    cout << "Masukkan Jumlah Pembelian : " ;
    cin >> jumlah;
    cout << "Masukkan Ukuran (B/S/K) : " ;
    cin >> ukuran;
    cout << "------------------------------------" << endl;

    if (KodeSusu == 1 && ukuran == 'B')
        cout << "Susu Dancow \nHarga Susu Rp. " << b1 << ",- \nJumlah Pembelian Rp. " << jumlah*b1 << ",-";
        else if (KodeSusu == 1 && ukuran == 'S')
        cout << "Susu Dancow \nHarga Susu Rp. " << s1 << ",- \nJumlah Pembelian Rp. " << jumlah*s1 << ",-";
        else if (KodeSusu == 1 && ukuran == 'K')
        cout << "Susu Dancow \nHarga Susu Rp. " << k1 << ",- \nJumlah Pembelian Rp. " << jumlah*k1 << ",-";
        else if (KodeSusu == 2 && ukuran == 'B')
        cout << "Susu Indomilk \nHarga Susu Rp. " << b2 << ",- \nJumlah Pembelian Rp. " << jumlah*b2 << ",-";
        else if (KodeSusu == 2 && ukuran == 'S')
        cout << "Susu Indomilk \nHarga Susu Rp. " << s2 << ",- \nJumlah Pembelian Rp. " << jumlah*s2 << ",-";
        else if (KodeSusu == 2 && ukuran == 'K')
        cout << "Susu Indomilk \nHarga Susu Rp. " << k2 << ",- \nJumlah Pembelian Rp. " << jumlah*k2 << ",-";
        else if (KodeSusu == 3 && ukuran == 'B')
        cout << "Susu Sustacal \nHarga Susu Rp. " << b3 << ",- \nJumlah Pembelian Rp. " << jumlah*b3 << ",-";
        else if (KodeSusu == 3 && ukuran == 'S')
        cout << "Susu Sustacal \nHarga Susu Rp. " << s3 << ",- \nJumlah Pembelian Rp. " << jumlah*s3 << ",-";
        else if (KodeSusu == 3 && ukuran == 'K')
        cout << "Susu Sustacal \nHarga Susu Rp. " << k3 << ",- \nJumlah Pembelian Rp. " << jumlah*k3 << ",-";
        else
        cout << "Input yang anda masukkan salah";

    return 0;
}
