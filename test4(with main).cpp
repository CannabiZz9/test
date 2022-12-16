#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int findMinLoc(double a,double b,double c,double d)
    {
    double smallest = 50,y;
    int x=0,ans=200;
    
    while (x <= 200){
    y = (a * sin((M_PI*x)/((b*b)+1)))  +  (c * cos((M_PI*x)/((d*d)+1)));
    if(y < smallest)
    {
        smallest = y;
        ans = x;
    }
    x++;
    
    }
    
    return ans;
    }

int main(){
    cout << findMinLoc(5,3,9,10);
    cout << "\n";
    cout << findMinLoc(0,0,0,0);
 return 0;
}
