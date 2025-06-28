//تفریق
#include <iostream>
#include <conio.h>
#include <windows.h> 
#include <thread>
#include <vector>
using namespace std;

main(){
    
    HANDLE hConsole =
    GetStdHandle(STD_OUTPUT_HANDLE);
    
    int o;
    float b,MIN,a,a1,a2,a3,a4,a5,a6,a7,a8;
    SetConsoleTextAttribute(hConsole, 9);
    cout<<endl<<"MINUS>>"<<endl;
    SetConsoleTextAttribute(hConsole, 7);
    ln16:cout<<"How many number you have!? : ";
    
    cin>>o;

    switch (o){
    case (1) : {cout<<"enter number 1:";
                cin>>b;
                MIN=b;
                goto ln128;}

    case (2) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                MIN=b-a;
                goto ln128; break;}  

    case (3) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                MIN=((b-a)-a1);
                goto ln128;break;} 
    
    case (4) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                cout<<"enter number 4:";
                cin>>a2;
                MIN=(((b-a)-a1)-a2);
                goto ln128; break;}  

    case (5) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                cout<<"enter number 4:";
                cin>>a2;
                cout<<"enter number 5:";
                cin>>a3;
                MIN=((((b-a)-a1)-a2)-a3);
                goto ln128; break;}
    
    case (6) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                cout<<"enter number 4:";
                cin>>a2;
                cout<<"enter number 5:";
                cin>>a3;
                cout<<"enter number 6:";
                cin>>a4;
                MIN=b-a-a1-a2-a3-a4;
                goto ln128; break;}

    case (7) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                cout<<"enter number 4:";
                cin>>a2;
                cout<<"enter number 5:";
                cin>>a3;
                cout<<"enter number 6:";
                cin>>a4;
                cout<<"enter number 7:";
                cin>>a5;
                MIN=b-a-a1-a2-a3-a4-a5;
                goto ln128; break;}

    case (8) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                cout<<"enter number 4:";
                cin>>a2;
                cout<<"enter number 5:";
                cin>>a3;
                cout<<"enter number 6:";
                cin>>a4;
                cout<<"enter number 7:";
                cin>>a5;
                cout<<"enter number 8:";
                cin>>a6;
                MIN=b-a-a1-a2-a3-a4-a5-a6;
                goto ln128; break;}

    case (9) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                cout<<"enter number 4:";
                cin>>a2;
                cout<<"enter number 5:";
                cin>>a3;
                cout<<"enter number 6:";
                cin>>a4;
                cout<<"enter number 7:";
                cin>>a5;
                cout<<"enter number 8:";
                cin>>a6;
                cout<<"enter number 9:";
                cin>>a7;
                MIN=b-a-a1-a2-a3-a4-a5-a6-a7;
                goto ln128; break;}

    case (10) : {cout<<"enter number 1:";
                cin>>b;
                cout<<"enter number 2:";
                cin>>a;
                cout<<"enter number 3:";
                cin>>a1;
                cout<<"enter number 4:";
                cin>>a2;
                cout<<"enter number 5:";
                cin>>a3;
                cout<<"enter number 6:";
                cin>>a4;
                cout<<"enter number 7:";
                cin>>a5;
                cout<<"enter number 8:";
                cin>>a6;
                cout<<"enter number 9:";
                cin>>a7;
                cout<<"enter number 10:";
                cin>>a8;
                MIN=b-a-a1-a2-a3-a4-a5-a6-a7-a8;
                goto ln128; break;}
    
    case (0) : {MIN=0;goto ln128; break;}

    default : cout<<"NOT READY YET AH"<<endl; goto ln16; break;
    }
    
    ln128:cout<<"Hasel="<<MIN<<endl<<endl;

    cout<<"if you want Continue enter '1'"<<endl;
    cout<<"if you want Close enter '0'\n"<<endl;
    cout<<"Choose One:";
    int m;
    cin>>m;
    
    if (m==1)
        goto ln16;
    
    if (m==00)
    {
    this_thread::sleep_for(chrono::milliseconds(200));
    system("cls");
        
    this_thread::sleep_for(chrono::milliseconds(1750));
    string shutdown_msg = "Program closed.";
    for (char c : shutdown_msg) {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(80));
    }
    
    cout << endl;
    system("taskkill /F /IM cmd.exe");
    exit(0);//clear terminal
    }
    
    
    // ln129:SetConsoleTextAttribute(hConsole, 3);
    // cout<<"[1]:Continue                ";
    // SetConsoleTextAttribute(hConsole, 6);
    // cout<<"[2]:Help                   ";
    // SetConsoleTextAttribute(hConsole, 4);
    // cout<<"[0]:Exit"<<endl;
    // lnOR2:SetConsoleTextAttribute(hConsole, 8);
    // cout<<"[ ]";
    // cout<<'\b'<<'\b';
    // int case2;
    // cin>>case2;
    // switch (case2){
    // case (1) : {cout<<">>>";
    //             SetConsoleTextAttribute(hConsole, 5);
    //              cout<<"OK! Choose another one:";
    //              SetConsoleTextAttribute(hConsole, 7);
    //             goto ln40;
    //            }
    //case (2) : goto lnHelp;break;   
    //case (0) : goto lnExit;break;
    
    
    // default:{SetConsoleTextAttribute(hConsole, 8);
    //          cout<<"error:";
    //          SetConsoleTextAttribute(hConsole, 7);
    //          cout<<"Please Select One of the Service Number Above"<<endl; 
    //          goto lnOR2;
    //          break;
    //         }
    // break;
} 
