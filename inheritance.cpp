#include <iostream>
using namespace std;

class User {
public:
    virtual void accessLevel() {
        cout << "General Access" << endl;
    }
};

class Employee : public User {
public:
    void accessLevel() override {
        cout << "Employee Access" << endl;
    }
};

class InventoryManager : public Employee {
public:
    void accessLevel() override {
        cout << "Full Inventory Management Access" << endl;
    }
};

int main() {
    InventoryManager mgr;
    mgr.accessLevel();  // Output: Full Inventory Management Access
    return 0;
}
