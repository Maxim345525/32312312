#include <iostream>
#include <string>
#include <vector>

class Builder {
public:
    virtual void addComponent(const std::string& componentName, const std::string& parameters) = 0;
};
class Component1 {
public:
    Component1(const std::string& parameters) : parameters_(parameters) {}
    std::string getParameters() const { return parameters_; }
private:
    std::string parameters_;
};
class Component2 {
public:
    Component2(const std::string& parameters) : parameters_(parameters) {}
    std::string getParameters() const { return parameters_; }
private:
    std::string parameters_;
};

class Component3 {
public:
    Component3(const std::string& parameters) : parameters_(parameters) {}
    std::string getParameters() const { return parameters_; }
private:
    std::string parameters_;
};
class ObjectDirector {
public:
    ObjectDirector(Builder* builder) : builder_(builder) {}

    void buildObject() {
        builder_->addComponent("Component1", "parameters1");
        builder_->addComponent("Component2", "parameters2");
        builder_->addComponent("Component3", "parameters3");
    }

private:
    Builder* builder_;
};
class ObjectBuilder : public Builder {
public:
    void addComponent(const std::string& componentName, const std::string& parameters) override {
        if (componentName == "Component1") {
            components_.push_back(new Component1(parameters));
        }
        else if (componentName == "Component2") {
            components_.push_back(new Component2(parameters));
        }
        else if (componentName == "Component3") {
            components_.push_back(new Component3(parameters));
        }
    }
    void showComponents() {
        for (auto component : components_) {
            if (dynamic_cast<Component1*>(component)) {
                std::cout << "Component1 with parameters: " << dynamic_cast<Component1*>(component)->getParameters() << std::endl;
            }
            else if (dynamic_cast<Component2*>(component)) {
                std::cout << "Component2 with parameters: " << dynamic_cast<Component2*>(component)->getParameters() << std::endl;
            }
            else if (dynamic_cast<Component3*>(component)) {
                std::cout << "Component3 with parameters: " << dynamic_cast<Component3*>(component)->getParameters() << std::endl;
            }
        }
    }
    ~ObjectBuilder() {
        for (auto component : components_) {
            delete component;
        }
    }
private:
    std::vector<void*> components_;
};
int main() {
    ObjectBuilder builder;
    ObjectDirector director(&builder);
    director.buildObject();
    builder.showComponents();
    return 0;
}