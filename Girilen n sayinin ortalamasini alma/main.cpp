#include<iostream>
using namespace std;

int main()
{
    int n,toplam=0;
    double ort=0;

    cout<<"Bir sayi giriniz: "; cin>>n;
    cout<<endl;

    for (int i = 1; i <= n ; i++)
    {
        toplam+=i;        
    }
    ort= toplam/(double)n;
    cout<<"1'den "<< n <<" kadar olan sayilarin ortalamasi: "<< ort <<endl;

    system("pause");
    return 0;
}