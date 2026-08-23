// Program Peringatan Baterai Lemah
// Nama  : Wisam
// Kelas : XIA2 TKJ

#include <iostream>

using namespace std;

int main() {
  int persenBaterai;
  cout << "Masukan Persen Baterai: ";
  cin >> persenBaterai;
  cout << "Apakah Persen Baterai < 20?: " << (persenBaterai < 20) << endl;
  return 0;
}
