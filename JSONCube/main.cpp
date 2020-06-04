#include "json.hpp"
#include "cstdlib"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
using json = nlohmann::json;

int main(){

	ifstream streamed("trame.json");
	json fichier;

	streamed >> fichier;

	cout << fichier << endl;

	string typeCMD = fichier["CMD"]["TYPE_CMD"];
	string typeINSTRU = fichier["CMD"]["INSTRUMENT"];
	string typeMESURE = fichier["CMD"]["TYPE_MEASURE"];
	string date = fichier["CMD"]["DATE"];

	cout << "La commande est de type : " << typeCMD << endl;
	cout << "L'instrument est de type : " << typeINSTRU << endl;
	cout << "Le type de mesure est de type : " << typeMESURE << endl;
	cout << "La date est le : " << date << endl;


return 0;

}
