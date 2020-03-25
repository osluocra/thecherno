/***
* The cherno video #Visibility C++
 * https://www.youtube.com/watch?v=6OVQ8nh3KP0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=30
 * 
 * 
 */


#include <iostream>

using namespace std;

class Entity{
   protected:
    int x,y;

    void print(){
        cout << x << "," << y << endl;

    }
};

class Player: public Entity{
    public:
        Player(){
            x=2;
            y=1;
            print();
        }

};


int main(){
    Player p;
    

    return 0;
} 

