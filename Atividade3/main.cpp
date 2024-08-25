#include <iostream>

using namespace std;

int Covert(int temp,int &seg,int &mim,int &hor){
    int resto;
    hor = temp / 3600;
    resto = temp % 3600;
    mim = resto / 60;
    seg = resto % 60;

}

int main()
{
    int temp, seg, mim,hor;

    cout << "Digete a hora em segundos: ";
    cin >> temp;
    hor = Covert(temp, seg, mim, hor);
    mim = Covert(temp, seg, mim, hor);
    seg = Covert(temp, seg, mim, hor);
    cout << "O horario e de " << hor << " horas " << mim <<" minutos e " << seg << " segundos ";
    return 0;
}
