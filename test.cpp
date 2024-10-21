#include <bits/stdc++.h>
using namespace std; 
//Write a program that takes an imput of age and tells if Adult or not
//it's not mandatory to have else statement if if is there
int main()
{
    int age;
    cin>>age;
    if(age>=18){
        cout<<"Adult"<<endl;
    }

    else{
        cout<<"Minor"<<endl;
    }


    /*A school has following rules for grading systems:
    a) <25 - F
    b) 25 - 44: E
    C) 45 - 49: D
    D) 50 - 59: C
    E) 60 - 79: B
    F) 80 - 100: A
    Ask user ot enter marks and print the corresponding grade*/
    
    float marks;
    cin>>marks;
    if(marks<=25){
        cout<<"You got F grade";
    }
    else if(marks>=25 && marks<=44){
        cout<<"You got E grade";
    }
    else if(marks>=45 && marks<=49){
        cout<<"You got D grade";
    }
    else if(marks>=50 && marks<=59){
        cout<<"You got C grade";
    }
    else if(marks>=60 && marks<=79){
        cout<<"You got B grade";
    }
    else if(marks>=80 && marks<=100){
        cout<<"You got A grade";
    }
    cout<<endl;

    /*Take the age from user and then decide accordingly:
    a) if age < 18,
    print -> not eligible for job
    b) if age >= 18,
    print -> eligible for job
    c) if age >= 55 and age <= 57,
    print -> eligible for job, but retirement soon.
    d) if age >57,
    print -> retirement time
    */
    int Age;
    cin>>Age;
    if(Age<18){
        cout<<"not eligible for job";
    }

    else if(Age>=18 && Age<=54){
        cout<<"eligible for job ";
    }
        
    else if(Age>=55 && Age<=57){
        cout<<"eligible for job, but retirement soon";
    }
    
    else{
        cout<<"retirement time";
    }
    return 0;
}