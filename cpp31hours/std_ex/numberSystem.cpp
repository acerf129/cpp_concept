#include <iostream>
#include <iomanip>
//**Binary Octo Hexadecimal**
int main(){
int number1 =15;//decimals Typically 4 bytes or more
int number2 =017 ;//octo
int number3 =0x0F;//hexadecimal
int number4 = 0b1111;//binary

std::cout<<"number1 : "<<number1<<std::endl;
std::cout<<"number2 : "<<number2<<std::endl;
std::cout<<"number3 : "<<number3<<std::endl;
std::cout<<"number4 : "<<number4<<std::endl;

//Bracket,Function,Assign Variable
//It may contains random value .warning 
int ele_count;
int lion_count{};//Initialized to 0
int dog_count{10};
int cat_count{15};

int domesticated_animals{dog_count+cat_count};
std::cout<< domesticated_animals<<std::endl;
std::cout<< ele_count<<std::endl;

//**Won't compile
// int bad_init{dontexist+dontexist2};

//int.Error or Warning 
//int narrowing_conversion{2.9};

//Information lost
//Information lost less safe than braced initializaiton{} express 2
//int narrow_conversion(2.9) or =2.9;

//Function Ititialization
int apple_count{5};
int oraneg_count{15};
int fruit_count(apple_count+oraneg_count);
std::cout<<"Apple Count : " <<apple_count<<std::endl;
std::cout<< "Orange Count : " <<oraneg_count<<std::endl;
std::cout<< "Fruit Count : " <<fruit_count<<std::endl;
std::cout<< sizeof(int)<<std::endl;//4 byte
std::cout<< sizeof(fruit_count)<<std::endl;//4 byte

//** Float Double Long double
/*unsigned int + 4294967295
short 2 bytes
 int long 4 bytes
long long 8 bytes*/

//Declare
float num1  {1.12345678901234567890f};
double num2 {1.12345678901234567890};
long double num3 {1.12345678901234567890L};
//print Size
std::cout<< "size of float :" << sizeof(float)<<std::endl;//4 byte 7digits
std::cout<< "size of double :" << sizeof(double)<<std::endl;//8 byte 15digits
std::cout<< "size of long double:" << sizeof(long double)<<std::endl;//16 byte 15+digits
//print precision
std::cout<<std::setprecision(20);
std::cout<< "number 1 :" << num1<<std::endl;//4 byte
std::cout<< "number 2 :" << num2<<std::endl;//8 byte
std::cout<< "number 3 :" << num3<<std::endl;//8 byte

//e =10 **
std::cout<<"---------------------------"<<std::endl;
double num5{192400023};
double num6{1.92400023e8};
double num7{1.924e8};
double num8{0.00000000003498};
double num9{3.498e-11};
std::cout<< "number 5 :" << num5<<std::endl;
std::cout<< "number 6 :" << num6<<std::endl;
std::cout<< "number 7 :" << num7<<std::endl;
std::cout<< "number 8 :" << num8<<std::endl;
std::cout<< "number 9 :" << num9<<std::endl;

double num10{-5.6};
double num11{};//0
double num12{};//0

//Infinity Avoid
double result {num10/num11};
std::cout<< num10<<"/"<<num11<<"  yield  "<<result<<std::endl;
std::cout<< result<<"+" << num10<<"  yield  "<<result+num10<<std::endl;

//NaN
result = num11/num12;

std::cout<< num11<<"/"<<num12<<"  yield  "<<result<<std::endl;

return 0 ;
}