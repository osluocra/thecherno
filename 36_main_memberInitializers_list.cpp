/****
* The Cherno Video #36 Member Initializers List
https://www.youtube.com/watch?v=ijIxcB9qjaU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=36



*/


#include <iostream>
#include <string>


class Example{
    private:
        int age;
    public:
        Example(){
            std::cout << "Constructor Example()" << std::endl;
        }    

        Example(int p_age ):age(p_age){
            std::cout << "Constructor Example(int)" << age << std::endl;
        }

};


class EntitiyBadExample{
  public:  
    int score;
    std::string name;
    Example example;

    EntitiyBadExample(){
        score=0;
        name="UNKNOWN";
    }

    EntitiyBadExample(int p_score, std::string p_name){
        score=p_score;
        name=p_name;
        example=Example(40);
    }


};

class EntitiyGoodExample{
  public:  
    int score;
    std::string name;
    Example example;

    EntitiyGoodExample():score(0),name("UNKNOWN"),example(40){
        
    }

    EntitiyGoodExample(int p_score, std::string p_name):score(p_score), name(p_name), example(Example(40)){
        
    }


};

int main(){

    std::cout << "Video 36. Member Initializer variables" << std::endl;

   // EntitiyBadExample badExample=EntitiyBadExample();
    //std::cout << "badExample.name:" <<  badExample.name << std::endl;

    EntitiyBadExample badExampleP = EntitiyBadExample(45, "Oscar");
    //std::cout << "badExampleP.name:" <<  badExampleP.name << std::endl;
    

    //EntitiyGoodExample goodExample;

    return 0;



}
