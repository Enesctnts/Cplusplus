#include<iostream>
using namespace std;

int main()
{
    double Alan,Cevre,r;
    const double Pi=3.14;

    cout<<"Dairenin Yaricapini Giriniz: ";
    cin>>r; 
    cout<<endl;

    Alan=r*r*Pi;
    Cevre=2*r*Pi;

    cout<<"Dairenin Alani: "<<Alan<<endl<<"Dairenin Cevresi: "<<Cevre<<endl;

    system("pause");
    return 0;

}