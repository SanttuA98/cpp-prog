/*
A program in which you define a struct for student information, which includes the following fields: name (an array of char), 
id (unsigned int) and grade (unsigned int). Define an array of 5 locations, which includes student information. First, sort the content of the array in ascending 
order according to student grade and then print out the content of the array.
*/
#include <iostream>
#include <string>
using namespace std;
struct student {
    string name;
    unsigned int id;
    unsigned int grade;
};
int main()
{
    int i, j;
 struct student information [5] = {
     {"Esko", 15, 3},
     {"Seppo", 16, 5},
     {"Sirpa", 17, 2},
     {"Jaska", 18, 4},
     {"Ulla", 19, 3}
    };
     struct student copy;

     for(i = 1; i < 5; i++){
       for(j = 1; j < 5; j++){
           if(information[j - 1].grade < information[j].grade){
               copy = information[j - 1];
               information[j - 1] = information[j];
               information[j] = copy;
           }
       } 
     }
       
    cout << "Students" << endl;
    for(i = 0; i < 5; i++){
      cout << "Name: " << information[i].name << " ID: " << information[i].id <<" Grade: " << information[i].grade << endl;
 
    }
    return 0;
}