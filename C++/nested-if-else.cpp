#include<iostream>
using namespace std;
int main    (){

int marks;
cout<<"enter the marks:";
cin>>marks;

if (marks>=33){
    if (marks>=80)
    {
cout<<"Excelent";   
 }

 else if(marks>=33){  
      cout<<"pass"<<endl;
}


}
else
{

cout<<"fail"<<endl;
}

marks>=33?    cout<<"pass" <<endl :cout<<"fail";



return 0;
}


