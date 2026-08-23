// Program Kelulusan Ujian
// Nama  : Wisam
// Kelas : XIA2 TKJ

#include <iostream>

using namespace std;

int main() {
  int nilaiUjian;
  cout << "Masukan Nilai Ujian: ";
  cin >> nilaiUjian;
  cout << "Apakah Lulus?: " << (nilaiUjian >= 70) << endl;
  return 0;
}
