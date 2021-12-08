//*_!?;()%&#<>[]{}¥^
#include <iostream>
using namespace std;
int i,j,k;

int main()

{
    j=0,k=0;
    
    for(i=0;i<=10;i++)
    {
       while(j<=10-i)
       {
           cout <<" ";
           j++;

       }
       while (k!=2*i+1)
       {
         cout <<"*";  
         k++;
       }
       cout <<endl ;
        j=0,k=0;
       
    }
}