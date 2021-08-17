#include <iostream>
#include <cstring>

using namespace std;

int fatorial (int n) {
    if (n == 0) return 1;
    else return n * fatorial(n-1);
}

int main() {
    int num_fat;
    cout << "\nDigite um numero e calcularei o seu fatorial: "; 
    cin >> num_fat;
    int res = fatorial(num_fat);
    cout << "Fatorial de " << num_fat << " = " << res << "\n" << endl;
    return 0;
}
