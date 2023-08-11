#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    char *name;
    static int timeToComplete;

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    char getLevel()
    {
        return level;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    Hero()
    {
        name = new char[100];
        cout << "This is a self made constructor made by pratik." << endl;
    }

    // parametarised constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        char *ch = new char(strlen(temp.name) + 1); // modification start for deep copy
        strcpy(ch, temp.name);
        this->name = ch; // modification end for deep copy
        this->health = temp.health;
        this->level = temp.level;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "[ Name: " << this->name << " , "
             << "Health: " << this->health << " , "
             << "Level: " << this->level << "]" << endl
             << endl;
    }

    // static function can only work on static variable.
    static void random()
    {
        cout << timeToComplete << endl;
    }

    ~Hero()
    {
        cout << "This is a exit (destructor)" << endl;
    }
};

int Hero::timeToComplete = 5;

int main(int argc, char const *argv[])
{
    // static allocation
    // Hero h1;
    // h1.name = "Pratik";
    // cout << "Size : " << sizeof(h1) << endl;
    // cout << "Size : " << sizeof(Hero) << endl;
    // h1.setHealth(69);
    // cout << "Health of player " << h1.name << " is: " << h1.getHealth() << endl;

    // h1.setLevel('A');
    // cout << "Level of player " << h1.name << " is: " << h1.getLevel() << endl;

    // cout << "--------------------------------------------------------------------------------\n";
    // // dynamic allocation
    // Hero *ptr = new Hero;
    // ptr->setHealth(100);
    // ptr->setLevel('C');

    // cout << "Health of dynammic allocated player is:" << ptr->getHealth() << endl;
    // cout << "Level of dynammic allocated player is:" << ptr->getLevel() << endl;

    // cout << "---------------------------------------------------------------------------------\n";
    // // implementing parametarised constructor
    // Hero Pratik(30);
    // cout << "Health of Pratik is: " << Pratik.getHealth() << endl;

    // cout << "---------------------------------------------------------------------------------\n";
    // Implmenting copy Constructor

    // Hero S(50, 'D');
    // S.print();

    // Hero R(S);
    // R.print();

    // shallow copy
    Hero hero1;

    hero1.setHealth(80);
    hero1.setLevel('E');

    char name[10] = "Pratik";
    hero1.setName(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'K';
    hero1.print();
    hero2.print();
    // This is a issue  of shallow copy so we need to make a deep copy by using a personalised copy constructor which is quite easy and implemnetable.

    cout << "-----------------------------------------------------------------------------------\n";
    // Implmenting static memeber
    // cout << Hero::timeToComplete << endl;

    Hero::random();

    return 0;
}
