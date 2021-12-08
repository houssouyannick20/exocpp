//*_!?;()%&#<>[]{}¥^
#include <iostream>
using namespace std;
int n,i;
float serie_harmonique;
int main()
{
    n=-1;
    while (n<0)
    {
        cout <<"Entrez un entier naturel non nul: "<<endl;
        cin  >>n;
    }
serie_harmonique=0.0;
   for(i=1;i<=n;i++) 
   {
       serie_harmonique+=(float)1/(float)i;
   }
   cout <<"la somme de la serie harmonique d ordre " <<n <<" est :" <<serie_harmonique <<endl;
}