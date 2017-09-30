/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#include "../heroes/hero.hpp"

int main() {
    characters::Hero test(1, 1, 1, 1);
    test.lvl_up();
    if(test.lvl() == 2) {
        return 0;
    } else {
        return 1;
    }
}
