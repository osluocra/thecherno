/****
* The Cherno Video #56How Strings works
https://www.youtube.com/watch?v=ijIxcB9qjaU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=32



*/

#include <iostream>
#include <string>
#include <vector>
void printHelloWorld(){
    std::cout << "hello World no parameters" << std::endl;
}

void printHelloWorldP(std::string msg){
    std::cout << msg << std::endl;
}

void PrintValue(int value){
    std::cout << value << std::endl;
}

void ForEach(std::vector<int>& p_vector,void(*func)(int)){
    for(int valor : p_vector){
        //std::cout << valor << std::endl;
        func(valor);
    }
}

int main(){

    
    //auto function = &printHelloWorld;
    //no need for explict &
    //void(*function)(std::string);
    
    auto function =printHelloWorld;
    function=printHelloWorld;
    

    void(*oscarfunction)();
    oscarfunction=printHelloWorld;

    
    oscarfunction();
    

   typedef void(*helloWorldFunctionWithParameters)(std::string);
   
   helloWorldFunctionWithParameters myFunctWithP=printHelloWorldP;

    myFunctWithP("HelloWorld with parameters");


    std::vector<int> myVector;
    myVector.push_back(14);
    myVector.push_back(16);
    myVector.push_back(20);
    myVector.push_back(50);
    myVector.push_back(45);
    ForEach(myVector, PrintValue);

    //using Lambdas
    std::cout << "Printing using lambda" << std::endl;
    //it doesn't compile
    //ForEach(myVector, [](int value){std::cout << value << std::endl;});




    return 0;
}