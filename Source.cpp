#include <iostream>
#include <string>
using namespace std;
class ‘абрика“овар≥в {
public:
    virtual ~‘абрика“овар≥в() {}
    virtual void —творитиќд€г(const string& типќд€гу) = 0;
    virtual void —творити≈лектрон≥ку(const string& тип≈лектрон≥ки) = 0;
};
class ‘абрикаќд€гу : public ‘абрика“овар≥в {
public:
    void —творитиќд€г(const string& типќд€гу) override {
        cout << "—творено од€г типу: " << типќд€гу << endl;
    }
    void —творити≈лектрон≥ку(const string& тип≈лектрон≥ки) override {
    }
};
class ‘абрика≈лектрон≥ки : public ‘абрика“овар≥в {
public:
    void —творитиќд€г(const string& типќд€гу) override {
    }
    void —творити≈лектрон≥ку(const string& тип≈лектрон≥ки) override {
        cout << "Create type of electronic: " << тип≈лектрон≥ки << endl;
    }
};
class ќд€г {
public:
    virtual ~ќд€г() {}
};
class ‘утболка : public ќд€г {
};
class Ўтани : public ќд€г {
};
class  уртка : public ќд€г {
};
class ≈лектрон≥ка {
public:
    virtual ~≈лектрон≥ка() {}
};
class —мартфон : public ≈лектрон≥ка {
};
class Ќоутбук : public ≈лектрон≥ка {
};
class “елев≥зор : public ≈лектрон≥ка {
};
int main() {
    ‘абрика“овар≥в* фабрика;
    фабрика = new ‘абрикаќд€гу();
    фабрика->—творитиќд€г("T-shirt");
    delete фабрика;
    фабрика = new ‘абрика≈лектрон≥ки();
    фабрика->—творити≈лектрон≥ку("Phone");
    delete фабрика;
    return 0;
}