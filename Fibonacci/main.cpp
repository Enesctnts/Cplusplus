#include<iostream>
using namespace std;

int main()
{
    int x1=1,x2=1,x3,n,s=2;

    cout << "n degerini giriniz: "; cin >> n;
    cout << endl << x1 << endl << x2 << endl;

    while ( s < n )
    {   
        x3= x1 + x2 ;
        cout << x3 << endl;
        x1=x2;
        x2=x3;
        s++;
    }
    cout << endl ;
    system("pause");
    return 0;
}