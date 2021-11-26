#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int dizi[6];

    for (int i = 0; i < 6 ; i++)
    {
       dizi[i]=0+rand()%10;
    }
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i!=j)
            {
                if (dizi[i]==dizi[j])
                {
                    dizi[j]=0+rand()%10;
                }
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<dizi[i]<< " ";
    }

    system("pause");
    return 0;
    
}