#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <limits>
using namespace std;
bool fail;
float a,b;
char wybor;
 int main()

{
for(;;)
{
cout<< "Hello, and welcom in the calculator"<<endl;
    cout<< "Number 1:";
    if(!(cin>>a))
    {
        cout<<"Not a number input, END";
        return 0;
    }
cout<< "Number 2:";
    if(!(cin>>b))
    {
        cout<<"Not a number input, END";
        return 0;
    }
cout<< "Main menu"<<endl;
cout<< "Plus 1"<<endl;
cout<< "Minus 2"<<endl;
cout<< "Multiply 3"<<endl;
cout<< "Divide 4"<<endl;
cout<< "END 5"<<endl;
wybor=getch();
switch(wybor)
 {
   case '1':
       cout<< "Equals"<<a+b;
   break;
   case '2':
       cout<< "Equals"<<a-b;
   break;
   case '3':
       cout<< "Equals"<<a*b;
   break;
   case '4':
        if(a==0||b==0)cout<<"Cant do that";
        else cout<< "Equals"<<a/b;
   break;
   case '5':
        exit(0);
   break;
   default: "There is no such case.";
 }
 getchar();getchar();
 system("cls");
}
 return 0;
}

