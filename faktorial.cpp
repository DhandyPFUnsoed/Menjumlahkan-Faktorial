#include <iostream>
using namespace std;

int main(){
    // Deklarasi Variabel
    int hasil = 0;
    int i = 0;

    // Angka Ganjil Kurang dari 6
    while (i <= 6) {
        if (i % 2 == 1) {

            // Deklarasi Variabel
            int f = 1;
            int j = 1;

            // Menjumlahkan Faktorial
            while (j <= i){
                f = f * j;
                j++;
            } hasil = hasil + f;
        } i++;
    }
    // Hasil
    cout << hasil << endl;

    return 0;
}