#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c;
    
    cout << "Please enter A: " ;
    cin >> a;
    cout << "Please enter B: " ;
    cin >> b;

    c = (a + b)%6;

    while(c < 11)
    {
        cout << c;
        
        if( c == 0)
        {
            cout << a+b;

            if(a > b)
            {
                cout << "6";
                c = c + 2;
            }
            else
            {
                c = c + 2;
            }
        }
        else
        {
            cout << (a+b)%c;
            if(a > b)
            {
                cout << "6";
                c = c + 2;
            }
            else
            {
                c = c + 2;
            }
        }
    } 
        cout << (a*a)+(b*b);
   
    
    
 return 0;
}