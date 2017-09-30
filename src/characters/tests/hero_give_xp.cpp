/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "../heroes/hero.hpp"

int main() {
    characters::Hero test(1, 1, 1, 1);
    test.give_xp(5);
    if(test.xp() == 5) {
        return 0;
    } else {
        return 1;
    }
}
