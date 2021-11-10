#include<iostream>
using namespace std;

int main()
{
    int sayigir,sayi,n,top=0,sayac=0;
    
    cout<<"Kac sayi girmek istiyorsunuz: ";
    cin>>n;
    cout<<endl;

    sayigir:

    sayac++;
    top+=sayac;
    if (sayac<n)
    {
        goto sayigir;
    }

    cout<<"1'den " << n <<" kadar olan sayilarin toplami= "<<top<<endl; 
    
    system("pause");
    return 0;
}