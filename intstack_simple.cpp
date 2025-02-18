#include <iostream>
#include <cstdlib>
#include "tmplstack.h"

// constante entière pour la taille de la pile
const int SIZE{12};

// on définit un type de donnée (une classe) pour gérer une pile d'entier de taille 12 (SIZE)
template <typename t, int size>
class IntStack
{
public:
    void push(int e)
    {
        if (this->is_full())
        {
        }
        else
        {
            T[n] = e;
            n += 1;
        };
        // cette fonction ajoute l'entier e dans la pile
        // votre code ici
    };
    int get_top()
    {
        return T[n];
        // cette fonction retourne le dernier entier empilé
        // votre code ici
    };
    int pop()
    {
        if (this->is_empty())
        {
            exit(1);
        }
        else
        {
            n -= 1;
            return T[n];
        }
        // cette fonction retourne le dernier entier empilé
        // et supprime cet entier de la pile
        // votre code ici
    };
    bool is_empty()
    {
        return (n == 0);
        // cette fonction teste si la pile est vide
        // votre code ici
    };
    bool is_full()
    {
        return (n == SIZE);
        // cette fonction teste si la pile est pleine
        // il y a SIZE entiers dans la pile
        // votre code ici
    };
    void print()
    {
        std::cout << '[' << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << T[i] << std::endl;
        };
        std::cout << '[' << std::endl;
        // cette fonction affiche la pile, par exemple
        // [1 2 3 [ pour dire que 3 entiers sont dans la pile
        // le dernier empilé est 3
        // votre code ici
    };

private:
    t T[SIZE]{};
    int n{};
    // vos attributs pour représenter la pile d'entier
    // dans cette version toutes les piles sont de taille SIZE
    // votre code ici
};

// 1. réaliser le code pour faire fonctionner cette pile d'entier de taille fixée à la compilation
// 2. quelles sont les méthodes qui ne modifient pas l'objet sur lequel elles sont appelées
//    faites en sorte qu'elles puissent être appelées sur un objet constant
// 3. faites la fonction qui permet d'afficher un objet de type IntStack directement avec <<<
//    std::cout << s1;
//    il faut redéfinir l'operator<< en appelant la méthode print

int main()
{
    IntStack<int,SIZE> s1;
    s1.print(); // affichera [[
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.print();                         // affichera [1 2 3 ]
    std::cout << s1.pop() << std::endl; // affichera 3
    s1.print();                         // affichera [1 2 ]
    return 0;
}