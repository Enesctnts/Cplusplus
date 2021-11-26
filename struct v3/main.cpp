#include<iostream>
using namespace std;
#define BOYUT 3

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
    int i=0;
    system("cls");
    
    int min_not   = ogr1[0].ort; 
    int max_not   = ogr1[0].ort; 
    string min_ad = ogr1[0].ad; 
    string max_ad = ogr1[0].ad;
    string max_soyad = ogr1[0].soyad; 
    string min_soyad = ogr1[0].soyad;
    
    for(int i = 1; i < boyut; i++) 
    { 
        if(ogr1[i].ort > max_not)
        { 
            max_not   = ogr1[i].ort;
            max_ad    = ogr1[i].ad;
            max_soyad = ogr1[i].soyad;  
        } 
        if(ogr1[i].ort < min_not) 
        {
            min_not   = ogr1[i].ort;
            min_ad    = ogr1[i].ad;
            min_soyad = ogr1[i].soyad;
        } 
    } 
        cout<<"Ortalamasi En Yuksek Ogrenci "<< max_ad << " " << max_soyad <<" 'dir."<<endl;
        cout<<"Ortalamasi: "<< max_not << endl;
        cout<<"\nOrtalamasi En Dusuk Ogrenci "<< min_ad << " " << min_soyad <<" 'dir."<<endl;
        cout<<"Ortalamasi: "<< min_not << endl;
}
int main()
{
    insan ogrenciler[BOYUT];
    Verigir(ogrenciler,BOYUT);
    Veriyiyazdir(ogrenciler,BOYUT);

    system("pause");
    return 0;

}

