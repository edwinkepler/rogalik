#include "medpackmedium.hpp"

namespace items
{
    MedpackMedium::MedpackMedium()
        : Item(0, 1)
    {}

    MedpackMedium::~MedpackMedium()
    {}

    void MedpackMedium::use() {
        if(ptr_owner != nullptr) {
            ptr_owner->give_heal(i_healing_power);
        }
    }

    void MedpackMedium::change_owner(std::shared_ptr<characters::Hero>& _owner) {
        ptr_owner = _owner;
    }
}
