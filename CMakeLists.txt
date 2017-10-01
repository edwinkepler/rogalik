cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS_RELEASE "-O2")

include_directories(./src)

add_library(   
    _rogalik
    ./src/characters/character.cpp
    ./src/characters/heroes/hero.cpp
    ./src/items/item.cpp
    ./src/items/defensive/medpacksmall.cpp
    ./src/items/defensive/medpackmedium.cpp
)

project(rogalik)

add_executable(${PROJECT_NAME} ./rogalik.cpp)
target_link_libraries(${PROJECT_NAME} _rogalik)

enable_testing()
#characters
add_executable(hero_take_dmg ./src/characters/tests/hero_take_dmg.cpp)
target_link_libraries(hero_take_dmg _rogalik)
add_test(hero-take-dmg hero_take_dmg)

add_executable(hero_take_dmg_and_kill ./src/characters/tests/hero_take_dmg_and_kill.cpp)
target_link_libraries(hero_take_dmg_and_kill _rogalik)
add_test(hero-take-dmg-and-kill hero_take_dmg_and_kill)

add_executable(hero_heal ./src/characters/tests/hero_heal.cpp)
target_link_libraries(hero_heal _rogalik)
add_test(hero-heal hero_heal)

add_executable(hero_heal_2 ./src/characters/tests/hero_heal_2.cpp)
target_link_libraries(hero_heal_2 _rogalik)
add_test(hero-heal-2 hero_heal_2)

add_executable(hero_lvl_up ./src/characters/tests/hero_lvl_up.cpp)
target_link_libraries(hero_lvl_up _rogalik)
add_test(hero-lvl-up hero_lvl_up)

add_executable(hero_give_xp ./src/characters/tests/hero_give_xp.cpp)
target_link_libraries(hero_give_xp _rogalik)
add_test(hero-give-xp hero_give_xp)
#items
add_executable(medpacksmall_add_to_backpack ./src/items/tests/medpacksmall_add_to_backpack.cpp)
target_link_libraries(medpacksmall_add_to_backpack _rogalik)
add_test(medpacksmall-add-to-backpack medpacksmall_add_to_backpack)

add_executable(medpacksmall_use_on_hero ./src/items/tests/medpacksmall_use_on_hero.cpp)
target_link_libraries(medpacksmall_use_on_hero _rogalik)
add_test(medpacksmall-use-on-hero medpacksmall_use_on_hero)

add_executable(medpackmedium_add_to_backpack ./src/items/tests/medpackmedium_add_to_backpack.cpp)
target_link_libraries(medpackmedium_add_to_backpack _rogalik)
add_test(medpackmedium-add-to-backpack medpackmedium_add_to_backpack)

add_executable(medpackmedium_use_on_hero ./src/items/tests/medpackmedium_use_on_hero.cpp)
target_link_libraries(medpackmedium_use_on_hero _rogalik)
add_test(medpackmedium-use-on-hero medpackmedium_use_on_hero)
