/****
  * The Cherno 
  * video #28 Virtual Functions
    https://www.youtube.com/watch?v=oIV2KchSyGQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=28
  * video #29 - Pure virtual functions
*/

#include <iostream>
#include <string>

using namespace std;


class Entity{
    public:
        virtual string getName(){
            return "Entity";
        }
        
        virtual string getNamePure()=0;
};


class Player: public Entity{
    private:
        string m_Name;

    public:
        Player(const string& name): m_Name(name){

        }

        string getName() override {
            return m_Name;
        }

        string getNamePure() override{
            return m_Name;
        }

};

void printName(Entity* entity){
    cout << entity->getName() << endl;
}

int main(){
    Entity* e = new Player("Juany");
    printName(e);

    Player* p = new Player("Oscar");
    printName(p);

    Entity* entity = p;
    cout << entity->getName() << endl;



    return 0;
}