#include <iostream>


class Entity{

    public:
        Entity(){
            std::cout << "Entity created" << std::endl;
        }

        ~Entity(){
            std::cout << "Entity destroyed" << std::endl;
        }


};


int* createArray(){
    //it wont work as array is created in the stack and destroy after function is called;
    int array[50];

    //it needs to be created in the heap
    //int* array=new int[50];

    return array;
    
}

class ScopedPtr{
    private:
        Entity* e;
    public:
        ScopedPtr(Entity* pe):e(pe){
            //std::cout << "ScopedPtr created" << std::endl;
        } 

        ~ScopedPtr(){
            //std::cout << "ScopedPtr destroyed" << std::endl;
            delete e;
        }




};


int main(){
    {

        int* myArray = createArray();
        //Entity* e = new Entity();
       // delete e;

       ScopedPtr ScopedPtr = new Entity();



    }

    return 0;
}