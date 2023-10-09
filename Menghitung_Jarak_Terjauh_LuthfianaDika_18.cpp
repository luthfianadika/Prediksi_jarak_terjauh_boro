#include <iostream>
#include <cmath> // library untuk fungsi sqrt()

using namespace std;

	// fungsi untuk menghitung jarak terjauh
	double hitungJarak(double x1, double y1, double x2, double y2) {
    double jarak = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return jarak;
}

int main() {
    double x1, y1, x2, y2;
    cout << "Masukkan koordinat titik pertama (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik kedua (x2, y2): ";
    cin >> x2 >> y2;

    double jarakTerjauh = hitungJarak(x1, y1, x2, y2);

    cout << "Jarak terjauh antara dua titik adalah: " << jarakTerjauh << endl;

    return 0;
}
