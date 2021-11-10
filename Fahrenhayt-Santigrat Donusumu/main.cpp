#include<iostream>
using namespace  std;

int main()
{
    double f,s;
    const double oran= 1.8;

    cout<<"Fahrenhayt Degerini Giriniz: "; 
    cin>>f;
    s=(f-32)/oran;
    cout<<"Santigrat Degeri= "<<s<<endl;
    system("pause");
    return 0;
}