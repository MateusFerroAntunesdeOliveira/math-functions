#include <iostream>

using namespace std;

int mdc(int u, int v) {
    if (u == v) return u;
    else {
        if (u < v) return mdc(u, v-u);
        else return mdc(v, u-v);
    }
}

int main() {
    int first_num, sec_num;

    cout << "\n --- CALCULO MDC --- \n" << endl;
    cout << "Digite o primeiro numero: ";
    cin >> first_num;
    cout << "Digite o segundo numero: ";
    cin >> sec_num;
    
    int res = mdc(first_num, sec_num);
    
    cout << "\nMDC entre " << first_num << " e " << sec_num << " = " << res << "\n" << endl;
    return 0;
}
