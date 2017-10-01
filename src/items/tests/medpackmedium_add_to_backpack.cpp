/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "items/defensive/medpackmedium.hpp"
#include "characters/heroes/hero.hpp"

#include <memory>

int main() {
    std::shared_ptr<characters::Hero> hero {new characters::Hero(1, 50, 1, 1)};
    std::shared_ptr<items::MedpackMedium> smp {new items::MedpackMedium()};
    hero->add_item(smp);
    smp->change_owner(hero);
    if(hero->backpack().size() == 1 && hero->backpack().at(0)->id() == 1) {
        return 0;
    } else {
        return 1;
    }
}
