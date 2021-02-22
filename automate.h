#include <string>
#include <list>
#include <map>
#include "symbole.h"
#include "etat.h"
using namespace stl;

class Automate {

public:
	Automate();
	Automate(string a);
	virtual ~Automate();
	virtual bool decalage() = 0;
	virtual bool destruiction() = 0;
	virtual int automate();

protected:
	string name;
	list<symbole> pile_symbole();
	list<etat> pile_etat();
}