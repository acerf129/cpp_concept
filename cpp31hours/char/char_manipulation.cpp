#include <iostream>

int main(){

    //Check alnum
    std::cout<<std::endl;

    std::cout<<"C is alphanumeric: "<<std::isalnum('C')<<std::endl;
    std::cout<<"^ is alphanumeric: "<<std::isalnum('^')<<std::endl;
    std::cout<<std::endl;
    //Can use this as a test condition
    char input_char{'*'};
    if(std::isalnum(input_char)){
        std::cout<<input_char<<"is a isalphanumeric: "<<std::endl;
    }else{
        std::cout<<input_char<<"is not  a isalphanumeric: "<<std::endl;
    }
    //Check if it's alphabetic
    std::cout<<"C is alphabetic: "<<std::isalpha('C')<<std::endl;
    std::cout<<". is alphabetic: "<<std::isalpha('.')<<std::endl;
    std::cout<<"7 is alphabetic: "<<std::isalpha('7')<<std::endl;
    
    //Check Blank count
    int blank_count{};
    char messages[]{"Hello Kitty. How are you doing ?"};
    for (size_t i{0};i<std::size(messages);++i){
        if (std::isblank(messages[i])){
            std::cout<<"Found a blank char: "<<messages[i]<<" at "<<i<<std::endl;
            blank_count++;
        }
    }
    std::cout<<"Blank Count: "<<blank_count<<std::endl;
    //std::
    //isblank
    //islower
    //isupper
    //isdigit
    //size
    //topupper
    //tolower

    //Find Length of string 
    const char messages1[]{"Sky is blue."};
    const char * messages2{"Sky is yellow."};
    std::cout<<"Messages1: "<< messages1<<std::endl;
    //Without Null
    std::cout<<"strlen1: "<<std::strlen(messages1)<<std::endl;
    //With Null
    std::cout<<"sizeof1: "<<sizeof(messages1)<<std::endl;
    
    //Still Work in decayed arrays Without Null
    std::cout<<"strlen2: "<<std::strlen(messages2)<<std::endl;
    //Print size of pointer
    std::cout<<"sizeof2: "<<sizeof(messages2)<<std::endl;

    //strncmp -signature int strcmp const lhs rhs
    //return negative value if lhs appears before rhs in lexicographical order
    std::cout<<"std::strcmp: "<<std::endl;
    size_t n{3};
    const char * string_data1{"Clamelo"};
    const char * string_data2{"Blamelo"};
    std::cout<<string_data1<<","<<string_data2<<": "
    <<std::strncmp(string_data1,string_data2,n)<<std::endl;
    std::cout<<"============="<<std::endl;

    string_data1 = "aniaa";
    string_data2 = "anica";
    std::cout<<string_data1<<","<<string_data2<<": "
    <<std::strncmp(string_data1,string_data2,5);

    //Find first occurance of a character
    std::cout<<std::endl;
    std::cout<<"std::strchr : "<<std::endl;

    const char * const str{"To do or not to do, That is a question."};
    char target {'T'};
    const char *result=str;
    size_t iteration{};
    while((result=std::strchr(result,target))!=nullptr){
        std::cout<< "Found "<<target<<" :starting at : "<<result<<std::endl;
        ++result;
        ++iteration;
    }
    
    //strrchr get the value from the last index
    std::cout<<"iteration : "<<iteration<<std::endl;

    std::cout<<std::endl;
    std::cout<<"std::strchr : "<<std::endl;

    char input [] = "/cpp31hours/arrays.cpp";
    char *output = std::strrchr(input,'/');
    if (output){
        std::cout<<output+1<<std::endl;
    }


    return 0;
}