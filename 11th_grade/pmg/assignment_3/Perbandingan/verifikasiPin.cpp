// Program Verifikasi Pin
// Nama  : Wisam
// Kelas : XIA2 TKJ

#include <iostream>

using namespace std;

int main() {
  int pinInput;
  cout << "Masukan Pin: ";
  cin >> pinInput;
  cout << "Apakah Pin == 1234?: " << (pinInput == 1234) << endl;
  return 0;
}
