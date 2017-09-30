#ifndef HERO_HPP
#define HERO_HPP

#include "characters/character.hpp"

namespace characters
{
    class Hero : public Character {
    public:
        Hero(int, int, int, int);
        ~Hero();

        int lvl() const;
        void lvl_up();

        int xp() const;
        void give_xp(int);

    private:
        int i_lvl = 1;
        int i_xp = 0;
    };
}

#endif // HERO_HPP
