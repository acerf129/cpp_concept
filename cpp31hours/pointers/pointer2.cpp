#include <iostream>

int main(){

    //with STACK call *p_int = &variable or &int
    //with Heap call *p_int=new int ; *p_int =variable or int 

    int *p_number4{nullptr};
    p_number4 = new int;
    /*Dynamic alloacate space for a single
    int on the heap.The memory belongs to our program.
    Under this command, I will have the valid memmory location 
    allocated. 
    */
    *p_number4 = 79;
    std::cout<<"Dynamic Memory: "<< *p_number4<<std::endl;
    *p_number4 =898;//Writing in dynamic allocated memory
    std::cout<<"Dynamic Memory: "<<*p_number4<<std::endl;
    //***Return Memory to the OS****
    delete p_number4;
    p_number4 = nullptr;    
    //And Reset Memory
    

    //Reuse Pointers
    p_number4=new int;
    *p_number4=68;
    std::cout<<"Dynamic Memory: "<<*p_number4<<std::endl;
    
    //Faster Way to Initialize Pointer with valid address 
    int *p_number5{new int };
    int *p_number6{new int {37}};
    int *p_number7{new int {741}};
    std::cout<<"Pointer 5: "<<p_number5<< std::endl;
    std::cout<<"*Pointer 5: "<<*p_number5<< std::endl;
    
    std::cout<<"Pointer 6: "<<p_number6<< std::endl;
    std::cout<<"*Pointer 6: "<<*p_number6<< std::endl;
    
    std::cout<<"Pointer 7: "<<p_number7<< std::endl;
    std::cout<<"*Pointer 7: "<<*p_number7<< std::endl;
    //***Return Memory to the OS****
    delete p_number4;
    p_number4 = nullptr;
    delete p_number5;
    p_number5 = nullptr;
    delete p_number6;
    p_number6 = nullptr;
    delete p_number7;
    p_number7 = nullptr;
    return 0;
}