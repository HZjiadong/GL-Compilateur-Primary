#include <iostream>
#include "symbole.h"
#include "automate.h"
using namesapce std;

class Etat0;
class Etat1;
class Etat2;
class Etat3;
class Etat4;
class Etat5;
class Etat6;
class Etat7;
class Etat8;
class Etat9;

class Etat {
public:
	Etat(string name);
	virtual ~Etat();
	void print() const;
	virtual bool transition(Automate & automate, Symbole * s) = 0;

protected:
	string name;
};

class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
}