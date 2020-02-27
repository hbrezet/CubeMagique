#include <cstdlib>
#include <string>
#include <iostream>
#include "tinyxml2.h"


using namespace std;
using namespace tinyxml2;

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
        
        string extract = doc.FirstChildElement("initcube")->FirstChildElement("instrument")->FirstChildElement("mesure")->FirstAttribute()->Value();
        cout << extract << endl;
        
        
    }
    return 0;
}

/*
 
 main : entrer nom fichier a extraire -
 
 boucle while tant que y a des nodes > choper valeurs 
 et / ou texte et le mettre dans un fichier
 
 
 
 
 */