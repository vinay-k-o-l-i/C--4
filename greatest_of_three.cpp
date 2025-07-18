#include<iostream>
using namespace std;
int main() {
    int num1,num2,num3;
    cout<<"enter the value of num1:";
    cin>>num1;
    cout<<"Enter the value of num2:";
    cin>>num2;
    cout<<"Enter the value of num3:";
    cin>>num3;
    if (num1>=num2 && num1>=num3 )
{
    cout<<" num1 is grater than num2 and num3";
}    
    else if (num2>=num1 && num2>=num3)
    {
        cout<<"num2 is grater than num1 and num";
    }
    else{
        cout<<"num3 is grater than num1 and num2";
    }
}
/*PS C:\Users\CL301_11\Desktop\exp02> cd "c:\Users\CL301_11\Desktop\exp02\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
enter the value of num1:5
Enter the value of num2:7
Enter the value of num3:3
num2 is grater than num1 and num*/
