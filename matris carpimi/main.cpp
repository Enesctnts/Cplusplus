#include<iostream>
using namespace std;
#define SATIR 2
#define SUTUN 2
void matris1(int dizi1[][SUTUN],size_t satir,size_t sutun)
{
    cout<< "1. Matrisin Degerlerini Giriniz\n";
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            cout << "dizi1 " << (i) << (j) << ": ";
            cin  >> dizi1[i][j];
        }
    }
}
void matris2(int dizi2[][SUTUN],size_t satir,size_t sutun)
{
    cout<< "\n2. Matrisin Degerlerini Giriniz\n\n";
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            cout << "dizi2 " << (i) << (j) << ": ";
            cin>> dizi2[i][j];
        }
    }
}
void matriscarpim(int dizi1[][SUTUN],size_t satir,size_t sutun,int dizi2[][SUTUN],size_t satir1,size_t sutun2)
{
    int dizi3[SATIR][SUTUN];
    
    for (int i = 0; i < satir ; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            dizi3[i][j]= (dizi1[i][j])*(dizi2[i][j]);
        }
    }
    system("cls");
    cout<< "\nMatrislerin carpimi\n\n";
    cout<< "\t";
    for ( int i = 0; i < sutun; i++)
    {
        cout << "\t" << (i);
    }
    cout << "\n\n";
    for (int i = 0; i < satir ; i++)
    {
        cout << "\t" << (i);
        for (int j = 0; j < sutun; j++)
        {
            cout << "\t" << dizi3[i][j];
        }
        cout<< endl<<endl;
    }
    cout<<endl;
}
int main()
{
    int dizi1[SATIR][SUTUN];
    int dizi2[SATIR][SUTUN];
    matris1(dizi1,SATIR,SUTUN);
    matris2(dizi2,SATIR,SUTUN);
    matriscarpim(dizi1,SATIR,SUTUN,dizi2,SATIR,SUTUN);

    system("pause");
    return 0;

}