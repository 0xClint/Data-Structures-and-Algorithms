#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    // Hero()
    // {
    //     cout << "this is Constructor " << endl;
    // }

    // Parameterised Constructor
    // Hero(int health, char level)
    // {
    //     cout << "this -> " << this << endl;
    //     this->health = health;
    //     this->level = level;
    // }

    // Copy Constructor
    // Hero(Hero &temp)
    // {
    //     health = temp.health;
    //     level = temp.level;
    // }

    void print()
    {
        cout << "[ Name = " << name << " | level = " << level << " | health = " << health << " ]" << endl;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char c)
    {
        level = c;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    // Static Allocation
    // Hero suresh(71, 'Z');
    // cout << "address of suresh -> " << &suresh << endl;
    // suresh.print();

    // suresh.setHealth(80);
    // suresh.setLevel('C');
    // cout << "Suresh health is " << suresh.getHealth() << endl;
    // cout << "Suresh level is " << suresh.level << endl;

    // Dynamic Allocation
    // Hero *b = new Hero(72, 'S');
    // (*b).setHealth(75);
    // (*b).setLevel('B');
    // b->print();
    // cout << "Suresh health is " << (*b).getHealth() << endl;
    // cout << "Suresh level is " << b->level << endl;

    // Hero S(10, 'B');
    // S.print();
    // // Hero R = S;
    // Hero R(S);
    // S.print();

    Hero hero1;

    hero1.setLevel('S');
    char name[3] = "MC";
    hero1.setName(name);
    hero1.setHealth(69);
    cout << "Suresh health is " << hero1.getHealth() << endl;

    hero1.print();
}