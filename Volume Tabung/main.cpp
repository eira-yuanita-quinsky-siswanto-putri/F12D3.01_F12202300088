#include <iostream>

using namespace std;

int main() {
    const double phi = 3.14;
    double jari_jari, tinggi, volume;

    cout << "Masukkan jari-jari tabung: ";
    cin >> jari_jari;

    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    volume = phi * jari_jari * jari_jari * tinggi;

    cout << "Volume tabung adalah: " << volume << endl;

    return 0;
}
