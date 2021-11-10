#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

void kelimeuzunlugu(string x)
{
    cout<< x << " kelimesinin uzunlugu: "<< x.size() << endl;
}
int main()
{
    string x;
    cout<<"Kelimeyi Giriniz: "; 
    getline(cin,x);
    cout<<endl;

    kelimeuzunlugu(x);

    system("pause");
    return 0;


}