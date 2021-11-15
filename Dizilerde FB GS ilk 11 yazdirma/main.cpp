#include<iostream>
#include<cstdio>
#define BOYUT 2

using namespace std;

void futbolcular1(string isim[],int boyut,string takim[],int x)
{
    cout<<endl<< *takim << " takiminin ilk 11'ini giriniz\n"<<endl;
    for(int i=0; i < boyut; i++)
    {
        cout<< *takim << " takiminin " << i+1 << ". oyuncusunu giriniz: ";
        getline(cin,isim[i]);
        system("cls");
    }
}
void futbolcular2(string isim[], int boyut,string takim[],int x)
{
    cout<<endl<< *takim << " takiminin ilk 11'ini giriniz\n"<<endl;
    for (int i = 0; i < boyut; i++)
    {
        cout<< *takim << " takiminin " <<  i+1 << ". oyuncusunu giriniz: ";
        getline(cin,isim[i]);
        system("cls");
    }
    
}
void futbolcuyazdir(string isim[] ,int boyut,string takim[],int x)
{   
    cout<<endl<< *takim << " takiminin ilk 11\n"<<endl;
    for (int i = 0; i < boyut; i++)
    {
        cout<< i+1 << ".ci futbolcu: " << isim[i] << endl;
    }
    
}
int main()
{
    string Takim1[BOYUT];
    string Takim2[BOYUT];
    string takimad1[]={"FENERBAHCE"};
    string takimad2[]={"GALATASARAY"};

    futbolcular1(Takim1,BOYUT,takimad1,12);
    futbolcular2(Takim2,BOYUT,takimad2,12);

    futbolcuyazdir(Takim1,BOYUT,takimad1,12);
    futbolcuyazdir(Takim2,BOYUT,takimad2,12);

    cout<<endl;
    system("pause");
    return 0;

    
}