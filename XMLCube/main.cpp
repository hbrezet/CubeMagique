#include <cstdlib>
#include <string>
#include <iostream>
#include "tinyxml2.h"


using namespace std;
using namespace tinyxml2;

/*void save() {
        string sauvegarde;
        cout << "Sauvegarder le document ? Oui/Non" << endl;
        cin >> sauvegarde;
        
        if(sauvegarde == "oui" | sauvegarde == "Oui" | sauvegarde == "o"){
           cout << "sauvegarde en cours..." << endl;
        }
        
           else if(sauvegarde == "non" | sauvegarde == "Non" | sauvegarde == "n") {
               cout << "aucune sauvegarde"
            } 
        
           else() {
               cout << "merci de rentrer un truc valide" << endl;
               cin >> rien;
               save();
                }
            }
*/
int main() {

    XMLDocument doc;
    
    cout << "Veuillez renseigner le nom du fichier à extraire." << endl;
    
    string fichier;
    string nomFichier;
    
    cin >> fichier ;
    nomFichier+=fichier;
    nomFichier+=".xml";
    
    doc.LoadFile(nomFichier.c_str());
    
    cout << " " << endl;
    
    if(nomFichier == "hello.xml"){
    
    string Hello = doc.FirstChildElement("Test")->FirstChildElement("Hello")->FirstAttribute()->Value();
    string Hello2 = doc.FirstChildElement("Test")->FirstChildElement("Hello")->GetText();
    
    string World = doc.FirstChildElement("Test")->FirstChildElement("World")->FirstAttribute()->Value();
    string World2 = doc.FirstChildElement("Test")->FirstChildElement("World")->GetText();
    
    cout << Hello << endl << Hello2 << endl << World << endl << World2 << endl; 
    
    }
    
    else{
        doc.LoadFile(nomFichier.c_str());
        
        system("clear");
        
        string instrument = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->Value();
        
        cout << instrument << endl;
        cout << "" << endl;
        
        string idInstrument = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("description")->FirstChildElement("id")->GetText();
        string typeInstrument = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("description")->FirstChildElement("type")->GetText();
        string roleInstrument = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("description")->FirstChildElement("role")->GetText();
        
        
        string mesure1 = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("mesure")->FirstAttribute()->Value();
        
        cout << "* Description : " << endl;
        cout << " " << endl;
        
        cout << "* ID : " << idInstrument << endl;
        cout << "* Type : " << typeInstrument << endl;
        cout << "* Role : " << roleInstrument << endl; 
        
        cout << "" << endl;
        cout << "* Etat : " << endl;
        cout << "" << endl;
        
        string etatActif = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("etat")->FirstChildElement("actif")->GetText();
        string etatTempUnite = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("etat")->FirstChildElement("temperature")->FirstAttribute()->Value();
        string etatTempAlerteHaut = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("etat")->FirstChildElement("temperature")->FindAttribute("SeuilALerteHaut")->Value();
        string etatTempAlerteBas = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("etat")->FirstChildElement("temperature")->FindAttribute("SeuilALerteBas")->Value(); 
        string etatTemp = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("etat")->FirstChildElement("temperature")->GetText();
       
        
        cout << "* Etat Actif : " << etatActif << endl;
        cout << "* Unité température : " << etatTempUnite << endl;
        cout << "* Seuil alerte température haut : " << etatTempAlerteHaut << endl;
        cout << "* Seuil alerte température bas : " << etatTempAlerteBas << endl;
        cout << "* Température : " << etatTemp << endl;
           
        cout << " " << endl;
        
        
        }    
        
        
        
    
    return 0; 
}


/*
 
 main : entrer nom fichier a extraire -
 
 boucle while tant que y a des nodes > choper valeurs 
 et / ou texte et le mettre dans un fichier
 
 
 
 
 */