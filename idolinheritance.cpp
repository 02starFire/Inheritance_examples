#include <iostream>
#include <string>

class Actor {
public:
    std::string k_drama;

    Actor(const std::string& k_DramaName) : k_drama(k_DramaName) {}

    void kdramaname() {
        std::cout << "K-Drama name: " << k_drama << std::endl;
    }
};

class Idol {
public:
    std::string kpop;

    Idol(const std::string& idolName) : kpop(idolName) {}

    void performsong() {
        std::cout << "Performing in the song of: " << kpop << std::endl;
    }
};
class Famous_person : public Actor, public Idol {
public:
    std::string name;
    int age;

    Famous_person(const std::string& personName, int personAge, const std::string& k_drama, const std::string& kpop)
        : Actor(k_drama), Idol(kpop), name(personName), age(personAge) {}

    void introduce() {
        std::cout << "Hello, I am " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    // Create a famous person who is both an actor and an idol
    Famous_person creativePerson("Kim Taehyung", 27, "Hwarang", "Love Me Again");
   
    // Introduce the Kim Taehyung
    creativePerson.introduce();
    creativePerson.kdramaname();
    creativePerson.performsong();


    Famous_person creativePersonF("Kim Jisoo",28, "Snowdrop", "Flower" );
    creativePersonF.introduce();
    creativePersonF.kdramaname();
    creativePersonF.performsong();
    return 0;
}
