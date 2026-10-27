#include <iostream>
#include <string>

using namespace std;

int main (){

  int total, diskon, bayar;

  cout << "     SELAMAT DATANG      " << endl;
  cout << " " << endl;

  cout << "Masukkan total belanja: ";
  cin >> total;

  if (total <0 ) {
    cout << "Total belanja tidak valid";
  } else if (total >= 500000) {
    diskon = total * 20 / 100;
    bayar = total - diskon;
    cout << "Diskon          : " << "Rp" << diskon << endl;
    cout << "Total pembayaran: " << "Rp" << bayar;
  } else if (total >= 250000 && total <500000 ) {
    diskon = total * 10 /  100;
    bayar = total - diskon;
    cout << "Diskon          : " << "Rp" << diskon << endl;
    cout << "Total pembayaran: " << "Rp" << bayar;
  } else {
    cout << "Diskon          : Rp0" << endl;
    cout << "Total pembayaran: " << "Rp" << total;
  }

  cout << "     TERIMA KASIH SUDAH BERBELANJA      ";


}
