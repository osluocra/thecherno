/** Video 42 This
 * 
 * 
 * 
 * */
 

#include <iostream>

void PrintEntity(Entity& entity);

class Entity{
    public:
        int x, y;

    Entity(int x, int y){
        this->x = x;
        (*this).y = y;

        printEntity(this);

    }    
};


void printEntity(Entity&){
    std::cout << "printing entity from constructor" << std::endl;
    
}
int main(){

    
    return 0;
}

