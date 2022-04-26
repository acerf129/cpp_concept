#include <iostream>

int main(){
    
    int *p_number {new int{57}};
    //Should delete and reset before pointing 
    
    int number{55};
    p_number = &number;//It will point to 55 but 57 is leak
    std::cout<<"p_number: "<<p_number<<std::endl;
    std::cout<<"Program End .."<<std::endl;

    int *p_number1 {new int{77}};

    p_number1 = new int {47};//77 will be leaked

    //It is essential
    //delete p_number1
    //p_number1 = nullptr

    //Nested 
    {
        int *p_number2 {new int {24}};

        //Use dynamic memory
    }
    //int {57} will be leaked

    std::cout<<"Program End .."<<std::endl;
    return 0;

}