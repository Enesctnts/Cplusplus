#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    char metin[100];
    int uzunluk,i;

    cout<<"Metni Giriniz: "; gets(metin);

    for (i = 0; i < 100; i++)
    {
        if (metin[i] == '\0')
        {
            break;
        }
    }
    uzunluk=i;
    cout<<"\nMetnin Tersten Yazilisi\n"<< endl;
    for (i=uzunluk-1; i>=0; i--)
    {
        cout<<metin[i];
    }
    cout<<endl;
    system("pause");
    return 0;
    
    
}