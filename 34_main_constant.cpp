
/**** The cherno Video#34 constant
*  https://www.youtube.com/watch?v=FeHZHF0f2dw&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=34
*
*
*/


#include <iostream>

using namespace std;


class Entity{
     //private by default
     int mX;
     int* ptrX, *ptrY;
     mutable int var; //indicate var can be modified inside a const method

     public:

     int getX() const { //const: promise not to change the value of membervariables
         // mX=10; invalid as method declared as const. 
        var=2; //must be declared as mutable

         return mX;
     }

      
      const int* const getPtrX() const{
         return ptrX;
      }


      const int* const getPtrY() const{
          return ptrY;
      }

     void setX(int x){
         mX=x;
     }

};

void print(const Entity& e){  //in order to call the method getX when passing e as reference. getX must be declared const
    cout << e.getX() << endl;

}


int main(){

    const int  MAX_AGE=90;

     int* ptr = new int;

     *ptr=2;
    ptr = (int*) &MAX_AGE;
    //const int* ptr - cannot change the value of the pointer
    //*ptr =2; it won't compile

    

    cout << "ptr: " << *ptr << endl;

    int* const ptrconst= new int;

    //prtconst =(int*) &MAX_AGE; //cannot change the pointer reference


    //const int* is the same as int const*

    const int* const constptrconstprt = new int;

    //*constptrconstprt=10; //cannot change value
    //constptrconstprt= (int*) &MAX_AGE; //cannot change reference

    cout << "ptr: " << *ptr << endl;
    
    return 0;
}