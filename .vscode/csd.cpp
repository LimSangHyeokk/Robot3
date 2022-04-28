#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
        int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,i=0,j=0,k=0;
        int a[5][4]={
        {0,0,0,0},
        {0,a1,a2,a3},
        {0,a4,a5,a6},
        {0,a7,a8,a9},
        {0,a10,a11,a12}
        };

        for(k=0; k<13;)
        {
            cin >> i;
            cin >> j;
            if( a[i][j]==0 )
            {
                printf("loding~ \n");
                a[i][j]=1;
                if(a[i][j]==1)
                printf("car in loding \n ========== \n The car has entered. \n"),i=j=0;
                k++;
            }
            else if(k==12)
            {
                printf("There's no space.");
            }
            else 
            {
                printf("error \n Put it on hold.");
            }   
        }
};