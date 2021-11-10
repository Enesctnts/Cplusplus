#include<iostream>
using namespace std;

void kiloboy(const double kilo, const double boy)
{
    double vci1,vci2;
    vci1= (boy-(kilo+100));
    vci2= ((kilo+100)-boy);
    if (0<kilo && 0<boy)
    {
        if ((kilo+100)<boy)
        {
            if (10<vci1)
            {
                cout<<"Vucut indeksiniz: "<<vci1<<endl;
                cout<<"Daha iyi bir fizik icin "<<vci1-10<<" kg daha vermeniz gerekiyor. "<<endl;
            }
            else 
            {
                cout<<"Vucut indeksiniz: "<<vci1<<endl;
                cout<<"Vucut indeksiniz gayet iyi, Fizigini koruyunuz. "<<endl;
            } 
        }
        else
        {
            if (10<vci2)
            {
                cout<<"Vucut indeksiniz: "<<vci2<<endl;
                cout<<"Daha iyi bir fizik icin "<<vci2-10<<" kg daha vermeniz gerekiyor. "<<endl;
            }
            else
            {
                cout<<"Vucut indeksiniz: "<<vci2<<endl;
                cout<<"Vucut indeksiniz gayet iyi, Fizigini koruyunuz. "<<endl;
            }
            
        }
    }
    else
    {
        cout<<"Yanlis Girdiniz. Tekrar Deneyiniz.."<<endl;

    }
    
}
int main()
{
    double kilo,boy;

    cout<<"Kilonuzu(kg) ve Boyunuzu(cm) bosluk birakarak giriniz: "; cin>>kilo>>boy;

    kiloboy(kilo,boy);

    system("pause");
    return 0;
}