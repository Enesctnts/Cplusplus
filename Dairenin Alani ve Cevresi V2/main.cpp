#include<iostream>
using namespace std;

int main()
{
    double alan,cevre,r;
    const double Pi=3.14;
    int sayigir;
    sayigir:
    cout<<"Yaricapi giriniz: ";cin>>r;
    cout<<endl;

    if (0<r)
    {
        alan=Pi*r*r;
        cevre=2*Pi*r;
        cout<<"Alan: "<< alan << "\nCevre: " << cevre << endl;
    }
    else
    {
        cout<<"Yaricap negatif olamaz." << endl;
        goto sayigir;
    }
    system("pause");
    return 0;
}