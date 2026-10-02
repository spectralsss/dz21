#include "Item.h"
#include <iostream>

Item::Item() : name("Empty"), type(ItemClass::None) {}

Item::Item(const String& name, ItemClass type) : name(name), type(type) {}

Item::Item(const char* name, ItemClass type) : name(name), type(type) {}

void Item::print() const {
    std::cout << "Предмет: " << (name.c_str() ? name.c_str() : "nullptr") << " | Тип: ";
    switch (type) {
    case ItemClass::Weapon:
        std::cout << "Зброя";
        break;
    case ItemClass::Potion:
        std::cout << "Зілля";
        break;
    case ItemClass::Food:
        std::cout << "Їжа";
        break;
    case ItemClass::None:
        std::cout << "Порожньо";
        break;
    }
    std::cout << "\n";
}