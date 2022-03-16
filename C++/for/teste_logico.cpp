//to Dev C++ 5.11
//by Claudia Werlich
#include <iostream> 
using namespace std; 
int a,b,c=0,i=0;
main()
{ 
   setlocale(LC_ALL,"Portuguese"); 
   cout<<"\n\n\t ****  Programa Valores *** \n\n";
   cout<< "\n Digite um valor para a:  ";
   cin>>a;
   b=a*a;
   do
   {
    b=b-c;
    if (b<a)
    {
    	//break;
    }
    else
    {
    	c++;
    	cout<<"  "<<c;
	}
   }while (b>a);
   
   cout<<"\n "<<c;
   
   cout<<"\n\n\n\n\n"; 
}
