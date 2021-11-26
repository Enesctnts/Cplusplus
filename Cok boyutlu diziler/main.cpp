#include <iostream>
#include <ctime>
using namespace std;
#define SATIR 4
#define SUTUN 6

// Çok boyutlu diziler

void diziyi_yazdir(const int dizi[][SUTUN], size_t satir, size_t sutun);
int main()
{

    srand(time(NULL));
    
    int dizi[SATIR][SUTUN] =
                        {   
                            {10,15,16,10,51,60},
                            {20,21,25,40,70,80},
                            {70,24,68,100,47,55},
                            {12,20,30,65,78,40} 
                        };
    int i,j = 0;

    diziyi_yazdir(dizi,SATIR,SUTUN);
    
    system("pause");
	return 0;

}

void diziyi_yazdir(const int dizi[][SUTUN], size_t satir, size_t sutun)
{
    
    cout << "\t" ;
    for(int j=0;j<sutun;j++){
        cout<< "\t" << j ;
    }
    cout<<"\n\n";

    for(int i=0;i<satir;i++){
        cout<< "\t" <<i;
        for(int j=0;j<sutun;j++){
            cout << "\t" << dizi[i][j];
        }
        puts("");
    }
    puts("");
}
