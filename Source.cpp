#include <iostream>
#include <string>
using namespace std;
class Weapon {
public:
    virtual ~Weapon() {}
    virtual void attack() const = 0;
    virtual string getType() const = 0;
};
class Sword : public Weapon {
public:
    void attack() const override {
        cout << "I attack with a sword!" << endl;
    }

    string getType() const override {
        return "Sword";
    }
};


class Bow : public Weapon {
public:
    void attack() const override {
        cout << "I shoot with a bow!" << endl;
    }

    string getType() const override {
        return "Bow";
    }
};

class Dagger : public Weapon {
public:
    void attack() const override {
        cout << "I hit with a dagger!" << endl;
    }

    string getType() const override {
        return "Dagger";
    }
};


class WeaponFactory {
public:
    static Weapon* createWeapon(const std::string& type) {
        if (type == "Sword") {
            return new Sword();
        }
        else if (type == "Bow") {
            return new Bow();
        }
        else if (type == "Dagger") {
            return new Dagger();
        }
        else {
            return nullptr;
        }
    }
};

int main() {
    Weapon* playerWeapon = WeaponFactory::createWeapon("Μεχ");
    if (playerWeapon) {
        cout << "player choose " << playerWeapon->getType() << endl;
        playerWeapon->attack();
        delete playerWeapon;
    }
    else {
        cout << "Unknown weapon type!" << endl;
    }

    return 0;
}