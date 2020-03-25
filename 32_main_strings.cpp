/****
* The Cherno Video #How Strings works
https://www.youtube.com/watch?v=ijIxcB9qjaU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=32

string API reference: http://www.cplusplus.com/reference/string/string/

*/

#include <iostream>
#include <string>

using namespace std;

void printName( string& name){
    cout << name << endl;

}

int main(){
    const char* name="Oscar";

    char name2[6]={'o','c','h','o','a','\0'};
    
    char maternal_surname[]={'r','a','m','o','n',0};

    cout << "name:" << name << endl;
    
    cout << "name2:" << name2 << endl;

    cout << "maternal surname:" << maternal_surname << endl;


    string sname ="Oscar";

    cout << sname << endl;

    bool contains=sname.find("ca") != string::npos;
    int posIndex=sname.find("ca");

    cout << contains << endl;
    cout << posIndex << endl;

    string fullname= string("Oscar ") + string("Luis ") + string("Ochoa ") + "Ramon";
    printName(fullname);



    return 0;
}