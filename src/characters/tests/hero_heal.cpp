/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "../heroes/hero.hpp"

int main() {
    characters::Hero test(1, 100, 1, 1);
    test.inflict_dmg(20);
    test.give_heal(50); // heal can't go over max hp
    if(test.cur_hp() == 200) {
        return 0;
    } else {
        return 1;
    }
}
