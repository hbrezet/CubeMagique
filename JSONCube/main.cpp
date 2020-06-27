#include "json.hpp"
#include "cstdlib"
#include <iostream>
#include <fstream>
#include <string.h>
#include "Commande.cpp"
#include "Commande.h"

using namespace std;
using json = nlohmann::json;

int main() {
	
	char* chaineCaractere = "{"CMD":{"TYPE_CMD":"MEASURE","INSTRUMENT":"CAMERA","TYPE_MEASURE":"IMAGE","DATE":"2020-05-13 15:35:00"}}";
	

	Commande * maCommande = new Commande(chaineCaractere);
  	maCommande -> extraireType();

	

	char* typeCMD = chaineCaractere["CMD"]["TYPE_CMD"];
	char* typeINSTRU = chaineCaractere["CMD"]["INSTRUMENT"];
	//char* typeMESURE = chaineCaractere["CMD"]["TYPE_MEASURE"];
	char* date = chaineCaractere["CMD"]["DATE"];
	
	cout << "La commande est de type : " << typeCMD << endl;
	cout << "L'instrument est de type : " << typeINSTRU << endl;
	//cout << "Le type de mesure est de type : " << typeMESURE << endl;
	
	cout << "La date est le : " << date << endl;
	
	

	return 0;
}
