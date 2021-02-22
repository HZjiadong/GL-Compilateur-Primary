#pragma once
/*表示这个头文件只能被使用一次*/
#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR };
/*avoir des expression aussi
1.automate+expression en memoire->fonction d'evaluation->pas besoin 
2.expression= construiction d'arbre, chaque fois un arbre, pas besoin de l'expression
*/

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR" };
/*有表格里所有的terminaux,utiliser pour tracer le compilateur
ERREUR
Pile de sym-> Entier/Expression
Pile de Etat
*/
class Symbole {
   /*Symbole包含两种
   1st.纯数字->Entier
   2nd.特殊字符，包含Identificateur里面包含的所有的*/
   public:
      /*Constructor of number Symbole*/
      Symbole(int i) : ident(i) {  }
      virtual ~Symbole() { }
      /*il s'agit d'un opérateur de transtypage qui convertit l'objet en int;
      renvoyé la valeur de l'enum;
      normalement, vous n'avez pas besoin  de le récupérer puisque:
         quand vous êtes dans un état donné et que vous êtes dans le case du switch qui reconnait le symbole, 
         vous construisez une expression binaire directement, ou bien vous évaluez directement
      */
      operator int() const { return ident; }
      virtual void Affiche();

   protected:
      int ident;
};

class Entier : public Symbole {
   /*
Pile de sym->enpiler le symboles
Each Entier, is at the same time a Symbole and also a Number, 
   Symbole->Entier is a Character
   Number->Entier has a mathematical value
   */
   public:
      Entier(int v) : Symbole(INT), valeur(v) { }
      ~Entier() { }
      virtual void Affiche();
   protected:
      int valeur;
};

