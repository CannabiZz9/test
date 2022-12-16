#include<iostream>

using namespace std;

int main(){
    int X[16] = {-1,2,100,12,0,-4,-2,3,1000,-100,3,-1,50,8,9,0};  
    int Y[16] = {-1,7,55,25,8,2,-5,12,2,1,2,-1,27,-7,19,0};
    
    int i = 0, j=0,s, count =0;
    float x[16],y[16];

    cout << "Enter s: " ;
    cin >> s;

    while(j<16)
    {
        x[j] = X[j];
        y[j] = Y[j];
        j++;
    }
    while(i < 16)
    {
        if( ( x[i] + y[i] ) >= (x[i] * y[i])/s*1.000)
        {
            count = count +1;
            i++;
        }
        else{i++;}
        
    }
    

    cout << "Result is " << count;
    return 0;
}