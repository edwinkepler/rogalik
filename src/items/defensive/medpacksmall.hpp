/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#ifndef MEDPACKSMALL_HPP
#define MEDPACKSMALL_HPP

#include "items/item.hpp"
#include "characters/heroes/hero.hpp"

namespace items
{
    class MedpackSmall : public Item {
    public:
        MedpackSmall();
        ~MedpackSmall();

        void use();
        void change_owner(std::shared_ptr<characters::Hero>&);

    private:
        std::shared_ptr<characters::Character> ptr_owner = nullptr;
        const int i_healing_power = 25;
    };
}

#endif // MEDPACKSMALL_HPP
