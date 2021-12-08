//*_!?;()%&#<>[]{}¥^
#include <iostream>
using namespace std;
void fonction();
int j=0;
int main()
{
  for(j=0;j<=14;j++) 
  {
      fonction();
  }  
    
    
}
void fonction()
{
    static int i=0;
    i++;
    cout <<"Appel numero " <<i <<endl;
}