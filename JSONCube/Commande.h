
#include "json.hpp"
#include <string>

class Commande {

	public :
		char* commande;
		
		void extraireInformations();
		void extraireTypeMesure();

	private :
		char* commandeBrute;
		TypeTrame type;
		
		void extraireType();
		void extraireDate();
		void extraireInstrument();
		
		json *commandeJson;
		
		string date;
		string instrument;
		string typeMesure;
}; 
