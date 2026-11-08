#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   system("color b");
    int first,secend,choice ;
    cout<<"enter your first number: ";
    cin>> first ;
    cout<<"enter your secend number: ";
    cin>> secend ;
    if(first<secend)
    {cout<<"1 =even number "<<"\n";
    cout<<"2 =odd number "<<"\n";
    cout<<"choice 1&2 :  ";
    cin>> choice ;
    switch(choice)
    { case 1:
        while(first<=secend)
         {if(first%2==0)
          cout<<"number= "<<first<<"\n";
          first++;
          }break;
     case 2:
         while(first<=secend)
        {if(first%2!=0)
         cout<<"number= "<<first<<"\n";
         first++;
         }break;
     default :
        cout<<"error";}
    }
    else
        cout<<"error";






    return 0;
}
