/*
    Program Genap Ganjil
    Ket : Program untuk mengecek bilangan genap atau ganjil
    By  : Yudha Rizqia Grafer
    Tgl : 12 Oktober 2022

*/#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;
    string hasil;

    //Algoritma
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    hasil = ( bilangan % 2 == 0 )? "Bilangan Genap" : "Bilangan Ganjil";
    cout << hasil;
    return 0;
}
