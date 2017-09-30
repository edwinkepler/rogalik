/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "../heroes/hero.hpp"

int main() {
    characters::Hero test(1, 10, 1, 1);
    test.inflict_dmg(10);
    if(test.cur_hp() == 10) {
        return 0;
    } else {
        return 1;
    }
}
