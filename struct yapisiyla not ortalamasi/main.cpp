#include<iostream>
using namespace std;
#define BOYUT 10

typedef struct
{
    string ad;
    string soyad;
    unsigned int no;
    unsigned int vize;
    unsigned int final;
    double ort;

}insan;

int main()
{
    insan ogrenciler[BOYUT];
    
    for (int i = 0; i < BOYUT ; i++)
    {
        insan a;
        cout<< i+1 << ". ogrencinin adini giriniz: ";
        cin>>a.ad;

        cout<< "Soyadini giriniz: ";
        cin>>a.soyad;

        cout<<"Numarasini giriniz: ";
        cin>>a.no;

        cout<< "Vize notunu giriniz: ";
        cin>>a.vize;

        cout<< "Final notunu giriniz: ";
        cin>>a.final;

        a.ort= (a.vize*0.40) + (a.final*0.60);
        cout<<endl;
        ogrenciler[i]=a;
    }

    system("cls");
    
    for (int i = 0; i < BOYUT; i++)
    {
        cout<< "Adi ve Soyadi: "<< ogrenciler[i].ad << " " << ogrenciler[i].soyad <<endl;
        cout<< "Numarasi: "     << ogrenciler[i].no      <<endl;
        cout<< "Vize notu: "    << ogrenciler[i].vize    <<endl;
        cout<< "Final notu: "   << ogrenciler[i].final   <<endl;
        cout<< "Ortalamasi: "   << ogrenciler[i].ort     <<endl<<endl;

        if ( 50 < ogrenciler[i].ort )
        {
            cout<< ogrenciler[i].ad << " " << ogrenciler[i].soyad << " isimli ogrenci dersten gecmistir.\n"<<endl;
        }
        else
        {
            cout<< ogrenciler[i].ad << " " << ogrenciler[i].soyad << " isimli ogrenci dersten kalmistir.\n"<<endl; 
        }    
    }
    
    system("pause");
    return 0;
    
    
}
