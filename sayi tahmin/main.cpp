#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    int sayi,rassayi;
    srand(time(NULL));
    rassayi= rand()%10+1;

    do
    {
        rassayi= rand()%10+1;
        cout << "Sayiyi Giriniz: "; cin >> sayi;
        if (sayi>rassayi)
        {
            cout << "Tahmin ettiginiz sayi daha buyuk"<<endl;
            cout << "Rastgele sayi: " << rassayi <<endl ;
        }
        else if (sayi<rassayi)
        {
            cout << "Tahmin ettiginiz sayi daha kucuk" << endl;
            cout << "Rastgele sayi: " << rassayi <<endl ;
        }
        
    } while (sayi!=rassayi);
    cout << endl << "Tebrikler, Dogru Bildiniz.." << endl;

    system("pause");
    return 0;
}