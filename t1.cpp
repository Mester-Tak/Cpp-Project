//بخش پذیری
#include <iostream>
using namespace std;
main(){


int a,b;
float c;
string d;

line11:
cout<<"please enter a:";
cin>>a;
   if (a>0)
   {
l16:cout<<"please enter b:";
    cin>>b;
    goto line25;
   }
    else 
    cout<<"please enter larger then '0'"<<endl<<endl;
    goto line11;
    
    
line25:    
c=(a%b); 

if (c==0)
{
    cout<<"Bakhsh pazir ast ^_^"<<'\a'<<endl;
}
    else
    cout<<"Bakhsh pazir nist :\\"<<'\a'<<endl;
     
    return 0;
}
