#pragma once

#include <string>
#include "symbole.h"
using namespace std;
/*For example for the expression:1*2+123
read seperatly, from left to right each time a Symbole from the !"Tampon d'Entree"!(TD's big table)
*/
class Lexer {

   public:
      Lexer(string s) : flux(s), tete(0), tampon(nullptr) { }
      ~Lexer() { }

      Symbole * Consulter();
      void Avancer();

   protected:
      string flux;
      int tete;
      Symbole * tampon;
};
