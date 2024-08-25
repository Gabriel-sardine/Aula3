#include <iostream>
using namespace std;

int somatorioRecursivo(int N)
{
    if (N <= 0)
    {

        cerr << "Erro: N deve ser maior que zero." << endl;
        return 0;
    }

    if (N == 1)
    {
        return 1;
    }
    else
    {
        return N + somatorioRecursivo(N - 1);
    }
}
int somatorioIterativo(int N)
{
    if (N <= 0)
    {

        cerr << "Erro: N deve ser maior que zero." << endl;
        return 0;
    }

    int soma = 0;
    for (int i = 1; i <= N; ++i)
    {
        soma += i;
    }

    return soma;
}
int main()
{
    int N;
    cout << "Digite um valor inteiro N: ";
    cin >> N;

    int resultado = somatorioRecursivo(N);
    cout << "Somatorio de 1 ate " << N << ": " << resultado << endl;
    int resultadoint = somatorioIterativo(N);
    cout << "Somatorio de 1 ate " << N << ": " << resultadoint << endl;


    return 0;
}




