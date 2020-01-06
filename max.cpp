#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    char cln;
    int a,b,c;
    while(1){
    cout << "a=" << endl;
    cin >> a;
    cout << "b="<< endl;
    cin >> b;
    cout << "c="<< endl;
    cin >> c;
    if(a>b){
        if(a>c){
            cout << "The max is " << a;
        }else{
            cout << "The max is " << c;
        }
    }
    else{
        if(b>c)
            cout <<  "The max is " << b;
        else
            cout << "The max is " << c;
    }
    cln=getch();
        if(cln=='c'||cln=='C'){
            system("cls");
        }
    }
}

