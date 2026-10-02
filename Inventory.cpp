#include "Inventory.h"
#include <iostream>

Inventory::Inventory(int size) : size(size > 0 ? size : 1) {
    items = new Item[this->size];
}

Inventory::Inventory(const Inventory& other) : size(other.size) {
    items = new Item[size];
    for (int i = 0; i < size; i++) {
        items[i] = other.items[i];
    }
}

Inventory::~Inventory() {
    delete[] items;
}

void Inventory::setItem(int index, const Item& item) {
    if (index >= 0 && index < size) {
        items[index] = item;
    }
}

void Inventory::print() const {
    std::cout << "--- Інвентар (Розмір: " << size << ") ---\n";
    for (int i = 0; i < size; i++) {
        std::cout << "[" << i << "] ";
        items[i].print();
    }
    std::cout << "-------------------------------\n";
}