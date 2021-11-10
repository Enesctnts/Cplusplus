#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cout<<"x degerini giriniz: "; 
    cin>>x;
    cout<<endl;

    y=(x<10) ? 0 : 10;

    cout<<"y degeri: "<<y<<endl; // x 10 dan küçük ise y=0 aksi taktirde y=10 

    system("pause");
    return 0;
}