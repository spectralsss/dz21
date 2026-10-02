#pragma once
#include "String.h"

enum class ItemClass {
    Weapon,
    Potion,
    Food,
    None
};

class Item {
private:
    String name;
    ItemClass type;

public:
    Item();
    Item(const String& name, ItemClass type);
    Item(const char* name, ItemClass type);

    void print() const;
};