/****
* The cherno Arryas
    Video# 31 - https://www.youtube.com/watch?v=ENDaJi08jCU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=31

*/

#include <iostream>
#include <array>


using namespace std;


class Entity{
    public:
        // it needs to be static const so compiler knows the value at compilation time
         static const int arraySize=5;
         int example[arraySize];

         std::array<int,arraySize> another;

         Entity(int initialValue){
             for(int i=0; i< arraySize;i++){
                 another[i]=initialValue ;
             }

         }
         void printArray(){
             cout<< "Printing std::array" << endl;
             for(int i=0; i< another.size();i++){
                 cout << another[i] << endl;
             }
         }

};


void initializeArray(int* example, int size, int initialValue){
    for(int i=0;i< size; i++){
        *(example+i)=initialValue;
    }
}

void printArray(int array[], int size){
    cout<< "Printing array" << endl;
    for(int i=0; i<size;i++){
        cout << array[i] << endl;
    }

}

int main(){

    int arrSize=5;

    //array created in the stack. Memory will be free once block is completed
    int example[arrSize];

    int arrayNumberOfElements = sizeof(example) / sizeof(int);

    cout << "arrayNumberOfElements:" << arrayNumberOfElements << endl;


    int* ptr=example;

    int* another= new int[arrSize];
    
    //free memory
    delete[] another;

    


    initializeArray(example,arrSize,0);

    example[2]=5;
    printArray(example,arrSize);

    *(ptr+2)=6;

    printArray(example,arrSize);

    Entity entity(1);
    entity.printArray();

    return 0;
}


