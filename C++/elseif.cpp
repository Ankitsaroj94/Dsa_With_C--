#include<iostream>
using namespace std;
int main(){


int age ;
cout<<"enter the age:";
cin>>age;


if (
    age>=18
)
{
    cout<<"adult";
}

else if(age>=60)
{
    cout<<"senior citizen";
}
else if(age>=13)
{
    cout<<"Teenager";
}

else{
    cout<<"child";
}

 }
