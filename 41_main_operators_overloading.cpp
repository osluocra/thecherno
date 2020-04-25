/**
    Video 41 Operators overloading
*/


#include <iostream>
#include <string>


struct Vector2{
    float x,y;

    Vector2(float x, float y) : x(x), y(y){}

    Vector2 add(const Vector2& other) const{
        return *this + other;

    }

    Vector2 operator+(const Vector2& other) const{
        return Vector2(other.x +x, other.y +y);
    }

    Vector2 multiply(const Vector2& other) const{
        return *this * other;
    }


    Vector2 operator*(const Vector2& other)const{
       return Vector2(other.x * x, other.y * y);
    }

    bool operator==(const Vector2& other) const{
        return other.x == x && other.y == y;
    }

    bool operator!=(const Vector2& other)const{
        return !(*this == other);
    }
  
};


std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
    stream << other.x << "," << other.y;
    return stream;
}  

int main(){
    Vector2 position(3.0f, 3.0f);
    Vector2 speed (2.0f, 2.0f);
    Vector2 powerup(1.1f, 1.1f);

    Vector2 result = position.add(speed.multiply(powerup));
    Vector2 result2 = position + speed * powerup;

    
    
    std::cout << result.x << "," << result.y << std::endl;

    std::cout << result2 << std::endl;
    std::cout << (position==speed) << std::endl;
    std::cout << (position!=speed) << std::endl;



    return 0;
}