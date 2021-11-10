#include<iostream>
using namespace std;

int main()
{
    int sayi;

    cout<<"Bir Sayi Giriniz: "; cin>>sayi;
    cout<<"\n";

    if (sayi<=10)
    {
        cout<<"HAVA SOGUK"<<endl;
    }
    else if (10<sayi && sayi<=15)
    {
        cout<<"Hava ILIK"<<endl;
    }
    else
        cout<<"HAVA SICAK"<<endl;
    
    system("pause");
    return 0;
}