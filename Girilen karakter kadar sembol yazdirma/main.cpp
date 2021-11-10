#include<iostream>
using namespace std;
int main()
{
    int dizi[5],sayi;
    cout << "5 tane  1-9 arasi sayi giriniz."<< endl;
    for (int i = 0; i <5; i++)
    {
        cout<<(i+1)<<".sayi: ";
        cin >> dizi[i];
    }
    cout << "Bir karakter giriniz." << endl <<"Girilecek karekter: ";
    char karakter;
    cin >> karakter;
    cout <<"\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\t" << dizi[i]<< "\t" ;
        for (int j = 0; j < dizi[i]; j++)
        {
            cout << karakter;
        }
        cout<< endl;
    }
    cout <<"\n";
    system("pause");
    return 0;

    
}