#include<iostream>
using namespace std;

int main()
{
    int n,sayac=0,toplam=0,sayigir;
    
    cout<<"Kac sayi girmek istiyorsunuz: ";
    cin>>n;
    cout<<endl;

    sayigir:

    sayac+=1;

    if (sayac<=n)
    {
        cout<<"Sayac Degeri: " << sayac << endl;
        goto sayigir;
    }
    cout<<endl;
    system("pause");
    return 0;
    


}