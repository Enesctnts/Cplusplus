#include<iostream>
using namespace std;

int main()
{
    int secim,secimyap;
    secimyap:
    cout<<"Hangi gunu ariyorsunuz: ";
    cin>>secim;

    switch (secim)
    {
    case 1:
            cout<<"Pazartesi"<<endl;
        break;
    case 2: 
            cout<<"Sali"<<endl;
        break;
    case 3:
            cout<<"Carsamba"<<endl;
        break;
    case 4:
            cout<<"Persembe"<<endl;
        break;
    case 5:
            cout<<"Cuma"<<endl;
        break;
    case 6:
            cout<<"Cumartesi"<<endl;
        break;
    case 7:
            cout<<"Pazar"<<endl;
        break;
    default:
            system("cls");
            cout<<"\nHatali Tuslama Yaptiniz..\nTekrar Deneyiniz.\n"<<endl;
            goto secimyap;
        break;
    }

    system("pause");
    return 0;
}