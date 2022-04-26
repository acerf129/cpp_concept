#include <iostream>
using namespace std;

int main(){
    //Declaring Pointers
    int * p_number{};
    double * p_double{};

    //Explicitely initializeto nullptr
    //don't use pointer that contains null pointer
    int * p_number1{nullptr};
    int * p_double1{nullptr};

    cout << "Size of Pointer: "<<sizeof(p_number)<<endl;
    cout << "Size of Pointer2: "<<sizeof(p_double)<<endl;
    cout << "Size of Pointer3: "<<sizeof(p_number1)<<endl;
    cout << "Size of Pointer4: "<<sizeof(p_double1)<<endl;

    int*p_number2{},*other_int{};
    int *p_number3,*other_int2{};
    cout << "Size of p_number2: "<<sizeof(p_number2)<<endl;
    cout << "Size of other_int: "<<sizeof(other_int)<<endl;
    //with STACK call *p_int = &variable or &int
    //with Heap call *p_int=new int ; *p_int =variable or int 
    int int_var {42};
    int *p_int{&int_var};//The Address of Pointer &
    cout << "Int var: "<<int_var<<endl;
    cout << "Int var: "<<&int_var<<endl;
    cout << "p_int(Address): "<<p_int<<endl;

    int int_var1 {66};
    p_int = &int_var1;
    cout << "p_int(Address): "<<p_int<<endl;

    //Dereferencing a poingter : add * before pointer
    int *p_int2{nullptr};
    int int_data{57};
    p_int2 = &int_data;
    cout<<"Value of int_data= *(*p_int2): "<<*p_int2<<endl;
    cout<<"Value of int_data= *&int_data: "<<*&int_data<<endl;

    //Make Sure use const to get the  address
    const char * message[]{"Hello World"};
    cout <<"Messages: "<<message<<endl;
    //*message='B' compile Error
    cout <<"Dereferencing Messages: "<<*message<<endl;
    //Allow users to modify the string 
    char message1[]{"Hello World"};
    message1[6]='K';
    message1[7]='I';
    message1[8]='T';
    message1[9]='T';
    message1[10]='Y';
    cout <<"message1: "<<message1<<endl;
    return 0;
}
