#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    float y,a=5,b=3,c=9,d=10;
    int i=0,j=0,k=0;
    int x[200];

    while (i <= 200)
        {
            x[i] = j;
            i++;
            j++;
        }

     while (k <=200)
        {
            y = ( a * sin((M_PI*x[k])/(b*b)+1) )  + (c * cos((M_PI*x[k])/(d*d)+1) );
            cout << y;
            k++;
        }

 return 0;
}