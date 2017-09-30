/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <vector>
#include <memory>

#include "items/item.hpp"
#include "perks/perk.hpp"

namespace characters
{
    class Character {
    public:
        Character(int, int, int, int);
        ~Character();

        int agility() const;
        void change_agility(int);        
        int endurance() const;
        void change_endurance(int);
        int perception() const;
        void change_perception(int);
        int luck() const;
        void change_luck(int);

        int max_hp() const;
        int cur_hp() const;
        int speed() const;

        std::vector<std::shared_ptr<items::Item>> backpack() const;
        void add_item(const std::shared_ptr<items::Item>&);
        void add_items(const std::vector<std::shared_ptr<items::Item>>&);

        std::vector<std::shared_ptr<perks::Perk>> perks() const;
        void add_perk(const std::shared_ptr<perks::Perk>&);

        void inflict_dmg(int);
        void give_heal(int);
        bool dead() const;

    private:
        int i_agility;
        int i_endurance;
        int i_perception;
        int i_luck;

        int i_max_hp;
        int i_cur_hp;
        int i_speed;
        bool f_dead = false;
        std::vector<std::shared_ptr<items::Item>> v_backpack = {};
        std::vector<std::shared_ptr<perks::Perk>> v_perks = {};
    };
}

#endif // CHARACTER_HPP
