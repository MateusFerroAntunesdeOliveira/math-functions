#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class MinhaString : public string {
public:
    using string::string;
    void inverte() {}
};

int main() {
    const int TAM = 100;
    char digitenome[TAM];
    string s2;

    cout << "\nDigite um nome ou frase para inverte-la" << endl;
    cout << ">> ";
    cin.getline(digitenome, TAM);

    MinhaString s(digitenome);
    s.inverte();
    s2 = s;
    string inv = s;
    int tam = s.size();

    for (int i = 0; i < tam; ++i) {
        inv [i] = s[tam-1-i];
    }

    s2 = s + " <-> " + inv;
    cout << s2 << "\n" << endl;
}
