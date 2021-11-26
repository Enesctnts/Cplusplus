#include<iostream>
#include<time.h>
using namespace std;

void mix(int n)
{
    int myArray[7]={0};//7 boyut verdim çünki son eleman bitiş elamanı. dizi[6] yı kullanabilmek için. Ve tüm değerler sıfırda
    int loop=0,i=0;

    while((i<=6) && (loop<n))
    {
        i=1+rand()%6;
        switch(i)//zarın sayısına göre sayaçlarımızı artıracağız
        {
            case 1:myArray[1]++; break;//sayac[1] zarın 1 geldiği sayıyı depoluyor.
            case 2:myArray[2]++; break;              
            case 3:myArray[3]++; break;              
            case 4:myArray[4]++; break;
            case 5:myArray[5]++; break;
            case 6:myArray[6]++; break;

            default: loop--;  break;
        }

        loop++;//zarımızı attık. atış sayımızı 1 artırdık
     }
     cout<<"\n";
     for(i=1;i<=6;i++)
     {
        cout<< i <<"'den "<< myArray[i] << " tane var\n";
     }
     cout<< endl << loop << " kez zar atilmistir\n";
}

int main()
{
    int n;
    cout<<"Kac kere zar atilsin = ";
    cin>>n;

    mix(n);

    srand(time(NULL));
    system("pause");
    return 0;
}

