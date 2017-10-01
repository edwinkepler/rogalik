/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "items/defensive/medpacksmall.hpp"
#include "characters/heroes/hero.hpp"

#include <memory>

int main() {
    std::shared_ptr<characters::Hero> hero {new characters::Hero(1, 50, 1, 1)};
    std::shared_ptr<items::MedpackSmall> smp {new items::MedpackSmall()};
    hero->add_item(smp);
    smp->change_owner(hero);
    auto bp = hero->backpack();
    if(bp.size() == 1 && bp.at(0)->id() == 0) {
        return 0;
    } else {
        return 1;
    }
}
