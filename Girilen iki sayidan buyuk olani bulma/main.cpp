#include<iostream>
using namespace std;

int main()
{
    int sayi1,sayi2;

    cout<<"1. Sayiyi giriniz: ";
    cin>>sayi1;
    cout<<endl<<"2. Sayiyi giriniz: ";
    cin>>sayi2;
    cout<<endl;

    if (sayi1<sayi2)
    {
        cout<<"Buyuk olan sayi: "<< sayi2 << endl << "Kucuk olan sayi: " << sayi1 << endl;
    }
    else if (sayi1=sayi2)
    {
        cout<< "Sayi1= " << sayi1 << " , Sayi2= " << sayi2 << "  sayilar birbirine esittir.\n"<<endl; 
    }
    else
    {
        cout<<"Buyuk olan sayi: " << sayi1 << endl << "Kucuk olan sayi: " << sayi2 << endl;
    }
    system("pause");
    return 0;
}