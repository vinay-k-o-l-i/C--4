#include<iostream>
using namespace std;
int main() {
char ch;
cout<<"Enter the character:";
cin>>ch;
if( ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
{
   cout<<"ch is vowel"; 
}
else 
    {
    cout<<"character is not a vowel";
        }
}
/*PS C:\Users\CL301_11\Desktop\exp02> cd "c:\Users\CL301_11\Desktop\exp02\" ; if ($?) { g++ Untitled-2.cpp -o Untitled-2 } ; if ($?) { .\Untitled-2 }
Enter the character:y
character is not a vowel*/
