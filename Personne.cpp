//*_!?;()%&#<>[]{}¥^
#ifndef DEF_PERSONNE
#define DEF_PERSONNE
#include <string>
#include <iostream>
using namespace std;
class PersonneDetails
{
  
  int m_age;
  string m_nom;
  string m_prenom;
  
  public:
  /*PersonneDetails();*/
  PersonneDetails(string nom,string prenom);
  PersonneDetails(string nom,string prenom,int age);
  /*~PersonneDetails();*/
  void Anniversaire();
  void setNom(string nom);
  void setPrenom(string prenom);
  void setAge(int age);
  string getNom(); 
  string getPrenom();
  int getAge();
  void afficher();
};
PersonneDetails::PersonneDetails(string nom,string prenom)
{
  m_nom=nom; 
  m_prenom=prenom; 
}
PersonneDetails::PersonneDetails(string nom,string prenom,int age)
{
  m_nom=nom; 
  m_prenom=prenom; 
  m_age=age;
}
void PersonneDetails::Anniversaire()
{
    m_age++;
}
void PersonneDetails::setNom(string nom)
{
    m_nom=nom;
}
void PersonneDetails::setPrenom(string prenom)
{
    m_prenom=prenom;
}
void PersonneDetails::setAge(int age)
{
    m_age=age;
}
string PersonneDetails::getNom()
{
   return m_nom;
}
 string PersonneDetails::getPrenom()
 {
     return m_prenom;
 }
 int PersonneDetails::getAge()
 {
   return m_age;
 }
 void PersonneDetails::afficher()
 {
   cout<<"Voici les attributs de votre personnage :"<<endl<<"Nom: "<<m_nom<<endl<<"Prenom: "<<m_prenom<<endl<<"Age: "<<m_age <<endl ;
 }
#endif