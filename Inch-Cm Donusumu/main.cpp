#include<iostream>
using namespace std;

int main()
{
    const double oran=2.54;
    double inch,cm;

    cout<<"inch degerini giriniz: ";cin>>inch;
    
    cm=inch*oran;

    cout<<"Cm= "<<cm<<endl;

    system("pause");
    return 0;
}