/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#ifndef MEDPACKMEDIUM_HPP
#define MEDPACKMEDIUM_HPP

#include "items/item.hpp"
#include "characters/heroes/hero.hpp"

namespace items
{
    class MedpackMedium : public Item {
    public:
        MedpackMedium();
        ~MedpackMedium();

        void use();
        void change_owner(std::shared_ptr<characters::Hero>&);

    private:
        std::shared_ptr<characters::Character> ptr_owner = nullptr;
        const int i_healing_power = 50;
    };
}

#endif // MEDPACKMEDIUM_HPP
