#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

// Module 1: Login System
bool login(string user1, string pass1, string user2, string pass2){
    string user, pass;
    cout<<"\n---------- LOGIN ----------\n";
    cout<<"Enter Username: "; 
    cin>>user;
    cout<<"Enter Password: ";
    cin>>pass;

    if ((user == user1 && pass == pass1)||(user == user2 && pass == pass2)){
                cout<<"Login Successful"<<endl;
                return true;
    }
    else{
        cout<<"Access Denied"<<endl;
        return false;
       
    }
}

// Module 2: Course Registration
bool register_course(int course_choice){
    if ((course_choice >= 1) && (course_choice <= 5)){
        return true ;
    }
    else{ 
        return false ;
    }
}

// Module 3: Grade Assignment
 int assign_grades(string (&courses)[3],int  (&marks)[3]){
     cout<<"\n---------- Grade Assignment ----------\n";
     for (int i=0;i<3;i++){
         marks[i]=rand()%101;
     }
     for (int i=0;i<3;i++){
         cout<<"Course: "<< courses[i]<< " " << "Marks:"<<marks[i]<<endl;
         
     }
     return 0;
}

float  calculate_gpa(int (&marks)[3], string (&grades)[3]){
cout<<"\n---------- GPA Calculator ----------\n";
float gpa = 0.0;
for(int i=0;i<3;i++){

    if (marks[i] <= 100){
        if (marks[i] >= 90 && marks[i] <= 100){
            cout<<"Grade A"<<endl;
            grades[i] = "A";
        }
        else if(marks[i] >= 80 && marks[i] <=89){
            cout<<"Grade B"<<endl;
            grades[i] = "B";
        }
        else if(marks[i] >= 70 && marks[i] <= 79){
            cout<<"Grade C"<<endl;
            grades[i] = "C";
        }
        else if(marks[i] >= 60 && marks[i] <= 69){
            cout<<"Grade D"<<endl;
            grades[i] = "D";
        }
        else{
            cout<<"Grade F"<<endl;
            grades[i] = "F";
        }
    }
    else{
        cout<<"Invalid marks";
    }
    }
    for(int i=0;i<3;i++){
    if(grades[i]=="A"){
        gpa += 4;
    }
    else if(grades[i]=="B"){
        gpa += 3;
    }
    else if(grades[i]=="C"){
        gpa += 2;
    }
    else if(grades[i]=="D"){
        gpa += 1;
    }
    else if(grades[i]=="F"){
        gpa += 0;
    }
    }
    gpa = gpa / 3.0;
    return gpa ;
}

// Module 4: Scholarship Eligibility
bool check_scholarship(float gpa){
    cout<<"\n---------- Scholarship Eligibility ----------\n";
    if(gpa >= 3.5){
        cout<<"Eligible for Full Scholarship"<<endl;
        return true;
    }
    else if((gpa >= 3.0) && (gpa < 3.5)){
        cout<<"Eligible for Half Scholarship"<<endl;
        return true;
    }
    else{
        cout<<"Not Eligible"<<endl;
        return false ;
    }
    return true ;
}

int main() {
    srand(time(0));
    cout<<"---------- Smart University Portal Simulator ----------\n";
    string user1, pass1, user2, pass2;
    user1 = "admin";
    pass1 = "1234"; 
    user2 = "student"; 
    pass2 = "5678";
    
    int choice,count;
    int marks[3];
    string courses[3];
    string grade[3];
    
     if(!login(user1, pass1, user2, pass2)){
        return 0;
    }
    cout<<"\n---------- Course Registration ----------\n";
    cout<<"Choose 3 courses"<<endl;
    cout<<"Math(1) Physics(2) CS(3) Chemistry(4) English(5)\n";
    for(int i=0; i<3; i++){
    cout << "Enter choice for course " << i+1 << ": ";
    cin >> choice;
    if(register_course(choice)){
        switch(choice){
           case 1 : courses[i]="Math"; break;
           case 2 : courses[i]="Physics"; break;
           case 3 : courses[i]="CS"; break;
           case 4 : courses[i]="Chemistry"; break;
           case 5 : courses[i]="English"; break;
        }
    }
    else {
        cout << "Invalid course! Try again.\n";
        i--; 
    }
    }
    assign_grades(courses, marks);

    float gpa = calculate_gpa(marks, grade);
    cout<<"GPA: "<<gpa<<endl;
    
    bool scholarship_holder;
    scholarship_holder = check_scholarship(gpa);
    return 0;
}