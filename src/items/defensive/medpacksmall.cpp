#include "medpacksmall.hpp"

namespace items
{
    MedpackSmall::MedpackSmall()
        : Item(0, 0)
    {}

    MedpackSmall::~MedpackSmall()
    {}

    void MedpackSmall::use() {
        if(ptr_owner != nullptr) {
            ptr_owner->give_heal(i_healing_power);
        }
    }

    void MedpackSmall::change_owner(std::shared_ptr<characters::Hero>& _owner) {
        ptr_owner = _owner;
    }
}
