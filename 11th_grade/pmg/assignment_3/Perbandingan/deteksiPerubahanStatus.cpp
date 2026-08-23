// Program Deteksi Perubahan Status
// Nama  : Wisam
// Kelas : XIA2 TKJ

#include <iostream>

using namespace std;

int main() {
  int statusSekarang;
  cout << "Masukan Status Sekarang: ";
  cin >> statusSekarang;
  cout << "Status Sekarang: " << (statusSekarang != 0) << endl;
  return 0;
}
