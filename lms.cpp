#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

void mainMenu();
int choice();
void home();
int myCourses();
void dashboard();
void dashboardChoice();
void grades();
void eventCalender();
void feedback();
string chat();
void announcements();
void selectCourse(int courseChoice);
int goBack();
void departmentChoice();
void computingChoice();
void gpaCalculation();

void gpaCalculation(){
    cout<<"-------------------------------------"<<endl;
    cout<<"            GPA Calculation          "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Enter the number of subjects: ";
    int subjects;
    cin>>subjects;
    int totalCredits = 0;
    float totalGPA = 0;
    for (int i = 0; i < subjects; i++){
        int credits;
        float gpa;
        cout<<"Enter the credits for subject "<<i+1<<": ";
        cin>>credits;
        cout<<"Enter the GPA for subject "<<i+1<<": ";
        cin>>gpa;
        totalCredits += credits;
        totalGPA += credits * gpa;
    }
    float gpa = totalGPA / totalCredits;
    cout<<"Your GPA is: "<<gpa<<endl;
    goBack();

}

//home 2nd part

void computingChoice(){
    int computingChoice;
    cout<<"Select a course (e.g., 1 for BSc in Information Technology): ";
    cin>>computingChoice;
    if (computingChoice == 1){
        cout<<"--------------------------------------------------"<<endl;
        cout<<"           BSc in Information Technology          "<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<"   * To explore new world Technology"<<endl;

        goBack();
    } else if (computingChoice == 2){
        cout<<"------------------------------------------------"<<endl;
        cout<<"           BSc in Software Engineering          "<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"   * To explore new world Technology"<<endl;
        goBack();
    }

}


void departmentChoice() {
    int departmentChoice;
    cout << "Select a department (e.g., 1 for Computing): ";
    cin >> departmentChoice;
    if (departmentChoice == 1) {
        cout << "-------------------------------------" << endl;
        cout << "           School of Computing          " << endl;
        cout << "-------------------------------------" << endl;
        cout << "   * 1.Bachelor of Science Honours in Information Technology" << endl;
        cout << "   * 2.Bachelor of Science Honours in software engineering"<<endl;
        computingChoice();

    }
    else if (departmentChoice == 2) {
        cout << "-------------------------------------" << endl;
        cout << "           School of Business          " << endl;
        cout << "-------------------------------------" << endl;
        cout << "   * 1.Bachelor of Business Administration" << endl;
        cout << "   * 2.Bachelor of Business Administration in Marketing" << endl;
    }
    else if (departmentChoice == 3) {
        cout << "-------------------------------------" << endl;
        cout << "           School of Education          " << endl;
        cout << "-------------------------------------" << endl;
        cout << "   * 1.Bachelor of Education in Primary Education" << endl;
        cout << "   * 2.Bachelor of Education in Secondary Education" << endl;
    }
    else if (departmentChoice == 4) {
        cout << "------------------------------------------------------" << endl;
        cout << "           School of Psychology & Counselling          " << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "   * 1.Bachelor of Science in Psychology" << endl;
        cout << "   * 2.Bachelor of Science in Counselling" << endl;
    }
}


int goBack(){
    int goBack;
    cout<<"Enter 1 to go back: ";
    cin>>goBack;
    if (goBack == 1){
        mainMenu();
        choice();
    }
    return goBack;
}

void announcements(){

    cout<<"* Dear students, Please find the attached document containing the finalized time table for your final exam.We kindly request that you review the timetable carefully to ensure there are no conflicts with your personal schedules. Please be prepared to adhere to the specified timing and locations."<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"* Dear students, You have been assigned to the feedback forms of modules for Year 1 and Year 2 of the IT and SE programs in LMS. Please take the time to fill out the evalution forms carefully. Your feedback is crucial for improving the course and the overall learning experience."<<endl;
    cout<<"To access the feedback forms, follow this path: "<<endl;
    cout<<"LMS-->DASHBOARD-->FEEDBACK"<<endl;
}

//dashboard 7th part

string chat(){
    string message;
    cout<<"-------------------------------------"<<endl;
    cout<<"               Chat            "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Enter your message: ";
    cin.ignore();
    getline(cin, message);
    cout<<"Message sent!"<<endl;
    return message;
}

//dashboard 6th part

void feedback(){
    cout<<"-------------------------------------"<<endl;
    cout<<"               Feedback            "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Please provide your feedback: ";
    string feedback;
    cin.ignore();
    getline(cin, feedback);
    cout<<"Thank you for your feedback!"<<endl;

}

//dashboard 5th part

void eventCalender(){
    cout<<"-------------------------------------"<<endl;
    cout<<"           Event Calender          "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Upcoming Events"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"FOP Project due: 08th November 2024"<<endl;
    cout<<"HTML is due: 12th November 2024"<<endl;
    cout<<"MSE in class assignment due: 22th November 2024"<<endl;
    cout<<"FOC in class assignment due: 23th November 2024"<<endl;
    cout<<"Final exam: 25th November 2024"<<endl;
}

//dashboard 4th part

void grades(){
    cout<<"-------------------------------------"<<endl;
    cout << "            Grades          " << endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Subject                     Grade"<<endl;
    cout<<"BSSE 11044                   90%"<<endl;
    cout<<"BSSE 11024                   85%"<<endl;
    cout<<"BSSE 11033                   95%"<<endl;
    cout<<"BSSE 11012                   87%"<<endl;
    cout<<"BSSE 21062                   97%"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"To calculate GPA press 1 or to exit press anyother key"<<endl;
    int gpaCalculationChoice;
    cin>>gpaCalculationChoice;
    if (gpaCalculationChoice == 1){
        gpaCalculation();
    }else{
        goBack();
    }



}

//dashboard 2nd part

void dashboardChoice(){
    int dashboardChoice;
    cout << "Enter your choice: ";
    cin >> dashboardChoice;

    if (dashboardChoice == 1){
        grades();
        goBack();
    } else if (dashboardChoice == 2){
        eventCalender();
        goBack();
    } else if (dashboardChoice == 3){
        feedback();
        goBack();
    } else if (dashboardChoice == 4){
        chat();
        goBack();
    }
}





//dashboard 1st part

void dashboard(){
    cout<<"1.Grades"<<endl;
    cout<<"2.Event Calender"<<endl;
    cout<<"3.Feedback"<<endl;
    cout<<"4.Chat"<<endl;


}

int myCourses(){
    cout<<"Courses available:"<<endl;
    cout<<"1. BSSE 11044- Mathematics for SE"<<endl;
    cout<<"2. BSSE 11024- Fundementals of programming"<<endl;
    cout<<"3. BSSE 11012- Foundations in Computing"<<endl;
    cout<<"4. BSSE 11033- Fundementels of Web design"<<endl;
    cout<<"5. BSSE 21062- Ethical & professional issues in Computing"<<endl;
    int courseChoice;
    cout<<"Enter the course number you want to learn: ";
    cin>>courseChoice;
    selectCourse(courseChoice);
    return courseChoice;
}

void course1(){
    cout<<"Welcome to Mathematics for SE"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Course code: BSSE 11044"<<endl;
    cout<<"This course is about learning Mathematics for Software Engineers"<<endl;
    cout<<"Assignments"<<endl;
    cout<<"Quizzes"<<endl;
    cout<<"Final Exam"<<endl;
    cout<<"Course Duration: 6 months"<<endl;
    cout<<"Course Start Date: 1st June 2024"<<endl;
    cout<<"Course End Date: 28th November 2024"<<endl;

    cout<<"-------------------------------------"<<endl;
    goBack();


}
void course2(){
    cout<<"Welcome to Fundamentals of Programming"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Course code: BSSE 11024"<<endl;
    cout<<"This course is about learning Fundamentals of Programming"<<endl;
    cout<<"Assignments"<<endl;
    cout<<"Quizzes"<<endl;
    cout<<"Final Exam"<<endl;
    cout<<"Course Duration: 6 months"<<endl;
    cout<<"Course Start Date: 1st June 2024"<<endl;
    cout<<"Course End Date: 28th November 2024"<<endl;
    cout<<"-------------------------------------"<<endl;
    goBack();
}
void course3(){
    cout<<"Welcome to course 3"<<endl;

    cout<<"-------------------------------------"<<endl;
    goBack();
}
void course4(){
    cout<<"Welcome to course 4"<<endl;

    cout<<"-------------------------------------"<<endl;
    goBack();
}
void course5(){
    cout<<"Welcome to course 5"<<endl;

    cout<<"-------------------------------------"<<endl;
    goBack();
}
void selectCourse(int courseChoice){
if (courseChoice == 1) {
    course1();
} else if (courseChoice == 2) {
    course2();
} else if (courseChoice == 3) {
    course3();
} else if (courseChoice == 4) {
    course4();
} else if (courseChoice == 5) {
    course5();
}
}

//home 1st part

void home(){
    cout<<"-------------------------------------"<<endl;
    cout<<"            Site Announcements          "<<endl;
    cout<<"-------------------------------------"<<endl;
    announcements();

    cout<<"-------------------------------------"<<endl;
    cout<<"               Department         "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"1.School of Computing"<<endl;
    cout<<"2.School of Business"<<endl;
    cout<<"3.School of Education"<<endl;
    cout<<"4.School of Psychology & Counselling"<<endl;


    departmentChoice();
    goBack();
}



int choice(){
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
        if (choice == 1) {
            cout<<"-------------------------------------"<<endl;
            cout << "                Home            " << endl;
            cout<<"-------------------------------------"<<endl;
            home();
        } else if (choice == 2) {
            cout<<"-------------------------------------"<<endl;
            cout << "              Dashboard           " << endl;
            cout<<"-------------------------------------"<<endl;
            dashboard();
            dashboardChoice();

        } else if (choice == 3) {
            cout<<"-------------------------------------"<<endl;
            cout << "             My Courses          " << endl;
            cout<<"-------------------------------------"<<endl;
            myCourses();
        } else if (choice == 4) {
            cout<<"-------------------------------------"<<endl;
            cout << "             Logout          " << endl;
            cout<<"-------------------------------------"<<endl;
            exit(0);
        }
    return choice;
}

void mainMenu(){
    SetConsoleTextAttribute(h,1);
    cout<<"1.Home"<<endl;
    cout<<"2.Dashboard"<<endl;
    cout<<"3.My Courses"<<endl;
    cout<<"4.Logout"<<endl;
    SetConsoleTextAttribute(h,7);

}

bool login(const string& username, const string& password, const string usernames[], const string passwords[], int size) {
    for (int i = 0; i < size; i++) {
        if (username == usernames[i] && password == passwords[i]) {
            return true; // Login successful
        }
    }
    return false; // Login failed
}

int main() {
    const int size = 10;
    string usernames[size] = {"admin", "user","c"};
    string passwords[size] = {"password", "123456","c"};

    string username, password;
     SetConsoleTextAttribute(h,2);

    cout<<"-------------------------------------"<<endl;
    cout << "      Welcome to BCI Campus" << endl;
    cout<<"-------------------------------------"<<endl;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";

    cin >> password;


    // Call the login function
    if (login(username, password, usernames, passwords, size)) {
        cout << "Login successful! Welcome back "<<username << endl;
        mainMenu();
        choice();

    } else {
        cout << "Login failed! (Invalid username or password)" << endl;
        main();
    }

    return 0;
}