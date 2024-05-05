// 1. int angka; , string nama; , double angka;
// 2. contoh fungsi :
//    void input(){
//    Kode pemrograman
//    } 
//    contoh prosedur :
//    int main(){
//    kode pemrograman
//    }
// 3. int angka;
//    angka = 11;
//    for (int i = 0; i < angka; i++){
//      cout << i << endl;
//    }
// 4. int angka;
//    cout << "Masukkan angka ";
//    cin >> angka;
//    if(angka>7){
//      cout << "Angka besar";
//    }else{
//      cout << "Angka kecil";
//    }
// 5. struct mahasiswa{
//    string nim;
//    string nama;
//    string alamat;
//    int umur;
//    }
// 6. 
#include <iostream>
using namespace std;
int main(){
    int polutan;
    int nilaisensor;
    string lokasi;
    string status;
    cout << "Masukkan Nama Kota: ";
    cin >> lokasi;
    cout << "Tingkat polutan: ";
    cin >> polutan;
    cout << "Nilai sensor: ";
    cin >> nilaisensor;
    if(polutan<=75){
        cout << "Sehat, ";
    }else{
        cout << "Tidak Sehat, ";
    }
    if (nilaisensor<=45){
        cout << "Sehat "<< endl;
    }else {
        cout << "Tidak Sehat " << endl;
    }
}