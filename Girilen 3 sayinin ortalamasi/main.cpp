#include<iostream>
using namespace std;

int main()
{
    double sayi1,sayi2,sayi3,sonuc;
    cout<<"Toplamak istediginiz sayilari bosluk birakarak giriniz: ";
    cin>>sayi1>>sayi2>>sayi3;

    sonuc= (sayi1+sayi2+sayi3)/3;

    cout<<"Sayilarin Toplami: "<<sonuc<<endl;
    system("pause");
    return 0;
}