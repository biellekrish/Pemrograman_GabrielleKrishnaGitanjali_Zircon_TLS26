#include <iostream>

using namespace std;

int hitungPanjangString(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void enkripsiSandiAlien(char pesan[], char hasil[]) {
    int panjang = hitungPanjangString(pesan);

    hasil[0] = pesan[0];

    for (int i = 1; i < panjang; i++) {
        int nilaiSebelumnya = pesan[i - 1] - 'A' + 1;
        int nilaiSekarang = pesan[i] - 'A' + 1;

        int nilaiBaru = (nilaiSekarang - 1 + nilaiSebelumnya) % 26 + 1;

        hasil[i] = 'A' + nilaiBaru - 1;
    }

    hasil[panjang] = '\0';
}

int main() {
    char pesan[1000];
    char hasil[1000];

    cout << "Masukkan pesan: ";
    cin >> pesan;

    enkripsiSandiAlien(pesan, hasil);

    cout << "Pesan terenkripsi: " << hasil << "\n";

    return 0;
}