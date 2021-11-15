#include<iostream>
using namespace std;
void diziyaz(int dizi[],int n)
{
    cout<<"\nDizinin Elamanlari Yazdirilmasi\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Dizinin "<< i+1 << " elamani: "<<dizi[i]<<endl;
    }
}
void tersyaz(int dizi[],int n)
{
    cout<<"\nDizinin Elamanlarinin Tersten Yazdirilmasi\n";
    for (int i = n-1; i>=0 ;i--)
    {
        cout<<"Dizinin "<< i+1 << " elamani: "<<dizi[i]<<endl;
        
    }  

}
int main()
{
    int dizi[]={1,2,3,4,5};
    int n=sizeof(dizi)/sizeof(int);

    diziyaz(dizi,n);
    tersyaz(dizi,n);

    system("pause");
    return 0;

}