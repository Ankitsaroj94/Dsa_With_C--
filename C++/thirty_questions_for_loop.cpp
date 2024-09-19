#include<iostream>
using namespace std;




void printn_numbers(){



    for (int i=1;i<=10;i++){
cout<<i<<endl;
    }


}

void sum_of_n_numbers(){



int sum=0;
    for (int i=1;i<=10;i++){

        sum+=i;

    }
cout<<sum<<endl;

}

void even_no(){

    int even;
    for (int i=1;i<=20;i++){
if(i%2==0){
    
    cout<<"even no: "<<i<<endl;

}
    }
}

void factorial(){

int a =10;

int res=1;
for(int i=1;i<=a;i++){

res*=i;


}
cout<<res<<endl;

}

void multiplication(){


int mult;
int a=5;
for (int i=1;i<=10;i++){
    
mult=a*i;

cout<<mult<<endl;

}

}

void rev_of_no(){


int a=23456;

int rev=0;
int temp;
 temp=a;

for (;temp!=0;)
{
int lastdigit = temp % 10;
        rev = rev * 10 + lastdigit;
        temp /= 10;

}
cout<<rev<<endl;


}

void count_no_digit(){

   long long int a =2354687454687898;
   long long int temp=a;
 int digit=0;
    for(;temp!=0;){
          temp/=10;
          digit++;


        
}
cout<<"total digit :"<<digit<<endl;

}

void sum_of_even(){
int a=100;
int sum=0;
for(int i=1;i<=a;i++){
    if(i%2==0){
sum+=i;
}


}
cout<<sum<<endl;

}

void sum_of_odd(){
int a=100;
int sum=0;
for(int i=1;i<=a;i++){
    if(i%2==0){

}else{
    sum+=i;
}

}
cout<<sum<<endl;

}














int main(){

//printn_numbers();

//sum_of_n_numbers(); 

//even_no();

//factorial();

//multiplication();

// rev_of_no();

// count_no_digit();

// sum_of_even();

sum_of_odd();




    return 0;
} 