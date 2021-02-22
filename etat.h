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

/*General Etat*/
class Etat {
public:
	Etat(string name);
	virtual ~Etat();
	void print() const;
	virtual bool transition(Automate & automate, Symbole * s) = 0;

protected:
	string name;
};


/*etat0's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat1's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat2's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat3's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat4's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat5's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat6's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat7's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat8's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/

/*etat9's constructor*/
class etat0 : public etat{

public:
	etat0();
	bool transition(Automate &automate, Symbole *symbole);
	virtual int state();

protected:
	int valeur;
};
/******************************************************************/