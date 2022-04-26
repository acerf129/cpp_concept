#include<iostream>

int main(){
    int int_data{343};
    double double_data{55};

    //References 
    int& ref_int_data{int_data};
    double& ref_dou_data{double_data};

    //Print Data
    std::cout<<"int_data:"<<int_data<<std::endl;
    std::cout<<"&int_data:"<<&int_data<<std::endl;
    std::cout<<"ref_int_data:"<<ref_int_data<<std::endl;
    std::cout<<"&ref_int_data:"<<&ref_int_data<<std::endl;
    std::cout<<"====================="<<std::endl;
    std::cout<<"double_data:"<<double_data<<std::endl;
    std::cout<<"&double:"<<&double_data<<std::endl;
    std::cout<<"ref_dou_data:"<<ref_dou_data<<std::endl;
    std::cout<<"&ref_dou_data:"<<&ref_dou_data<<std::endl;
    std::cout<<"====================="<<std::endl;
    //Change Original Data Ref Data will Change
    int_data=545;
    double_data=65.89;
    //Print Data
    std::cout<<"int_data:"<<int_data<<std::endl;
    std::cout<<"&int_data:"<<&int_data<<std::endl;
    std::cout<<"ref_int_data:"<<ref_int_data<<std::endl;
    std::cout<<"&ref_int_data:"<<&ref_int_data<<std::endl;
    std::cout<<"====================="<<std::endl;
    std::cout<<"double_data:"<<double_data<<std::endl;
    std::cout<<"&double:"<<&double_data<<std::endl;
    std::cout<<"ref_dou_data:"<<ref_dou_data<<std::endl;
    std::cout<<"&ref_dou_data:"<<&ref_dou_data<<std::endl;
    std::cout<<"====================="<<std::endl;
    //Change Reference Data Will Change Cause same address
    ref_int_data=1014;
    ref_dou_data=410.34;
    std::cout<<"int_data:"<<int_data<<std::endl;
    std::cout<<"&int_data:"<<&int_data<<std::endl;
    std::cout<<"ref_int_data:"<<ref_int_data<<std::endl;
    std::cout<<"&ref_int_data:"<<&ref_int_data<<std::endl;
    std::cout<<"====================="<<std::endl;
    std::cout<<"double_data:"<<double_data<<std::endl;
    std::cout<<"&double:"<<&double_data<<std::endl;
    std::cout<<"ref_dou_data:"<<ref_dou_data<<std::endl;
    std::cout<<"&ref_dou_data:"<<&ref_dou_data<<std::endl;
    std::cout<<"====================="<<std::endl;
    
    //Declare pointer and reference
    double double_value{12.5};
    double& ref_double_value{double_value};
    double * p_double_value{&double_value};
    
    //Reading
    std::cout<<"Double Value: "<<double_value<<std::endl;
    std::cout<<"Ref Double Value: "<<ref_double_value<<std::endl;
    std::cout<<"Pointer Double Value: "<<p_double_value<<std::endl;
    std::cout<<"*Pointer Double Value: "<<*p_double_value<<std::endl;
    std::cout<<"====================="<<std::endl;
    //Writing through Pointer
    *p_double_value=153.789;
    std::cout<<"Double Value: "<<double_value<<std::endl;
    std::cout<<"Ref Double Value: "<<ref_double_value<<std::endl;
    std::cout<<"Pointer Double Value: "<<p_double_value<<std::endl;
    std::cout<<"*Pointer Double Value: "<<*p_double_value<<std::endl;
    std::cout<<"====================="<<std::endl;
    //Writing through Reference
    ref_double_value=45.89;
    std::cout<<"Double Value: "<<double_value<<std::endl;
    std::cout<<"Ref Double Value: "<<ref_double_value<<std::endl;
    std::cout<<"Pointer Double Value: "<<p_double_value<<std::endl;
    std::cout<<"*Pointer Double Value: "<<*p_double_value<<std::endl;
    std::cout<<"====================="<<std::endl;
    //Ref to other value address won't change
    double some_value{456.247};
    ref_double_value = some_value;
    std::cout<<"Double Value: "<<double_value<<std::endl;
    std::cout<<"Ref Double Value: "<<ref_double_value<<std::endl;
    std::cout<<"Pointer Double Value: "<<p_double_value<<std::endl;
    std::cout<<"*Pointer Double Value: "<<*p_double_value<<std::endl;
    std::cout<<"====================="<<std::endl;
    //Make pointer to something else only pointer address will change
    p_double_value = &some_value;
    //if change pointer value only pointer value will change
    //*p_double_value=213.00;
    std::cout<<"Double Value: "<<double_value<<std::endl;
    std::cout<<"Ref Double Value: "<<ref_double_value<<std::endl;
    std::cout<<"&Double Value: "<<&double_value<<std::endl;
    std::cout<<"&Ref Double Value: "<<&ref_double_value<<std::endl;
    std::cout<<"Pointer Double Value: "<<p_double_value<<std::endl;
    std::cout<<"*Pointer Double Value: "<<*p_double_value<<std::endl;
    std::cout<<"====================="<<std::endl;
    return 0;
}