#include <iostream>
#include <string>
using namespace std;

const int LEN = 30;
struct student {
char name[LEN];
double activeness;
bool project_work;
double exam;
unsigned int passed_or_not : 1;
unsigned int grade : 3;
};

int main()
{
    student information;
    cout << "Give following information\nName: " << endl;
    cin.getline(information.name,LEN,'\n');
    cout << "Activity (1 and 0): " << endl;
    cin >> information.activeness;
    cout << "Is work done?(1 is done 0 is not): " << endl;
    cin >> information.project_work;
    cout << "Percentage of points: " << endl;
    cin >> information.exam;
      

      if(information.exam > 40 && information.project_work > 0) {
        
         if(information.exam >= 40 && information.exam < 55) {
        information.grade = 1;
         }
        else if(information.exam >= 55 && information.exam < 70) {
        information.grade = 2;
        }
        else if(information.exam >= 70 && information.exam < 85) {
        information.grade = 3;
        }
        else if(information.exam >= 85 && information.exam <= 100) {
        information.grade = 4;
        }
        if(information.activeness > 0.5) {
            information.grade++;
        }

    }
        else 
        information.grade = 0;
    
    if(information.grade > 0) {
        cout << "You passed the course and your grade is: " << information.grade << endl;
    } else
        cout << "You failed the course and your grade is: " << information.grade << endl;

    
 
    return 0;
}



