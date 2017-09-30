#include "character.hpp"

#include <algorithm>

namespace characters
{
    Character::Character(int _agil, int _endu, int _perc, int _luck) 
        : i_agility(_agil), i_endurance(_endu), i_perception(_perc), i_luck(_luck) 
    {
        i_max_hp = i_cur_hp = i_endurance * 2;
        i_speed = i_agility * 2;
    }

    Character::~Character()
    {}

    int Character::luck() const {
        return i_luck;
    }

    void Character::change_luck(int _luck) {
        i_luck = _luck;
    }

    int Character::agility() const {
        return i_agility;
    }

    void Character::change_agility(int _agility) {
        i_agility = _agility;
    }

    int Character::endurance() const {
        return i_endurance;
    }

    void Character::change_endurance(int _endurance) {
        i_endurance = _endurance;
    }

    int Character::perception() const {
        return i_perception;
    }

    void Character::change_perception(int _perception) {
        i_perception = _perception;
    }

    int Character::max_hp() const {
        return i_max_hp;
    }

    int Character::cur_hp() const {
        return i_cur_hp;
    }

    int Character::speed() const {
        return i_speed;
    }

    std::vector<std::shared_ptr<items::Item>> Character::backpack() const {
        return v_backpack;
    }

    void Character::add_item(const std::shared_ptr<items::Item>& _item) {
        v_backpack.push_back(_item);
    }

    void Character::add_items(
        const std::vector<std::shared_ptr<items::Item>>& _v_items) 
    {
        std::merge(
            v_backpack.begin(), v_backpack.end(), 
            _v_items.begin(), _v_items.end(), 
            std::back_inserter(v_backpack));
    }

    std::vector<std::shared_ptr<perks::Perk>> Character::perks() const {
        return v_perks;
    }

    void Character::add_perk(const std::shared_ptr<perks::Perk>& _perk) {
        v_perks.push_back(_perk);
    }


    void Character::inflict_dmg(int _dmg) {
        i_cur_hp -= _dmg;
        if(i_cur_hp <= 0) {
            f_dead = true;
        }
    }

    void Character::give_heal(int _heal) {
        i_cur_hp += _heal;
        if(i_cur_hp > i_max_hp) {
            i_cur_hp = i_max_hp;
        }
    }

    bool Character::dead() const {
        return i_cur_hp <= 0 ? true : false;
    }
}
