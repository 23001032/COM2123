#include <iostream>

using namespace std;

int main()
{int num1,num2,result,choice;
char again;
 do{
  cout<<"======================"<<endl;
  cout<<"MENU"<<endl;
 cout<<"======================"<<endl;
  cout<<"1.Add"<<endl;
  cout<<"2.Sbtract"<<endl;
  cout<<"3.Multiply"<<endl;
  cout<<"4.Divide"<<endl;
  cout<<"5.Modulus"<<endl;
  cout<<"======================"<<endl;
  cout<<"Enter your choice(1-5):";
  cin>>choice;
  cout<<"Enter integer number 1:";
  cin>>num1;
  cout<<"Enter integer number 2:";
  cin>>num2;

  switch(choice){
      case 1:
    result=num1+num2;
    cout<<"Result:"<<result<<endl;
    break;
     case 2:
    result=num1-num2;
    cout<<"Result:"<<result<<endl;
    break;
      case 3:
    result=num1*num2;
    cout<<"Result:"<<result<<endl;
    break;
      case 4:
        if(num2==0){
    cout<<"The second integer is zero,divide by zero."<<endl;
        }else{
             result=num1/num2;
             cout<<"Result:"<<result<<endl;
        }
        break;
      case 5:
        result=num1%num2;
        cout<<"Result:"<<result<<endl;
        break;
      default:
        cout<<"Invalid choice"<<endl;
  } cout<<"Press y or Y to continue:";
  cin>>again;

}while(again=='y' || again=='Y');
return 0;
}
