#include <iostream>

using namespace std;

 int convert(int  tempo,int &hora,int &mim){
     hora = tempo / 60;
    mim = tempo % 60;
 }

int main()
{
    int tempo, hora, mim;
    cout << "Minutos passados depois da meia noite: ";
    cin >> tempo;
    hora = convert(tempo,hora,mim);
    hora = convert(tempo,hora,mim);
    cout << "Se passaram " << hora <<" horas e " << mim <<" minutos desde a meia noite";
    return 0;
}
