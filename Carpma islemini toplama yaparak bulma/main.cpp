#include<iostream>
using namespace std;

int Carpma(int x, int y)
{
    int toplam=0;
    for (int i = 0; i < y; i++)
    {
        toplam+=x;
    }
    return toplam;
    
}
int main()
{
    int x,y;

    cout<<"Carpmak istediginiz sayilari bosluk birakarak giriniz: ";
    cin>>x>>y;

    cout<<"Girilen sayilarin carpimi= "<< Carpma(x,y) <<endl;

    system("pause");
    return 0;
}