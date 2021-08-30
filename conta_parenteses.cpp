#include<iostream>
#include<string>

using namespace std;

int main() {
    int nParentese = 0;
    string expressao;
    
    cout << "\nDigite sua expressao: ";
    cin >> expressao;
    
    for (int i = 0; i < expressao.size(); ++i) {
        if (expressao[i] == '(') ++nParentese;
        if (expressao[i] == ')') {
            --nParentese;
            if (nParentese < 0) i = expressao.size();
        }    
    }

    if (nParentese == 0) cout << "Expressao correta\n" << endl;
    else cout << "Expressao incorreta\n" << endl;
}
