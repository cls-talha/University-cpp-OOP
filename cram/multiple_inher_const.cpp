#include <iostream>

class Animal {
  protected:
    std::string name;
    
  public:
    Animal(std::string n) : name(n) {
      std::cout << "Animal Constructor"<<std::endl;
    }
    
    ~Animal(){
      std::cout << "Animal Destructor"<<std::endl; 
    }
    void printName() {
      std::cout << "Animal name is: " << name << std::endl;
    }
};

class Mammal : public Animal {
  protected:
    int age;
    
  public:
    Mammal(std::string n, int a) : Animal(n), age(a) {
      std::cout << "Mammal Constructor"<<std::endl;
    }
    ~Mammal(){
      std::cout << "Mammal Destructor"<<std::endl;
    }
    
    void printAge() {
      std::cout << "Mammal age is: " << age << std::endl;
    }
};

class Human : public Mammal {
  private:
    std::string occupation;
    
  public:
    Human(std::string n, int a, std::string o) : Mammal(n, a), occupation(o) {
      std::cout << "HOOMAN Constructor"<<std::endl;
    }
    
    ~Human(){
      std::cout << "HOOMAN Destructor"<<std::endl;
    }
    void printOccupation() {
      std::cout << "Human occupation is: " << occupation << std::endl;
    }
};

int main() {
  Human h("Alice", 30, "Engineer");
  h.printName();
  h.printAge();
  h.printOccupation();
  // cout << h.name; not allowed but allowed within class coz protected
  return 0;
}
