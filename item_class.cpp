#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    int quantity;

public:
    Item() {
        name = "Unknown";
        quantity = 0;
    }

    Item(string itemName, int itemQty) {
        name = itemName;
        quantity = itemQty;
    }

    void display() {
        cout << "Item: " << name << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Item item1("Notebook", 10);
    Item item2("Pencil", 50);

    item1.display();
    item2.display();

    return 0;
}
