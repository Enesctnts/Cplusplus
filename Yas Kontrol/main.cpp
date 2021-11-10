#include<iostream>
using namespace std;

int main()
{
    int yas;

    cout<<"Yasinizi Giriniz: "; 
    cin>>yas;
    cout<<endl;

    if (yas<18)
        cout<<"Resit degilsiniz. Yasiniz 18 den kucuk"<<endl;
    else
        cout<<"Resitsiniz. Yasiniz 18 den buyuk"<<endl;
    
    system("pause");
    return 0;
}