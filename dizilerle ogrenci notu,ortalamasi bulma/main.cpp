#include<iostream>
#define SATIR 3
#define SUTUN 3
using namespace std;
void diziyiyazdir(int dizi[][SUTUN], size_t satir, size_t sutun,int ort[],size_t boyut)
{
    cout<<"\n"<<" Ogrenci Bilgi Sistemi \n\n";
    for (int i = 0; i < satir; i++)
    { 
        
       cout << "Numara: "<<dizi[i][0] << "\nVize Notu: " << dizi[i][1] << "\nFinal Notu: " << dizi[i][2] <<"\nOrtalamasi: " << ort[i] << endl;  
    
    }
}

int main()
{

    int dizi[SATIR][SUTUN];
    int ort[SATIR];

    for (int i = 0; i <SATIR; i++)
    {
        cout<< i+1 <<". Ogrencinin Not Giris Bilgileri\n";
        for (int j = 0; j < SUTUN; j++)
        {
            if (j==0)
            {
                cout<< i+1 << ". Ogrencinin Numarasi: "; 
                cin>>dizi[i][j];     
            }
            else if (j==1)
            {
                cout<< i+1 << ". Ogrencinin Vize Notu: ";  
                cin>> dizi[i][j];
            }
            else
            {
                cout<< i+1 << ". Ogrencinin Final Notu: "; 
                cin>>dizi[i][j];  
            }      
        }
        system("cls");
        ort[i]=(dizi[i][1]*(0.4))+(dizi[i][2])*(0.6);
    }
    
   
    diziyiyazdir(dizi,SATIR,SUTUN,ort,SATIR);
    
    
    system("pause");
    return 0;
}
