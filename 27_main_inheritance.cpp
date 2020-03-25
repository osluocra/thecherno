#include <iostream>

using namespace std;

/*
    *** The cherno: Inheritance
    * Video 26: https://www.youtube.com/watch?v=X8nYM8wdNRE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=27
*/

class Entity{
 public:
    int x,y;
};


class Player : public Entity{
    private:
        const char* name;
    public:
        Player(){
            name="";
        }

        Player(const char* pname){
            name = pname;
        }

        void printName(){
            cout << "Players name:" << name << endl;
        }
};

int main(){
    
    cout << "sizeof(entity):" << sizeof(Entity) << endl;

    cout << "sifeof(Player):" << sizeof(Player) << endl;

    Player p("Oscar");
    p.printName();



    return 0;
}