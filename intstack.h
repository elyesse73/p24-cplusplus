#include <iostream>

namespace Toto
{
    class IntStack
    {
    public:
        IntStack(int s) : n{0}, size{s} { tab = new int[size]; };
        ~IntStack() { delete[] tab; };
        IntStack(const IntStack &r) : n(r.n), size(r.size)
        {
            tab = new int[size];
            for (int i = 0; i < r.size; i++)
            {
                tab[i] = r.tab[i];
            };
        };
        void push(int e);
        // cette fonction ajoute l'entier e dans la pile
        // votre code ici
        int get_top()
        {
            return tab[n];
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
                return tab[n];
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
            return (n == size);
            // cette fonction teste si la pile est pleine
            // il y a SIZE entiers dans la pile
            // votre code ici
        };
        void print()
        {
            std::cout << '[' << std::endl;
            for (int i = 0; i < n; i++)
            {
                std::cout << tab[i] << std::endl;
            };
            std::cout << '[' << std::endl;
            // cette fonction affiche la pile, par exemple
            // [1 2 3 [ pour dire que 3 entiers sont dans la pile
            // le dernier empilé est 3
            // votre code ici
        };

    private:
        int n{};
        int size{};
        int *tab{};
        // vos attributs pour représenter la pile d'entier
        // dans cette version toutes les piles sont de taille SIZE
        // votre code ici
    };
}