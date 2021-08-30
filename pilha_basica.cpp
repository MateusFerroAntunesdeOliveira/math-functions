#include <iostream>
#include <string>
#include <array>

using namespace std;
using TipoDado = int;
constexpr int MAXPILHA = 10;

class Pilha {
private:
    array<TipoDado, MAXPILHA> dados;  //-> TipoDado dados[MAXPILHA];
    int topo_;

public:
    Pilha();
    void push(TipoDado elem);
    void pop();
    TipoDado topo();
    bool vazia();
    bool cheia();
};

int main() {

    Pilha p;

    p.push(5);
    p.push(10);
    p.push(15);

    while (!p.vazia()) {
        cout << p.topo() << endl;
        p.pop();       
    }
}

Pilha::Pilha() {topo_ = -1;}

void Pilha::push(TipoDado elem) {
    if (!cheia()) {
        ++topo_;
        dados[topo_] = elem;
    } else cerr << "Pilha cheia!" << endl;
}

void Pilha::pop() {
    if (!vazia()) --topo_; 
    else cerr << "Pilha vazia!" << endl;
}

TipoDado Pilha::topo() {
    if (!vazia()) return dados[topo_];
    else {
        cerr << "Pilha vazia!" << endl;
        return -1;
    }
}

bool Pilha::vazia() {return (topo_ == -1);}

bool Pilha::cheia() {return (topo_ == MAXPILHA-1);}
