#include<iostream>
using namespace std;
int main(){
    float n1,n2,sum,sub,mil,div;
    char choice;
    cout<<"enter the value of n1 :";
    cin>>n1;
    cout<<"enter the value of n2 :";
    cin>>n2;
    cout<<"enter your choice (A:sum, B:sub, C:mil, D:div):";
    cin>>choice;
    switch(choice){
        case 'A' :
        sum=n1+n2;
        cout<<"sum is:"<<sum<<endl;
        break;
        case 'B' :
        sub=n1-n2;
        cout<<"sub is:"<<sub<<endl;
        break;
        case 'C' :
        mil=n1*n2;
        cout<<"mil is:"<<mil<<endl;
        break;
        case 'D' :
        div=n1/n2;
        cout<<"div is:"<<div<<endl;
        break;
        default:
        cout<<"invalid choice";
        break;
    }
    return 0;
}
/*PS C:\Users\CL301_11\Desktop\exp02> cd "c:\Users\CL301_11\Desktop\exp02\" ; if ($?) { g++ Untitled-2.cpp -o Untitled-2 } ; if ($?) { .\Untitled-2 }
enter the value of n1 :44
enter the value of n2 :67
enter your choice (A:sum, B:sub, C:mil, D:div):A
sum is:111*/
