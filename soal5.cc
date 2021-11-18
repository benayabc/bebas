#include <iostream>

using namespace std;

int main()
{
    int angkapertama, angkakedua, penjumlahan, pengurangan, perkalian, pembagian;
    cout << "Masukkan Angka Pertama : ";
    cin >> angkapertama;
    cout << "Masukkan Angka Kedua   : ";
    cin >> angkakedua;
    penjumlahan = angkapertama + angkakedua;
    pengurangan = angkapertama - angkakedua;
    perkalian = angkapertama * angkakedua;
    pembagian = angkapertama / angkakedua;
    cout << "Penjumlahan    : " << penjumlahan << endl;
    cout << "Pengurangan    : " << pengurangan << endl;
    cout << "Perkalian      : " << perkalian << endl;
    cout << "Pembagian      : " << pembagian << endl;

    return 0;
}