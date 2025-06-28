//ماشین حساب پیشرفته
#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;

main(){

int Entery;

HANDLE hConsole =
GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 8);
cout<<"Welcome to our program"<<endl;
cout<<"Which One Do You Need??"<<endl<<endl;
SetConsoleTextAttribute(hConsole, 7);
cout<<"[1]:Plus (+)       [2]:Minus (-)     [3]:Multiplication (*)     [4]:Divide (/)      [5]:Remainder (%)|"<<endl;
cout<<"[6]:Squrt (~)      [7]:Power (^)     [8]:Factorial (!)          [9]:Quadratic";
SetConsoleTextAttribute(hConsole, 6);
cout<<"       [10]:Help        |"<<endl;
SetConsoleTextAttribute(hConsole, 7);
cout<<"[11]:Neper (Np)    [11]:Logarithm    [13]:Derivative (f')       [14]:Integral (S)";
SetConsoleTextAttribute(hConsole, 4);
cout<<"   [0]:Exit         |"<<endl;
SetConsoleTextAttribute(hConsole, 5);
char ch='-';
for (int i = 1; i<=102 ; i++)
{
    cout<<ch;
}
ln32:
SetConsoleTextAttribute(hConsole, 2);

cout<<endl<<"Choose it:";
SetConsoleTextAttribute(hConsole, 7);
ln40:
cin>>Entery;


switch (Entery){
case (1) :{

    int n,i;
    float sum,a;

    SetConsoleTextAttribute(hConsole, 9);
    cout<<endl<<"PLUS>>"<<endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout<<"How many number you have!? : ";
    cin>>n;
    for (sum=0 , i=1 ; i<=n ; i++)
    {
        cout<<"enter number "<<i<<":";
        cin>>a;
        sum=sum+a;
    }
    cout<<"Hasel="<<sum<<endl<<endl;
    SetConsoleTextAttribute(hConsole, 3);
    cout<<"[1]:Continue                ";
    SetConsoleTextAttribute(hConsole, 6);
    cout<<"[2]:Help                   ";
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"[0]:Exit"<<endl;
    lnOR1:SetConsoleTextAttribute(hConsole, 8);
    cout<<"[ ]";
    cout<<'\b'<<'\b';
    int case1;
    cin>>case1;
    // cout<<">>>";
    switch (case1){
    case (1) : {cout<<">>>";
                SetConsoleTextAttribute(hConsole, 5);
                 cout<<"OK! Choose another one:";
                 SetConsoleTextAttribute(hConsole, 7);
                goto ln40;
               }
    case (2) : goto lnHelp;    
    case (0) : goto lnExit;
    break;
    
    default: SetConsoleTextAttribute(hConsole, 8);
            cout<<"error:";
            SetConsoleTextAttribute(hConsole, 7);
            cout<<"Please Select One of the Service Number Above"<<endl; 
            goto lnOR1;
            break;
    }
    break; 
}  
case (2) :{
    
    int o,a2;
    double MIN,a ;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<endl<<"MINUS>>"<<endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout<<"How many number you have!? : ";
    
    cin>>o;
    if (o==0)
    {
        MIN=0;
        goto ln128;
    }
    
    cout<<"enter number 1:";
    cin>>MIN;

    for ( a2 = 2; a2 <= o; a2++)
    {
        cout<<"enter number "<<a2<<":";
        cin>>a;
        MIN=MIN-a;
    }
    
    goto ln128; break;
    
    ln128:cout<<"Hasel="<<MIN<<endl<<endl;
    ln129:SetConsoleTextAttribute(hConsole, 3);
    cout<<"[1]:Continue                ";
    SetConsoleTextAttribute(hConsole, 6);
    cout<<"[2]:Help                   ";
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"[0]:Exit"<<endl;
    lnOR2:SetConsoleTextAttribute(hConsole, 8);
    cout<<"[ ]";
    cout<<'\b'<<'\b';
    int case2;
    cin>>case2;
    switch (case2){
    case (1) : {cout<<">>>";
                SetConsoleTextAttribute(hConsole, 5);
                 cout<<"OK! Choose another one:";
                 SetConsoleTextAttribute(hConsole, 7);
                goto ln40;
               }
    case (2) : goto lnHelp;break;   
    case (0) : goto lnExit;break;
    
    
    default:{SetConsoleTextAttribute(hConsole, 8);
             cout<<"error:";
             SetConsoleTextAttribute(hConsole, 7);
             cout<<"Please Select One of the Service Number Above"<<endl; 
             goto lnOR2;
             break;
            }
    break;
} 
}
case (3) :{
    
    int x,p;
    float Zarb,Z;
    
    SetConsoleTextAttribute(hConsole, 9);
    cout<<endl<<"Multiplication>>"<<endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout<<"How many number you have!? : ";
    
    cin>>p;

    if (p==0)
    Zarb=0;
    else
    for (Zarb=1 , x = 1; x<=p; x++)
    {
    cout<<"enter number "<<x<<":";
    cin>>Z;
    Zarb=Zarb*Z;
    }
    goto ln180;


    ln180:cout<<"Hasel="<<Zarb<<endl<<endl;
    ln181:SetConsoleTextAttribute(hConsole, 3);
    cout<<"[1]:Continue                ";
    SetConsoleTextAttribute(hConsole, 6);
    cout<<"[2]:Help                   ";
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"[0]:Exit"<<endl;
    lnOR3:SetConsoleTextAttribute(hConsole, 8);
    cout<<"[ ]";
    cout<<'\b'<<'\b';
    int case2;
    cin>>case2;
    switch (case2){
    case (1) : {cout<<">>>";
                SetConsoleTextAttribute(hConsole, 5);
                 cout<<"OK! Choose another one:";
                 SetConsoleTextAttribute(hConsole, 7);
                goto ln40;
               }
    case (2) : goto lnHelp;break;   
    case (0) : goto lnExit;break;
    
    
    default:{SetConsoleTextAttribute(hConsole, 8);
             cout<<"error:";
             SetConsoleTextAttribute(hConsole, 7);
             cout<<"Please Select One of the Service Number Above"<<endl; 
             goto lnOR3;
             break;
            }
    break;
    }
    }

    case (4) :{cout<<"Not ready yet";break;}

case (5) :{cout<<"Not ready yet";break;}
case (6) :{cout<<"Not ready yet";break;}
case (7) :{cout<<"Not ready yet";break;}
case (8) :{cout<<"Not ready yet";break;}
case (9) :{cout<<"Not ready yet";break;}
case (10):{lnHelp:SetConsoleTextAttribute(hConsole, 8);

            cout<<" _________________________________________________________________"<<endl<<"|";
            SetConsoleTextAttribute(hConsole, 6);                   
            cout<<"Description:";
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"                                                     |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|                                                                 |"<<endl;
            cout<<"|_________________________________________________________________|";

            SetConsoleTextAttribute(hConsole, 7);
            break;}
case (11):{cout<<"Not ready yet";break;}
case (12):{cout<<"Not ready yet";break;}
case (13):{cout<<"Not ready yet";break;}
case (14):{cout<<"Not ready yet";break;}
case (0) :{lnExit:
        string part1 = "message:\n";
        string part2 = "The operation was completed successfully.\n"
                   "The program will close in a few moments.\n"
                   "Goodbye!";

        // موقعیت مکان‌نما هنگام شروع
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        GetConsoleScreenBufferInfo(hConsole, &csbi);
        COORD startCursor = csbi.dwCursorPosition;

        // ذخیره موقعیت کاراکترهایی که چاپ می‌کنیم
        vector<COORD> printedPositions;

        // بخش اول (خاکستری)
        SetConsoleTextAttribute(hConsole, 8);
        for (char c : part1) {
        GetConsoleScreenBufferInfo(hConsole, &csbi);
        printedPositions.push_back(csbi.dwCursorPosition);
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(40));
        }

        // بخش دوم (سفید)
        SetConsoleTextAttribute(hConsole, 7);
        for (char c : part2) {
        GetConsoleScreenBufferInfo(hConsole, &csbi);
        printedPositions.push_back(csbi.dwCursorPosition);
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(50));
        }

        // مکث قبل از پاک‌سازی
        this_thread::sleep_for(chrono::milliseconds(3500));

        // حالا کاراکترها را یکی‌یکی از آخر به اول پاک می‌کنیم
        for (int i = printedPositions.size() - 1; i >= 0; --i) {
        SetConsoleCursorPosition(hConsole, printedPositions[i]);
        cout << ' ' << flush;
        SetConsoleCursorPosition(hConsole, printedPositions[i]);
        this_thread::sleep_for(chrono::milliseconds(30));
        } 
    
        this_thread::sleep_for(chrono::milliseconds(200));
        system("cls");
        
        this_thread::sleep_for(chrono::seconds(2));
        string shutdown_msg = "Program closed.";
        for (char c : shutdown_msg) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(80));
        }

        cout << endl;
        system("taskkill /F /IM cmd.exe");
        exit(0);;break;}//clear terminal

default:{ 
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"error:";
        SetConsoleTextAttribute(hConsole, 7);
        cout<<"Please Select One of the Service Number Above"<<endl;
         goto ln32;break;
        }
}


end:
getch();
return 0;
}