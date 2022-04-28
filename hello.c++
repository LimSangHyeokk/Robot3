#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int t1=3000;
    
    int a1,a2,i;
    for(i=0; i<4; i++)
    {
        t1--;
        if( t1==0 )a2++,t1=3000;
        if( a2==4 )a2=0;
    }
    if( a2==0 )printf("red");
    if( a2==1 )printf("orange");
    if( a2==2 )printf("blue");
    
    cin >> a1;
    if( a1==1 )printf("get out");
}