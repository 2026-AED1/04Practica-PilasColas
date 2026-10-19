#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

vector<int> solucion(const vector<int>& valores) {
    // TODO
    throw logic_error("TODO");
}

int main() {
    int n;
    cin >> n;
    vector<int> valores(n);
    for (int& valor : valores) cin >> valor;

    const vector<int> resultado = solucion(valores);
    for (size_t i = 0; i < resultado.size(); ++i) {
        if (i) cout << ' ';
        cout << resultado[i];
    }
    cout << "\nO(?) O(?)\n"; // TODO: sustituye por la complejidad calculada.
}
