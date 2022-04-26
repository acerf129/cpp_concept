#include <iostream>
#include <cstring>

int main(){
    //Concatenation
    std::cout<<std::endl;
    std::cout<<"std::strcat"<<std::endl;

    char dest[50]="Hello";
    char src[50]="Kitty. ";
    std::strcat(dest,src);
    std::cout<<"Dest: "<<dest<<std::endl;
    std::strcat(dest,"Good Bye,Kitty.");
    std::cout<<"Dest: "<<dest<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Nore std::strcat"<<std::endl;
    char *dest1 =new char[30]{'f','e','r','e','p'};
    char *source1=new char[30]{',','T','h','e'};

    std::cout<<"strlen Dest1: "<<std::strlen(dest1)<<std::endl;
    std::cout<<"strlen source1: "<<std::strlen(source1)<<std::endl;

    std::cout<<"Concat: "<<std::strcat(dest1,source1)<<std::endl;
    delete[] dest1;
    dest1 =nullptr;
    delete[] source1;
    source1 =nullptr;

    //strncat n get len n  of value from src
    std::cout<<std::endl;
    std::cout<<"std::strcpy: "<<std::endl;
    const char * source3 ="C++ is a programming language.";
    char * dest3 = new char[std::strlen(source3)+1];

    std::strcpy(dest3,source3);
    std::cout<<"sizeof  Dest3: "<<sizeof(dest3)<<std::endl;
    std::cout<<"strlen Dest3: "<<std::strlen(dest3)<<std::endl;
    std::cout<<"Dest3: "<<dest3<<std::endl;

    std::cout<<std::endl;
    std::cout<<"std::strcpy: "<<std::endl;
    const char * source4 ="Hello";
    char  dest4 [] {'a','b','c','d','e','f','g','\0'};

    std::strncpy(dest4,source4,3);
    std::cout<<"dest4:"<<dest4<<std::endl;

    
    return 0;
}