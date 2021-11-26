#include<iostream>
using namespace std;

int fib(int N)
{
    if ( N==0 || N==1)
    {
        return 1;
    }
    else
    {
        return fib(N-1)+fib(N-2);
    }
}
int main()
{
    int n;
    cout << "n sayisini giriniz: "; 
    cin >> n;
    cout << endl;
    cout<< fib(n) << endl;

    system("pause");
    return 0;
}