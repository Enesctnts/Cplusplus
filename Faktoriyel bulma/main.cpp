#include<iostream>
using namespace std;

int main()
{
    int fak=1,sayac=1,sayi,sayigir;

    cout<<"Faktoriyel alincak sayiyi giriniz: ";
    cin>>sayi;
    cout<<endl;

    sayigir:
    fak*=sayac;
    sayac++;

    if (sayac<=sayi)
    {
        goto sayigir;
    }
    
    cout<< sayi << "!= " << fak << endl<<endl;

    system("pause");
    return 0;

}