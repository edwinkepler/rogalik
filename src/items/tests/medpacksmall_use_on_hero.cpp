/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "items/defensive/medpacksmall.hpp"
#include "characters/heroes/hero.hpp"

#include <memory>

int main() {
    std::shared_ptr<characters::Hero> hero {new characters::Hero(1, 100, 1, 1)};
    std::shared_ptr<items::MedpackSmall> smp {new items::MedpackSmall()};
    hero->add_item(smp);
    smp->change_owner(hero);
    hero->inflict_dmg(20);
    hero->backpack().at(0)->use();
    if(hero->cur_hp() == 200) {
        return 0;
    } else {
        return 1;
    }
}
