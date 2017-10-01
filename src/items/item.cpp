#include "item.hpp"

namespace items
{
    Item::Item(int _type, int _id)
        : i_type(_type), i_id(_id)
    {}

    Item::~Item()
    {}

    int Item::type() const {
        return i_type;
    }

    int Item::id() const {
        return i_id;
    }
}
