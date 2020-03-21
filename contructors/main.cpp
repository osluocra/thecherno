#include <iostream>

using namespace std;

/*
  ****The Cherno videos included:
    * constructors:
    * destructors: https://www.youtube.com/watch?v=D8cWquReFqw&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=26

*/

class Point{

  private:
    int x,y;

 public:
    Point(){
        cout << "calling constructor() " << endl;
        x=0;
        y=0;
    }

    Point(int px, int py){
        cout << "calling constructor (x,y)" << endl;
        x=px;
        y=py;
    }

    ~Point(){
        cout << "Destroying object Point" << endl;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }
};


int main(){
    Point a;

    cout << "a(x,y):" << a.getX() << "," << a.getY() << endl;



    return 0;

}