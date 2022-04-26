int max(int a, int b){
    if (a>b)
        return a;
    else 
        return b;
};
int min(int a, int b){
    if (a>b)
        return b;
    else 
        return a;
};
//Overload
// void sayAge( int age){
//     ++age;
//     //Diff address than it was pass
//     std::cout<<"Hello you are "<<age<<"Years old. Address "<<&age  <<std::endl;
// }
void sayAge( int*age){
    ++(*age);
    //Sme address than it was pass
    std::cout<<"Hello you are "<<*age<<"Years old. Address "<< &age<<std::endl;
}
void sayAge( int& age){
    ++age;
    //Diff address than it was pass
    std::cout<<"Hello you are "<<age<<"Years old. Address "<<&age  <<std::endl;
}
void max_str(const std::string& input1,const std::string input2,
            std::string& output)
{
    if(input1>input2)
        output= input1;
    else
        output= input2;
}
void max_int(int input1, int input2 ,int& output){
    if (input1>input2)
        output=input1;
    else
        output= input2;
}
int sum(int a,int b){
    int result = a+b;
    return result;
}
std::string add_string(std::string str1,std::string str2){
    std::string result =str1+str2;
    std::cout<<"In &Result string : "<<&result<<std::endl;
    return result;
}
template <typename T>
 const T& maximum (const T& a,const T& b){
    return (a>b)? a:b;
}
// template <>
// const char * maximum<const char*>(const char* a,const char* b){
//     return (std::strcmp(a,b)>0 )?a:b ;
// }

template<typename T>
T multiply(T a,T b){
    return a*b;
}