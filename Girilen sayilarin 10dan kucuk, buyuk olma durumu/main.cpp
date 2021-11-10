#include<iostream>
using namespace std;

int main()
{
    int sayi,esit=0,buyuk=0,kucuk=0;

    cout<<"Kac sayi girmek istiyorsunuz: ";
    cin>>sayi;
    cout<<"\n";

    int dizi[sayi];
    for (int i = 0; i < sayi; i++)
    {   
        cout<<i+1<<".sayi: ";
        cin>>dizi[i];
    }

    cout<<"\n-----10'dan Buyuk Olan Sayilar-----\n\n";

    for (int i = 0; i < sayi; i++)
    {
        if (10<dizi[i])
        {   
            buyuk++;
            cout<<"Girilen "<<i+1<<".Sayi: "<<dizi[i]<<endl;
        }
    }
    cout<<"\n-----10'dan Kucuk Olan Sayilar-----\n\n";
    for (int i = 0; i < sayi; i++)
    {
        if (dizi[i]<10)
        {
            kucuk++;
            cout<<"Girilen "<<i+1<<".Sayi: "<<dizi[i]<<endl;
        }
    }
    cout<<"\n-----10'a Esit Olan Sayilar-----\n\n";
    for (int i = 0; i < sayi; i++)
    {
        if (10==dizi[i])
        {
            esit++;
            cout<<"Girilen "<<i+1<<".Sayi: "<<dizi[i]<<endl;
        }
    }
    cout<<"\n\nBuyuk Sayilarin Sayisi: "<<buyuk<<endl;
    cout<<"Kucuk Sayilarin Sayisi: "<<kucuk<<endl;
    cout<<"Esit Sayilarin Sayisi: "<<esit<<endl<<endl;
    
    system("pause");
    return 0;
    
}