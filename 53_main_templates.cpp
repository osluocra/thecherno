#include <iostream>
#include <string>


using namespace std;

//it can be class or typename
//template <class T>
template <typename T>
void Print(T value){
    cout << value << endl;
}


template<typename T, int N>
class Array{
    private:
        T m_Array[N];
    public:
        int getSize() const{
            return N;
        }
};

int main(){

    cout << "Welcome to templates" << endl;

    // Print("Printing from a template");
    Print(10);
    // Print(5.5);

    Array<string, 100> array;
    Print(array.getSize());

    
    return 0;
}