#include<iostream>
using namespace std;

int main()
{
    const double finaloran=0.6;
    const double vizeoran=0.4;
    int final,vize;
    double ort;

    cout<<"Vize Notunuzu Giriniz: "; cin>>vize;
    cout<<"\n";
    cout<<"Final Noyunuzu Giriniz: "; cin>>final;
    cout<<"\n";

    ort=((vize*vizeoran)+(final*finaloran));

    if (ort<50)
    {
        cout<<"Dersten Kaldiniz.."<<endl;
    }
    else
        cout<<"Dersten Gectiniz.Tebrik Ederiz.."<<endl;

    system("pause");
    return 0;
}