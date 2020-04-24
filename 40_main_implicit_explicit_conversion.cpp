/****
* The Cherno Video #40 -Implicit conversion and explicit conversion

https://www.youtube.com/watch?v=ijIxcB9qjaU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=40


*/

#include <iostream>
#include <string>

using String = std::string;

class Entity{
    private:
        std::string m_name;
        int m_age;
     public:
        

        Entity(const std::string& name):m_name(name), m_age(-1){

        }   

        explicit Entity (int age):m_name("Unkown"),m_age(age){

        }


        

};

void printEntity(const Entity& entity){

}
int main(){

    Entity eName= Entity("Oscar");
    //it wont compile as constructor is explicit
    
    //Entity eAge=22;

    Entity eName2=std::string("Luis");

    //it won't compile due to constructor is explicit
     //   printEntity(22);

    printEntity(String("Oscar"));

    return 0;
}
