#include<iostream>
using namespace std;

int main()
{
    int kisa,uzun;
    double Alan,Cevre;

    cout<<"Dikdortgenin Kisa Kenarini Giriniz: "; cin>>kisa;
    cout<<endl<<"Dikdortgenin Uzun Kenarini Giriniz: ";cin>>uzun;

    Alan=kisa*uzun;
    Cevre=2*(kisa+uzun);
    cout<<"Dikdortgen Alani: "<<Alan<<endl<<"Dikdortgen Cevresi: "<<Cevre<<endl;

    system("pause");
    return 0;
}
