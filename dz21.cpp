#include <iostream>
#include "Inventory.h"

int main() {
    Inventory inv1(3);
    inv1.setItem(0, Item("Меч темряви", ItemClass::Weapon));
    inv1.setItem(1, Item("Зілля здоров'я", ItemClass::Potion));
    inv1.setItem(2, Item("Хліб", ItemClass::Food));

    std::cout << "Перший інвентар (inv1):\n";
    inv1.print();

    Inventory inv2(inv1);
    std::cout << "Копія інвентарю (inv2):\n";
    inv2.print();

    inv2.setItem(0, Item("Огняний сокира", ItemClass::Weapon));

    std::cout << "Після зміни першого предмета в inv2:\n\n";
    std::cout << "inv1 (не повинен змінитися):\n";
    inv1.print();

    std::cout << "inv2 (змінений):\n";
    inv2.print();

    return 0;
}