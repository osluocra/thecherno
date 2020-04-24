/****
* The Cherno Video #38 How to create instatiate objects in c++
https://www.youtube.com/watch?v=ijIxcB9qjaU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=38



*/
#include  <iostream>
#include <string>

using String = std::string;

class Entity{
    private:
        String m_name;
    public:
        Entity() : m_name("Unkown"){
            std::cout << "Calling default constructor: " << m_name << std::endl;
        };

        Entity(const String& p_name) : m_name(p_name){
            std::cout << "Calling constructor with name:" << m_name << std::endl;
        };

        const String& getName() const{
            return m_name;
        }


        
};

int main(){
    std::cout << "Video 38. How to create/instantiate objects" << std::endl;

    Entity* sp1;
    Entity* sp2;
    Entity* sp3;
    {    
        //Created in the Stack
        //allocate if the stack if number of objects is not too many (thousands )
        Entity e1;
        

        Entity e2("Oscar");
        Entity e3 = Entity("Juany");

        sp1=&e1;
        sp2=&e2;
        sp3=&e3;
        
            std::cout << e1.getName() << std::endl;
            std::cout << e2.getName() << std::endl;
            std::cout << e3.getName() << std::endl;

            std::cout << "sp1 address: " << sp1->getName() << std::endl;

            std::cout << "sp2 address: " << (*sp2).getName() << std::endl;

    }

        std::cout << "sp3 address: " << sp3->getName() << std::endl;



    Entity* hp;
    {
        
        Entity* ph_e1 =  new Entity("New Oscar");
        hp=ph_e1;

        std::cout << "hp:" << hp->getName() << std::endl;
        std::cout << "(*hp):" << (*hp).getName() << std::endl;


        

    }

    delete hp;


    return 0;
}