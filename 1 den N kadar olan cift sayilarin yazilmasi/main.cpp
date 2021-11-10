#include<iostream>
using namespace std;

int main()
{
    unsigned int n,sayac=0,sayigir;

    cout<<"Kac sayi girmek istiyorusunuz: ";
    cin>>n;
    cout<<endl;

    sayigir:
    sayac+=1;

    if (sayac<=n)
    {
        if (sayac%2==0)
        {
            cout<<sayac<<endl;
        }
        goto sayigir;
    }

    system("pause");
    return 0;

    
}