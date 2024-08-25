#include <iostream>

using namespace std;

int conversoa(int idade,int &dia,int &mes,int &ano){
        ano = idade /360;
        mes = (idade % 360) / 30;
        dia = idade % 30;
}



int main()
{
    int idade, dia, ano , mes;
    cout << "Digite sua idade em dias: ";
    cin >> idade;
    ano = conversoa(idade,dia,mes,ano);
    mes = conversoa(idade,dia,mes,ano);
    dia = conversoa(idade,dia,mes,ano);
    cout << "sua idade e " << ano <<" anos " << mes << " meses e " << dia <<" dias";


    return 0;
}
