#include<iostream>
using namespace std;

int main()
{
    int kalan,onluk,i=1,ikili=0;

    cout<<"onluk sayiyi giriniz: "; 
    cin>>onluk;

    while (onluk>0)
    {
        kalan = onluk%2;
        ikili = ikili+(i*kalan);
        onluk = onluk/2;
        i     = i*10;
    }
    cout<< ikili << endl;
    system("pause");
    return 0;
    
}