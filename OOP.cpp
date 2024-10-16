#include <iostream>

class TWDCrew {
   public:
    bool castMember = true;

    void printLocation() { std::cout << "Go to the set IDK\n"; }
    void setRole(std::string newRole) { role = newRole; }
    std::string getRole() { return role; }

   private:
    std::string role = "Role not assigned";
};

class Human : public TWDCrew {
   public:
    std::string name;
    std::string occupation;
    int age;
    bool alive = true;

    Human(std::string name, std::string occupation, int age) {
        this->name = name;
        this->occupation = occupation;
        this->age = age;
        // setFavoriteFood("Bacon");
    }

    Human(std::string name, std::string occupation, int age, bool alive) {
        this->name = name;
        this->occupation = occupation;
        this->age = age;
        this->alive = alive;
    }
    Human() {}

    void eat() { std::cout << "This person is eating " << "\n"; }
    void drink() { std::cout << "This person is drinking\n"; }
    void sleep() { std::cout << "This person is sleeping\n"; }
    void aliveStatus() {
        std::cout << "This person is alive: " << alive << "\n";
    }

    std::string getFavoriteFood() { return favoriteFood; }
    void setFavoriteFood(std::string newFavoriteFood) {
        favoriteFood = newFavoriteFood;
    }

   private:
    std::string favoriteFood = "Pancakes";
};

int main() {
    //

    // constuctor and overloaded
    Human human_1("Rick", "Police", 35, "Actor");
    Human human_2("Shane", "Police", 36, false);
    Human human_3;

    // before constructor
    // human_1.name = "Rick";
    // human_1.occupation = "Police";
    // human_1.age = 34;

    human_1.setFavoriteFood("Waffles");

    std::cout << human_1.name << ", " << human_1.age << ", "
              << human_1.occupation << ", " << human_1.getFavoriteFood() << ", "
              << human_1.castMember << "\n";

    human_1.eat();
    human_1.drink();
    human_1.sleep();
    human_1.aliveStatus();
    human_1.printLocation();
    std::cout << "Crew role: " << human_1.getRole() << "\n";
    human_1.setRole("Actor");
    std::cout << "Crew role: " << human_1.getRole() << "\n";

    return 0;
}