#include <iostream>
#include <string>
using namespace std;
class ������������� {
public:
    virtual ~�������������() {}
    virtual void ������������(const string& ��������) = 0;
    virtual void ������������������(const string& �������������) = 0;
};
class ������������ : public ������������� {
public:
    void ������������(const string& ��������) override {
        cout << "�������� ���� ����: " << �������� << endl;
    }
    void ������������������(const string& �������������) override {
    }
};
class ����������������� : public ������������� {
public:
    void ������������(const string& ��������) override {
    }
    void ������������������(const string& �������������) override {
        cout << "Create type of electronic: " << ������������� << endl;
    }
};
class ���� {
public:
    virtual ~����() {}
};
class �������� : public ���� {
};
class ����� : public ���� {
};
class ������ : public ���� {
};
class ���������� {
public:
    virtual ~����������() {}
};
class �������� : public ���������� {
};
class ������� : public ���������� {
};
class �������� : public ���������� {
};
int main() {
    �������������* �������;
    ������� = new ������������();
    �������->������������("T-shirt");
    delete �������;
    ������� = new �����������������();
    �������->������������������("Phone");
    delete �������;
    return 0;
}