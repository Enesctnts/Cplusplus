#include<iostream>
using namespace std;

int main()
{
    int sayi,kare,sayigir;
    sayigir:
    cout<<"Sayiyi Giriniz: "; 
    cin>>sayi;
    cout<<endl;

    if (0<sayi)
    {
        kare=sayi*sayi;
        cout<<"Pozitif Sayinin Karesi= "<<kare<<endl;
    }
    else 
    {
        cout<<"Girdiginiz Sayi Pozitif Degildir.\n"<<endl;
        goto sayigir; 
    }
    
    system("pause");
    return 0;
    
}