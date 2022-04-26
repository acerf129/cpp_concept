#include <iostream>
#include<cmath>
int main()
{
    string characterName="John";
    int age = INT_MAX;
    int age2 =INT_MIN;
    char grade='A';
    string phrase = "Academy";
    float gpa =4.5333;
    double gpa2=4.5;
    bool isMale=true;
    string phrasesub =phrase.substr(2,4);

    std::cout<<pow(2,5)<<std::endl;
    std::cout<<sqrt(49)<<std::endl;
    std::cout<<round(4.5)<<std::endl;
    std::cout<<ceil(4.1)<<std::endl;
    std::cout<<floor(4.1)<<std::endl;
    std::cout<<fmax(3,20)<<std::endl;
    std::cout<<fmin(3,20)<<std::endl;
    
    std::cout << "There once was a man named"<<characterName << std::endl;
    std::cout <<age<< std::endl;
    std::cout << age2 << std::endl;
    std::cout << grade << std::endl;
    std::cout << phrase.find("aa") << std::endl;
    std::cout<< phrasesub ;
    
    return 0;
}