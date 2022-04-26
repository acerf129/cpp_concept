#include <iostream>
#include "shape.cpp"
#include "oval.cpp"
#include "circle.cpp"

void draw_Shape(Shape * s){
    s->draw();
};
void draw_Shape_v1(const Shape & s_r){
    s_r.draw();
}

int main(){
    Shape shape1("Shape1");
    //shape1.draw();
    Oval Oval1(3.3,2.6,"Oval1");
    //Oval1.draw();
    Circle Circle1(3.3,"Circle1");
    //Circle1.draw();

    //Base Pointer and Reference
    //Static Binding By Default 
    //Only Check the pointer By Shape 
    //Use Virtual method will be dynamic binding
    //Shape draw()
     Shape * shape_ptr =&shape1; //Pointer 8 bytes
    // shape_ptr->draw();   
    // shape_ptr = &Oval1;
    // shape_ptr->draw();
    // shape_ptr = &Circle1;
    // shape_ptr->draw();
    // Shape & shape_ref = Oval1;
    // shape_ref.draw();//Oval ::draw()
    Shape* shape_collecions[]{&shape1,&Oval1,&Circle1};
        for(Shape* ptr : shape_collecions)
            ptr->draw();
    //Shape& shape_collecions2[]{shape1,Oval1,Circle1};
    //Won't compile reference is not left assignable


    //shape_ptr->get_x_radius();not work on shape (not virtual)
    //draw_Shape_v1(Circle1);//Still Dynamic Binding
    

    return 0;
}