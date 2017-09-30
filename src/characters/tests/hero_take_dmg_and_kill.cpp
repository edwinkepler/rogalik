/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "../heroes/hero.hpp"

int main() {
    characters::Hero test(1, 1, 1, 1);
    test.inflict_dmg(110);
    if(test.dead() == true) {
        return 0;
    } else {
        return 1;
    }
}
