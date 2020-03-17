#include <iostream>
#include "log.h"

using namespace std;

//it works with both declarations
//void log(const char* message); 
void log(const char*);

void printSizeOf(){
    int i =9;
    long l =9l;
    float f =8.4f;
    double d = 8.5;


    cout << " i size of: " << i << sizeof(i) << endl;
    cout << " l size of: " << l << sizeof(l) << endl;
    cout << " f size of: " << f << sizeof(f) << endl;
    cout << " d size of: " << d << sizeof(d) << endl;
}

int main(){
    
    log("Hello World from main!");
    printSizeOf();
    return 0;
#include "closeBracket.cpp"