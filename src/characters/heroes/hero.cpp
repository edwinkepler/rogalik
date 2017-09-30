#include "hero.hpp"

namespace characters
{
    Hero::Hero(int _agil, int _endu, int _perc, int _luck) 
        : Character(_agil, _endu, _perc, _luck)
    {}

    Hero::~Hero()
    {}

    int Hero::lvl() const {
        return i_lvl;
    }

    void Hero::lvl_up() {
        ++i_lvl;
    }

    int Hero::xp() const {
        return i_xp;
    }

    void Hero::give_xp(int _xp) {
        i_xp += _xp;
    }
}