#include <iostream>
#include <memory>
#include "shape.cpp"
#include "oval.cpp"
#include "circle.cpp"

int main(){  
    //Comparing object sizes
    //std::cout<<"sizeof(Shape) : "<<sizeof(Shape)<<std::endl;//32   
    //std::cout<<"sizeof(Oval) : "<<sizeof(Oval)<<std::endl;   //48
    //std::cout<<"sizeof(Circle) : "<<sizeof(Circle)<<std::endl;//48

    //Slicing (Outer class will be sliced :oval circle)
    Circle circles4{3.3,"Circle"};
    //Shape shape1=circles1;   
    //std::cout<<"sizeof(circle1) : "<<sizeof(circle1)<<std::endl;
    //std::cout<<"sizeof(shape1) : "<<sizeof(shape1)<<std::endl;
    //shape1.draw();

    Shape shape2("Shape1");
    shape2.draw(24);

    Circle circle1(7.5,"Circle1");
    circle1.draw();
    circle1.draw(22);
    Oval oval1(7.5,6.3,"oval1");
    oval1.draw();
    oval1.draw(33);
    oval1.draw(33,"Red");
    Circle circle2(17.5,"Circle2");
    Oval oval2(27.5,6.3,"oval2");
    Circle circle3(37.5,"Circle3");
    Oval oval3(47.5,6.3,"oval3");

    //Slicing
    // Shape shapes[]{circle1,oval1,circle2,oval2,circle3,oval3};
    // std::cout<<"sizeof(circle1) : "<<sizeof(circle1)<<std::endl;
    //     for (Shape& s : shapes){
    //         std::cout<<"sizeof(object) : "<<sizeof(s)<<std::endl;
    //     }
    //Pointer 
    // Shape* shape_collecions[]{&shape2,&oval1,&circle1,&circle2,&oval2,&circle3,&oval3};
    //     for(Shape* ptr : shape_collecions){
    //         ptr->draw();
    //         std::cout<<std::endl;
    //     }

    //Compile Error :polymophism draw not in base level 
    //Shape * shape_ptr =new Shape(10,15,"circle1");
    //shape_ptr->draw(45,"Red");
    return 0;
}