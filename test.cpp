#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string gender;
    
    cout << "What is your name?: " ;
    cin >> name;
    cout << "What is your gender?: " ;
    cin >> gender;

    if(gender == "Male") 
    {
        cout << "Hello, Mr. " << name << ".\n" ;
    }
    else if(gender == "Female")
    {
        cout << "Hello, Ms. " << name << ".\n" ;
    }
    else
    {
        cout << "Error!!!" ;
    }
   
    
    
 return 0;
}