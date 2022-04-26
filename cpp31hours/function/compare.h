#include "compare.cpp"
int max(int a, int b);
int min(int a, int b);
// void sayAge(int age);
void sayAge(int*age);
void sayAge(int&age);
void max_str(const std::string& input1,const std::string input2,
            std::string& output);
void max_int(int input1, int input2 ,int& output);

int sum(int a,int b);
std::string add_string(std::string str1,std::string str2);
//template
template <typename T>
 const T& maximum (const T& a,const T& b);
// template <>
//  const char * maximum<const char*>(const char* a,const char* b);

template<typename T>
 T multiply(T a,T b);