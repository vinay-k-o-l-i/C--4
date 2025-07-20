#include<iostream>
using namespace std;
int main(){
    char gym;
    cout<<"enter the day of gym:";
    cin>>gym;
    switch(gym){
        case 'M':
        cout<<"Monday: chest and triceps";
        break;
        case 'T':
        cout<<"Tuesday:back and bicep";
        break;
        case 'W':
        cout<<"Wenesday: leg amd shoulder";
        break;
        case 'H':
        cout<<"Thursday: cardio";
        break;
        case 'F':
        cout<<"Friday: abs and core";
        break;
        case 'S':  
        cout<<"Saturday: rest day";
        break;
        case 's':
        cout<<"Sunday:  abs and core";
        break;
        default:    
        cout<<"Invalid input";
        break;

    }
}
/*PS C:\Users\CL301_11\Desktop\exp02> cd "c:\Users\CL301_11\Desktop\exp02\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
enter the day of gym:s
Sunday:  abs and core*/
