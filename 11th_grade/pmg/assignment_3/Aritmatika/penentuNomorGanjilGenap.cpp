// Program Penentu Nomor Ganjil/Genap antrean
// Nama  : Wisam
// Kelas : XIA2 TKJ

#include <iostream>

using namespace std;

int main() {
  int nomorAntrean;
  cout << "Masukan Nomor Antrean: ";
  cin >> nomorAntrean;
  cout << "Nomor Antrean adalah (ganjil/genap): " << nomorAntrean % 2 << endl;
  return 0;
}
