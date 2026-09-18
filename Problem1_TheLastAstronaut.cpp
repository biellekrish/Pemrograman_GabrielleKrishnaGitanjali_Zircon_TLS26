#include <iostream>

using namespace std;

void solveLastAstronaut(int N, int K) {
    int astronaut[100]; 

    for (int i = 0; i < N; i++) {
        astronaut[i] = i + 1;
    }

    int jumlah = N;
    int posisi = 0;

    cout << "Urutan eliminasi: ";

    while (jumlah > 1) {
        posisi = (posisi + K - 1) % jumlah;

        int tereliminasi = astronaut[posisi];
        cout << tereliminasi;

        if (jumlah > 2) {
            cout << " ";
        }

        for (int i = posisi; i < jumlah - 1; i++) {
            astronaut[i] = astronaut[i + 1];
        }

        jumlah--; 

        if (tereliminasi % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1;
        }

        if (K < 2) {
            K = 2;
        }
    }

    cout << "\nAstronot terakhir: " << astronaut[0] << "\n";
}

int main() {
    int N, K;

    cout << "Masukkan jumlah astronot: ";
    cin >> N;
    cout << "Masukkan nilai K: ";
    cin >> K;

    solveLastAstronaut(N, K);

    return 0;
}