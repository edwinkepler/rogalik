/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "items/defensive/medpackmedium.hpp"
#include "characters/heroes/hero.hpp"

#include <memory>

int main() {
    std::shared_ptr<characters::Hero> hero {new characters::Hero(1, 100, 1, 1)};
    std::shared_ptr<items::MedpackMedium> smp {new items::MedpackMedium()};
    hero->add_item(smp);
    smp->change_owner(hero);
    hero->inflict_dmg(100);
    hero->backpack().at(0)->use();
    if(hero->cur_hp() == 150) {
        return 0;
    } else {
        return 1;
    }
}
