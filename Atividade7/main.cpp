#include <iostream>
using namespace std;

namespace Fibonacci {
    int recursive(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        return recursive(x - 1) + recursive(x - 2);
    }

    int iterative(int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        int a = 0;
        int b = 1;
        int result = 0;

        for (int i = 2; i <= x; ++i) {
            result = a + b;
            a = b;
            b = result;
        }

        return result;
    }
}

int main() {
    int position;
    cout << "Informe a posicao desejada na sequencia de Fibonacci: ";
    cin >> position;

    int recursiveValue = Fibonacci::recursive(position);
    int iterativeValue = Fibonacci::iterative(position);

    cout << "Valor na posicao " << position << " (Recursivo): " << recursiveValue << endl;
    cout << "Valor na posicao " << position << " (Iterativo): " << iterativeValue << endl;

    return 0;
}
