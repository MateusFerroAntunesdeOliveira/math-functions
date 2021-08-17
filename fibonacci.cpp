#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    else return fib(n-1) + fib(n-2);
}

int main() {
    int num_posicao;

    cout << "\n --- FIBONACCI --- \n" << endl;
    cout << "Qual numeral ordinal voce quer ver na sequencia de Fibonacci: ";
    cin >> num_posicao;

    cout << "Voce escolheu o numero " << num_posicao << " e na sequencia de Fibonacci representa o numero " << fib(num_posicao) << "\n" << endl;
    return 0;
}
