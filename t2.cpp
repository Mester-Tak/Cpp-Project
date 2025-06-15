//حل معادله درجه 2
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
main(){

float a,b,c,delta,sd,x1,x2,x3;
 
cout<<"Form asly Moadele: ax^2+bx+c=0"<<'\n'<<'\n';
line10:
        cout<<"please enter a:";
        cin>>a;
        if (a==0)
        {
            cout<<endl<<"ERROR:zarib darage 2 sefre :/"<<endl<<"lotfan dobare meghdar 'a' ro vared konid"<<endl<<endl;
            goto line10;
        }
cout<<"please enter b:";
cin>>b;
cout<<"please enter c:";
cin>>c;

cout<<endl<<"Moadele Shoma= "<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;

delta=((b*b)-(4*a*c));
cout<<"DELTA="<<delta<<endl;
        if (delta<0)
        {
            cout<<endl<<endl<<"ERROR:Moadele RISHE haghighi nadara :\\"<<endl;
            cout<<"     |-----------------> DELTA IS "<<delta<<endl;
            goto line50;
        }

        if (delta==0)
        {
            x3=((-b)/(2*a));
            cout<<endl<<"X1="<<x3;
            goto line50;
        }
        
sd=sqrt(delta);


x1=((-b+sd)/(2*a));
x2=((-b-sd)/(2*a));

cout<<endl<<"X1="<<x1<<'\t'<<'\t'/*<<'\t'*/<<"X2="<<x2;


line50:

getch();
return 0;

}