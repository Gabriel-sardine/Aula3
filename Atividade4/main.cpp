#include <iostream>
using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

void lerMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    cout << "Digite os valores da matriz:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matriz[i][j];
        }
    }
}

void matrizTransposta(int matriz[MAX_M][MAX_N], int M, int N) {
    cout << "Matriz transposta:" << endl;
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < M; ++i) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplicarPorK(int matriz[MAX_M][MAX_N], int M, int N, int K) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            matriz[i][j] *= K;
        }
    }
}

void somarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int M, int N) {
    cout << "Matriz resultante da adicao:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz1[i][j] + matriz2[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int M, N, K;
    cout << "Digite o numero de linhas (M): ";
    cin >> M;
    cout << "Digite o numero de colunas (N): ";
    cin >> N;
    if( M > 20){
        cout << "erro numero de linhas nao pode ser maior que vinte";
        return 0;
    }
     if( N > 25){
        cout << "erro numero de colunas nao pode ser maior que vinte";
        return 0;
    }

    int matriz[MAX_M][MAX_N];
    lerMatriz(matriz, M, N);

    matrizTransposta(matriz, M, N);

    cout << "Digite o fator K para multiplicacao: ";
    cin >> K;
    multiplicarPorK(matriz, M, N, K);

        cout << "Matriz resultante da multiplicacao por K:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int matriz2[MAX_M][MAX_N];
    cout << "Digite os valores da segunda matriz:" << endl;
    lerMatriz(matriz2, M, N);



    somarMatrizes(matriz, matriz2, M, N);

    return 0;
}
