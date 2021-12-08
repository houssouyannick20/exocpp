//*_!?;()%&#<>[]{}¥^
#include <string>
#include <iostream>
#include "Personne.cpp"
using namespace std;

int main()
{  
    /*string nom="";
    string prenom="";
    cout<<"Entrez respectivement le nom et le prenom de votre objet:"<<endl;
    cin>>nom>>prenom;
    PersonneDetails  toto(nom,prenom);
    cout<<"Votre objet a respectivement pour nom et prenom : "<<toto.m_nom<<" et "<<toto.m_prenom<<endl; */
    string a,b;
    int c;
    PersonneDetails toto("HOUSSOU","Yannick",20);
    toto.Anniversaire();
    toto.afficher();
    PersonneDetails momo("MEDEDJI","Denise",70);
    momo.afficher();
    toto.setPrenom("Arsene");
    momo.setNom("TOUDONOU");
    momo.setAge(71);
    toto.afficher();
    momo.afficher();
    a=toto.getNom();
    b=toto.getPrenom();
    c=momo.getAge();
    cout<<"Le nom de l objet toto est: "<<a<<endl;
    cout<<"Le prenom de l objet toto est: "<<b<<endl;
    cout<<"L age de l objet momo est: "<<c<<endl;

}
