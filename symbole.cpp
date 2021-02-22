#include "symbole.h"
#include <iostream>
/*shows identificateur of this symbole that read*/
void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

/*already known that it is an Entier, so show its value*/
void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

