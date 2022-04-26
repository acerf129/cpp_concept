#include <iostream>

class Dog{
    //private by default
    public:
        std::string m_name;

};
struct Cat{
    public:
        std::string m_name;
};
struct Point{
    double x;
    double y;
};
void print_point(const Point& point){
    std::cout<< "point x : "<<point.x <<std::endl;
    std::cout<< "point y : "<<point.y <<std::endl;
}
int main(){
    Dog dog1;
    Cat cat1;
    dog1.m_name="Hulk";
    cat1.m_name="Kitty";
    std::cout<< "dog1: "<<dog1.m_name <<std::endl;
    std::cout<< "cat1: "<<cat1.m_name <<std::endl;

    Point point1;
    point1.x=10.57;
    point1.y=22;
    print_point(point1);
    point1.x=77.514;
    print_point(point1);
    return 0;
}