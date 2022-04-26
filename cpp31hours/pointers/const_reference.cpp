#include<iostream>

int main(){

    //Non Const
    int age{27};
    int r_age{age};

    std::cout<<"Age:"<<age<<std::endl;
    std::cout<<"Ref Age:"<<r_age<<std::endl;

    //Can Modify original variable without const
    r_age++;
    const int * const p_age{&age};
    //It will complie error
    //*p_age=77;
    return 0;
}