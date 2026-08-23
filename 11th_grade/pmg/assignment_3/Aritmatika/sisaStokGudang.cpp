// Program Sisa Stok Gudang
// Nama  : Wisam
// Kelas : XIA2 TKJ

#include <iostream>

using namespace std;

int main() {
  int stokAwal, jumlahTerjual;
  cout << "Masukan Stok Awal: ";
  cin >> stokAwal;
  cout << "Masukan Jumlah Barang yang Terjual: ";
  cin >> jumlahTerjual;
  cout << "Sisa Stok: " << stokAwal - jumlahTerjual << endl;
  return 0;
}
