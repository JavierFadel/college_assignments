// Setting project configurations.
// Author: Javier Fadel.
// Modified: 12 Sept. 2022
#include <iostream>
#include <cmath>
using namespace std;

// Calculate lean side.
double hitungSisiMiring (double alas, double tinggi) {
    double sisiMiring = sqrt(pow(alas/2, 2.0) + pow(tinggi, 2.0));
    return sisiMiring;
}

// Calculate area with height.
double hitungLuasDenganTinggi (double alas, double tinggi) {
    // A = base * height / 2 --> L = alas * tinggi / 2.
    double luasSegitiga = alas * tinggi / 2;
    return luasSegitiga;
}

// Calculate area with lean.
double hitungLuasDenganSisiMiring (double alas, double sisiMiring) {
    // A = base / 4 * sqrt(4 * pow(lean, 2.0) - pow(base, 2.0)).
    double luasSegitiga = alas / 4 * sqrt(4 * pow(sisiMiring, 2.0) - pow(alas, 2.0));
    return luasSegitiga;
}

// Main function.
int main() {
    // Setting up variables.
    double alas, tinggi, sisiMiring, luasSegitigaDenganTinggi, luasSegitigaDenganSisiMiring;

    // Input values.
    cout << "Input alas segitiga: \n";
    cin >> alas;
    cout << "Input tinggi segitiga: \n";
    cin >> tinggi;

    // Compare and calculate value.
    sisiMiring = hitungSisiMiring(alas, tinggi);
    luasSegitigaDenganTinggi = hitungLuasDenganTinggi(alas, tinggi);
    luasSegitigaDenganSisiMiring = hitungLuasDenganSisiMiring(alas, sisiMiring);

    if (luasSegitigaDenganTinggi == luasSegitigaDenganSisiMiring) {
        cout << "Luas segitiga adalah: " << luasSegitigaDenganTinggi << endl;
        cout << "Segitiga ini merupakan segitiga sama kaki. \n";
    } else {
        cout << "Segitiga ini bukan segitiga sama kaki. \n";
    }
    return 0;
}
