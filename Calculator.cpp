//Daniel Maithya
//ENE211-0018/2020

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
    int num1,num2,action;
    string add,subtract;

    cout<<"Please enter two numbers\nNUM 1: ";
    cin>>num1;
    cout<<"\nNUM 2: ";
    cin>>num2;

    cout<<"Choose action\n1.Add \n2.Subtract\n";
    cout<<"Enter action(1 or 2): ";
    cin>>action;

    if (action==1)
    {
        cout<<"The answer is: "<<num1+num2<<endl<<endl<<endl;
    }else
    cout<<"The answer is: "<<num1-num2<<endl<<endl<<endl;



    return 0;
}
