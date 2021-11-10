#include<iostream>
using namespace std;

int main()
{
    int x,y,toplam=0,cifttoplam=0,tektoplam=0;

    cout<<"1.Sayiyi Giriniz: "; cin>>x;
    cout<<endl<<"2.Sayiyi Giriniz: "; cin>>y;
    cout<<"\n\n";

    cout<< endl << x <<" ile "<< y <<" arasindaki  sayilarin "<< endl<<endl;
    for (int i=x+1; i < y; i++)
    {
        toplam+=i;
        cout<<i<<endl;
    }
    cout<< endl << x <<" ile "<< y <<" arasindaki cift sayilar "<< endl<<endl;
    for (int i=x+1; i < y; i++)
    {
        if (i%2==0)
        {
            cifttoplam+=i;
            cout<<i<<endl;
        }
    }
    cout<< endl << x <<" ile "<< y <<" arasindaki tek sayilar "<< endl<<endl;
    for (int i=x+1; i < y; i++)
    {
        if(i&2!=0)
        {
            tektoplam+=i;
            cout<<i<<endl;
        }
    }
    cout<< endl << x <<" ile "<< y <<" arasindaki sayilarin toplami= "     << toplam<<endl;
    cout<< endl << x <<" ile "<< y <<" arasindaki cift sayilarin toplami= "<< cifttoplam<<endl;
    cout<< endl << x <<" ile "<< y <<" arasindaki teksayilarin toplami= "  << tektoplam<<endl;

    system("pause");
    return 0;
}