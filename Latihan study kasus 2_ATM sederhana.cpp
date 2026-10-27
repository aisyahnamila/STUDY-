#include <iostream>
#include <string>

using namespace std;

int main (){

    cout << "     ATM SEDERHANA   " << endl;
    cout << " " << endl;

    int saldo = 75000;
    int pilihan, tarik_tunai, sisa_saldo, pin;
    string nama;

    cout << "Masukkan nama anda: ";
    cin >> nama;

    cout << "Masukkan PIN ATM: ";
    cin >> pin;

  if (pin == 12345678 ) {
    cout << "Pilihan menu atm: " << endl;
    cout << "1. Cek saldo" << endl;
    cout << "2. Tarik tunai" << endl;

    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Saldo anda: " << "Rp" << saldo << endl;
        cout << "Terima kasih sudah menggunakan layanan kami :) ";
    } else if (pilihan == 2 ) {
        cout << "1. Rp50.000" << endl;
        cout << "2. Rp100.000" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih nominal tarik tunai: ";
        cin >> tarik_tunai;

          if (tarik_tunai == 1 ) {
            if (saldo >= 50000) {
            sisa_saldo = saldo - 50000;
            cout << "Saldo anda saat ini: " << "Rp" << sisa_saldo << endl;
            cout << "Terima kasih sudah menggunakan layanan kami :) ";
           } else {
             cout << "Saldo tidak mencukupi";
           }
          } else if (tarik_tunai == 2 ) {
            if (saldo >= 100000) {
            sisa_saldo = saldo - 100000;
            cout << "Saldo anda saat ini: " << "Rp" << sisa_saldo << endl;
            cout << "Terima kasih sudah menggunakan layanan kami :) ";
           } else {
             cout << "Saldo tidak mencukupi";
           }
          } else if (tarik_tunai == 3) {
            cout << "Terima kasih sudah menggunakan layanan kami :) ";
          } else {
            cout << "Pilihan tidak valid";
          }

    } else {
        cout << "Pilihan tidak valid";
    }

 } else {
   cout << "PIN ANDA SALAH";
 }


return 0;
}
