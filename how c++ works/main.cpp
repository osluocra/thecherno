#include <iostream>
#include "log.h"


using namespace std;

#define LOG(x) cout << x << endl

enum Example{
    a, b, c
};


class Player{
    public:
        int x,y;
        int speed;
    
        void move(int xa, int ya){
            x+=xa * speed;
            y+=ya * speed;
        }

};


class Log{
    public:
        enum LogLevel: int {
            Error=0, Warning, Info
        };

        // const int logLevelError=0;
        // const int logLevelWarning=1;
        // const int logLevelInfo=2;
    
    private:
        //int m_LogLevel= logLevelInfo;
        LogLevel m_LogLevel= Info;
    public:
        void setLevel(LogLevel level){
            m_LogLevel=level;
        }

        void error(const char* message){
           if(m_LogLevel >= Error) 
            cout << "[ERROR]:" << message << endl;
        }

        void warning(const char* message){
            if(m_LogLevel >= Warning)
               cout << "[WARNING]:" << message << endl;
        }

        void info(const char* message){
            if(m_LogLevel >= Info)
                cout << "[INFO]:" << message << endl;
        }

};


//it works with both declarations
//void log(const char* message); 
//void log(const char*);

void printSizeOf(){
    LOG("Inside printSizeOf function");
    int i =9;
    long l =9l;
    float f =8.4f;
    double d = 8.5;



    cout << "Running from main2" << endl;

    cout << " l size of: " << l << sizeof(l) << endl;
    cout << " f size of: " << f << sizeof(f) << endl;
    cout << " d size of: " << d << sizeof(d) << endl;
    i=10;
    l=20l;
    
}


void pointers(){
  int a=15;
    int* ptr = &a;

    *ptr=10;
  
}

void incrementByRef(int& valor){
    valor++;
}

void incrementByPointer(int* valor){
    (*valor)++;
}


void usingClasses(){
    LOG("Inside using classes");
    Player p1;
     p1.move(1,-1);

}


void function_static_local(){
    static int counter=0;
    counter++;
    cout << "counter:" << counter << endl;
}


int main(){

  //usingClasses();

//   function_static_local();
//   function_static_local();
//   function_static_local();
//   function_static_local();
    
    // Example valueEnum = b;
    // cout << "valor de b:" << b << endl;

    Log log;
    log.setLevel(Log::Info);
    log.error("Hello!");
    log.info("Hello!");
    log.warning("Hello!");



    return 0;
#include "closeBracket.cpp"