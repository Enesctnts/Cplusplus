#include<iostream>
using namespace std;
#define BOYUT 2

typedef struct
{
    string ad;
    string soyad;
    unsigned int no;
    unsigned int vize;
    unsigned int final;
    double ort;

}insan;
void Verigir(insan ogr1[],int boyut)
{ 
  for (int i = 0; i < boyut; i++)
    {
        cout<< i+1 <<". Ogrencinin adini giriniz: ";
        cin>>ogr1[i].ad;

        cout<< i+1 <<". Ogrencinin soyadini giriniz: ";
        cin>>ogr1[i].soyad;

        cout<< i+1 <<". Ogrencinin numarasini giriniz: ";
        cin>>ogr1[i].no;

        cout<< i+1 <<". Ogrencinin Vize notunu giriniz: ";
        cin>>ogr1[i].vize;

        cout<< i+1 <<". Ogrencinin Final notunu giriniz: ";
        cin>>ogr1[i].final;

        ogr1[i].ort= (ogr1[i].vize*0.40) + (ogr1[i].final*0.60);

        cout<<endl;
    }
}
void Veriyiyazdir(insan ogr1[],int boyut)
{
    system("cls");
    for (int i = 0; i < boyut; i++)
    {
        cout<< i+1 <<". Ogrencinin Bilgileri \n\n";
        cout<< "Adi ve Soyadi: "<< ogr1[i].ad << " " << ogr1[i].soyad <<endl;
        cout<< "Numarasi: "     << ogr1[i].no      <<endl;
        cout<< "Vize notu: "    << ogr1[i].vize    <<endl;
        cout<< "Final notu: "   << ogr1[i].final   <<endl;
        cout<< "Ortalamasi: "   << ogr1[i].ort     <<endl<<endl;

        if ( 50 < ogr1[i].ort )
        {
            cout<< ogr1[i].ad << " " << ogr1[i].soyad << " isimli ogrenci dersten gecmistir.\n"<<endl;
        }
        else
        {
            cout<< ogr1[i].ad << " " << ogr1[i].soyad <<" isimli ogrenci dersten kalmistir.\n"<<endl; 
        } 
        cout<<endl;
    }
    
}
int main()
{
    insan ogrenciler[BOYUT];
    Verigir(ogrenciler,BOYUT);
    Veriyiyazdir(ogrenciler,BOYUT);
    system("pause");
    return 0;
    
    
}
