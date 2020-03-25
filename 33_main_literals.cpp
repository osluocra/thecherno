/**** The cherno Video#33 Literals
*  https://www.youtube.com/watch?v=FeHZHF0f2dw&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=33
*
*
*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;




void print(const char* label, const char* str){
    cout << label << ":" << str << endl;
}

void print(const char* label, int num){
    cout << label << ":" << num << endl;
}

int main (){

//string literal: set of characters 

    // "oscar"; // consts char[6]

    const char name[7]="osca\0r";

    cout << name << endl;
    print("name", name);
    
    print ("strlen", strlen(name));

    


    const char* nameconstptr="oscar";
    print("nameconstptr", nameconstptr);
    
    //not allowed due it is a read only variable
    // nameconstptr[2]='C';

        //to eliminate the warning on compilers +11 it would need to be casted char* name =(char*) "RAMON";
        //u8
      char* nameptr = "RAMON"; 
      //this will cause unexpected behaviour. To make it work it would need to be defined as 
      //nameptr[2]='C';    
     //print("nameptr", nameptr);

    print("wchar_t size", sizeof(wchar_t));
    
    const wchar_t* name2 =L"Oscar"; //up to the compiler to define, 2 windows 4 bytes mac/linux

    //const char16_t* namechar16 = L"Oscar";
    //const char32_t namechar32[] = U"Oscar";


    return 0;


}