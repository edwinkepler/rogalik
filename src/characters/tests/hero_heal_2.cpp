/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "../heroes/hero.hpp"

int main() {
    characters::Hero test(1, 50, 1, 1);
    test.inflict_dmg(20);
    test.give_heal(10);
    if(test.cur_hp() == 90) {
        return 0;
    } else {
        return 1;
    }
}
