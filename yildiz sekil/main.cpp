#include <iostream>
using namespace std;

int main ()
{
	int i , k , giris;
	int yildiz , bosluk ;

	cout << "Bir sayi giriniz :";
	cin  >> giris;
	cout << endl;

	yildiz = 2;
	bosluk = giris + 14;

	for (k = 1; k <= giris ; k++ )
	{
      for (i=0; i < bosluk; i++ )
		{	
	     	cout << " ";
	    }
	 
	  for (i=0; i < yildiz; i++ )
	  {
	  	if(i == 0)
	  		cout << "/";  		
		else if(i == yildiz -1)
		    cout << "\\" ; 
	    else
	    	cout << "*";
	   }
      	cout << "\n";
  	
      	bosluk --   ;
     	yildiz += 2 ;
 
 	}
 	
	  
	  yildiz -= 2 ;
 	  bosluk = 15  ; 
 
 	  for (k = 1; k <= giris ; k++ ){
      for (i=0; i < bosluk; i++ ){	
	     	cout  << " ";
	   }
	  for (i=0; i < yildiz; i++ ){
	  	if(i == 0)
	  		cout << "\\";  		
		else if(i == yildiz -1)
		    cout  << "/"; 
	    else
	    	cout  << "*";
	   }
      	cout << "\n";
      	bosluk ++   ;
     	yildiz -= 2 ;
 	}
 	cout << endl;
    system("pause");
 	return 0;
}