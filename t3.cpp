//ب.م.م gcd()
#include <iostream>
#include <conio.h>
using namespace std;

main(){
    

int x1,x2,a,b;

cout<<"please enter a=";
cin>>x1;
cout<<"please enter b=";
cin>>x2;

cout<<endl<<"a="<<x1;
cout<<endl<<"b="<<x2;

//-------------------------------------------------------------------------
plan1:
if (x1==x2)
{
    cout<<endl<<"gcd(a,b)="<<x1;
    goto end;
}
//-------------------------------------------------------------------------
plan2:
if (x1>x2)
{
    
    a=x1;
    b=x2;
p2: a=(a-b);
    if (a==b)
    {
       cout<<endl<<"gcd(a,b)="<<a;
       goto end;
    }
    if (a>b)
    {
        goto p2;
    }
    if (a<b)
    {
        b=a;
        a=x2;
        goto p2; 
    }
}
//-------------------------------------------------------------------------
plan3:

if (x1<x2)
{
    cout<<endl<<endl<<"ERROR: 'b' larger than 'a' :\\"<<endl;
    cout<<"mail: therefore, thess tow are shifted..."<<endl;
    cout<<endl<<"a="<<x2<<endl<<"b="<<x1; 
    a=x2;
    b=x1;
    goto p2;    
}



end:
cout<<endl<<"END.";
return 0;
}