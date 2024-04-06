#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    int choice,ch;
    do{
        cout<<"Enter Choice: "<<endl;
        cout<<"1 for Addition"<<endl<<"2 for Subtraction"<<endl<<"3 for Multiplication"<<endl<<"4 for Division"<<endl;
        cin>>choice;
        cout<<"Enter First Number: "<<endl;
        cin>>num1;
        cout<<"Enter Second Number: "<< endl;
        cin>>num2;
          switch(choice){
            case 1:
                cout<<"Addition of "<< num1<<" and "<< num2<<" is "<< num1+num2<<endl;
                break;
            case 2:
                cout<<"Subtraction of "<< num1<<" and "<< num2<<" is "<< num1-num2<<endl;
                break;
            case 3:
                cout<<"Multiplication of "<< num1<<" and "<< num2<<" is "<< num1*num2<<endl;
                break;
            case 4:
                cout<<"Division of "<< num1<<" and "<< num2<<" is "<< num1/num2<<endl;
                break;
            default:cout<<"Invalid Choice";
        }
        cout<<"Press 1 to continue 0 to exit";
        cin>>ch;
    }while (ch);
   
}