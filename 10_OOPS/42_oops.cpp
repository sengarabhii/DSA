#include<iostream>
using namespace std;
class Hero{
    //by default it is private it should be public if you want to access them directly outside this class unless using of getter and setter,statement below public: will be change to public 
    int health;
    public:
    char level;

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int val){
        health = val;
    }
    void setlevel(char ch){
        level = ch;
    }
};
int main(){
    //static allocation
    Hero Ramesh;
    // cout << sizeof(Hero);
    // // Ramesh.health = 70;
    // Ramesh.level = 'A';
    // cout << "Health : " << Ramesh.health <<endl;
    // cout << "level : " << Ramesh.level;
    Ramesh.setlevel('A');
    Ramesh.sethealth(80);
    cout << Ramesh.getlevel() <<endl;
    cout << Ramesh.gethealth();
    //dynamic allocation
    Hero *b = new Hero;
    (*b).sethealth(70);
    (*b).level = 'C';
    cout << "health is " << (*b).gethealth() <<endl;
    cout << "level is " << (*b).level <<endl;
    //or if we don't want to use dereference operator
    b->sethealth(30);
    b->level = 'D';
    cout << "health is " << b->gethealth() <<endl;
    cout << "level is " << b->level;

    return 0;
}