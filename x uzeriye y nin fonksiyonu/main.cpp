#include<iostream>
using namespace std;

double ustalma(double x, const double y)
{   
    int a=2;
    for (int i = 1; i < y; i++)
    {
        x*=a;
    }
    return x;
}
int main()
{
    double x,y;

    cout<<"X degerini giriniz: "; cin>>x;
    cout<<endl<<"Y degerini giriniz: "; cin>>y;

    cout<< x << "^" << y <<" = "<< ustalma(x,y)<<endl;

    system("pause");
    return 0;

}