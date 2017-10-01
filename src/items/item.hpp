/**
 * @copyright 2017 Edwin Kepler
 * @license MIT
 */

#ifndef ITEM_HPP
#define ITEM_HPP

namespace items
{
    enum ID {
        D001, // MedpackSmall
        D002 // MedpackMedium
    };

    enum TYPE {
        DEFENSIVE,
        OFENSIVE
    };

    class Item {
    public:
        Item(int, int);
        ~Item();

        int type() const;
        int id() const;

        virtual void use() = 0;

    private:
        int i_type;
        int i_id;
    };
}

#endif // ITEM_HPP
