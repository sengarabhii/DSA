#include<iostream>
// #include "hero.cpp"
using namespace std;
class hero{
    
    public:
    int health;
    char level;
    char* name ;
    //simple constructor
    // hero(){
    //     cout << "hello";
    // }
    //parameterised constructor
    hero(int health){
        this->health = health;
    }
    hero(int health,char level,char* name){
        this->health = health;
        this->level = level;
        this->name = name;
    }
    //copy constructor
    //here below & is used because if we don't use it then a temporary copy is created for function and for copying again copy constructor will be called so it will form infinite like loop
    hero(hero& temp){
        this->health = temp.health;
        this->level = temp.level;
        this->name = temp.name;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char l){
        level = l;
    }
    void print(){
        cout << "health is " << health <<endl;
        cout << "level is " << level <<endl;
        cout << "name is " <<name <<endl;
    }
};
int main(){
    // hero abhishek(10);
    hero nikhil(100,'A',"abhishek");
    hero abhi(nikhil);
    nikhil.print();
    abhi.print();
    // cout <<abhishek.gethealth() <<endl;
    // cout <<abhishek.getlevel() <<endl;
    // cout <<nikhil.gethealth() <<endl;
    // cout <<nikhil.getlevel() <<endl;

}