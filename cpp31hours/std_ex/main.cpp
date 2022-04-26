#include<iostream>
#include <string>
#include<compare>
using namespace std;

consteval int getvalue(){
    return 3;
}
int main([]){
    // set value from function
    int value = getvalue();
    int first {13};
    int second {77};
    cout << "First Num: "<< first<<endl;
    cout << "Second Num: "<< second<<endl;


    //cin cerr cout clog three way comparison
    auto result = (10 <=> 20)>0;
    cout << result <<endl;
    cout << value << endl;
    cerr << "output: someting wrong" <<endl;
    clog<< "output:This is a log message" <<endl;
    /*
    int age =21;
    string name;
    cout<<"Hello C++20" << endl;
    cout<<"Input Your Name: " << endl;
    cin >> name ;
    cout<< "Hi ,Your name is "<< name <<" and Age is : "<< age <<endl;
    */
    //Data with spaces
    string fullName;
    int age3;
    cout << "Please Input Your Name And Age"<<endl;
    getline(cin,fullName);
    cin >>age3;
    cout << "Hello: "<<fullName<<"You are "<<age3<<" years old!"<<endl;
    return 0 ;
}
