#include<iostream>
using namespace std;

void checkage(int age){



  if (age >= 18 ){

   cout<<"you are eligible for voating "<<endl;

  }

  else if(1<= age && age <18){

    cout<<"you are not eligible for voating "<<endl;


  }

  else{

    cout<<"enter proper age "<<endl;

  }

  }




int main() {

int  a;

cout<<"enter your age " <<endl;

cin>>a;

checkage(a);

return 0;




}
