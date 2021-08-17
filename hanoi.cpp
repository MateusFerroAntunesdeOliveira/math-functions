#include <iostream>

using namespace std;

void hanoi(int N, char torre_orig, char torre_dest, char torre_aux) {
    if (N == 1) {
        //-> Se número de discos == 1, mova disco 1 de A pra C
        cout << "Mova disco " << N << " -> " << torre_orig << " para " << torre_dest << endl;
    } else {
        //-> Passo 1: mover N-1 discos de torre origem -> torre auxiliar
        //-> Passo 2: mover o disco N de torre origem -> torre destino
        //-> Passo 3: mover N-1 discos de torre auxiliar -> torre destino
        hanoi(N-1, torre_orig, torre_aux, torre_dest);
        cout << "Mova disco " << N << " -> " << torre_orig << " para " << torre_dest << endl;
        hanoi(N-1, torre_aux, torre_dest, torre_orig);
    }
}

int main() {
    hanoi(3,'A','C','B');
    return 0;
}