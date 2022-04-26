#include<iostream>

using namespace std;

int main()
{
    char ch1{'a'};
    char ch2{'r'};
    char ch3{'r'};
    char ch4{'o'};
    char ch5{'w'};

    cout<<ch1<<endl;
    cout<<ch2<<endl;
    cout<<ch3<<endl;
    cout<<ch4<<endl;
    cout<<ch5<<endl;
    //One Byte in memory 2^8 256
    //ASCII character code for A Z
    char value =65;
    char value2 =90;
    cout <<"value : "<<value <<endl;
    cout <<"value (int): "<<static_cast<int>(value) <<endl;
    cout <<"value2 : "<<value2 <<endl;
    cout <<"value2 (int): "<<static_cast<int>(value2) <<endl;
    
    //43232
    return 0;
}

