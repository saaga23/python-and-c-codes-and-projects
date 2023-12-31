// Heat waves code on college management

//The header <iostream> is an input/output header ie cin/cout
#include <iostream>
//The <fstream> is a  file header that ia responsible for writing and reading to files ie ifstream/ofstream 
#include <fstream>
//The string header creates string
#include <string>
//The <conio.h>(console-input-output) contains console input/output functions
#include <conio.h>
//The <windows.h> contains function declaration for all of the functions in the windows API 
#include <windows.h>

using namespace std;


struct student//studentrequirement
{
 string fname; //firstname
 string lname;//lastname
 string mname;//middlename
 string tname;
 string sex;//gender
 string admission_date;
 string religion;
 string nationality;
 string matric_number;//matric_number
 string department;//department
 string stud_date_birth;//date of birth

}studentData;


struct teacher//lecturersrequirement
{
 string fst_name;
 string lst_name;
 string qualification;
 string exp;
 string salary;
 string subj;
 string lec;
 string email_addrs;
 string cel_no1;
 string cel_no2;
 string blod_grp;
 string serves;
 string lec_date_birth;//date of birth
 string sex;
 
}tech[100];


int main()
{
	int login();//logindetails
	login();

int i=0,j;
char choice;
string find;
string srch;

while(1)
{
 system("cls");


 cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";//HOMEPAGE
 cout<<"\n\n\t\t\t  COLLEGE MANAGEMENT SYSTEM\n\n";
 cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t:MAIN SCREEN:\n\n";
 cout<<"\t\t\t1. Student Section"<<endl;//pick the one that suits your category
 cout<<"\t\t\t2. Lecturer Section"<<endl;
 cout<<"\t\t\t3. Exit Program"<<endl;
  cout<<"\n\n\t\tEnter your choice: ";
 cin>>choice;

system("cls");

switch(choice)
{

case '1':
 {
while(1)
{
system("cls");

cout<<"\t\tSTUDENT INFORMATION DATA SECTION\n\n\n";//code to provide student data
cout<<"\t\t\t1. Register new student\n";
cout<<"\t\t\t2. Search and display student\n";
cout<<"\t\t\t3. Back to main menu\n";
cout<<"\n\n\t\tEnter your choice: ";
cin>>choice;

switch (choice)
{
case '1':
{  ofstream f1("student.txt");

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
 cout<<"\t\t\tNEW ENTRY\n\n";//code for new data
 cout<<"\t\t\tEnter First name: ";
 cin>>studentData.fname;

 cout<<"\n\t\t\tEnter Last name: ";
 cin>>studentData.lname;

 cout << "\n\t\t\tEnter Middle name: ";
 cin >> studentData.mname;
 cout << "\n\t\t\tEnter Tribe name: ";
 cin >> studentData.tname;
 cout << "\n\t\t\tEnter sex: ";
 cin >> studentData.sex;
 cout << "\n\t\t\tEnter Admission date: ";
 cin >> studentData.admission_date;
 cout << "\n\t\t\tEnter Religion: ";
 cin >> studentData.religion;
 cout << "\n\t\t\tEnter Nationality: ";
 cin >> studentData.nationality;

 cout<<"\n\t\t\tEnter matric number: ";
 cin>>studentData.matric_number;

 cout<<"\n\t\t\tEnter department: ";
 cin>>studentData.department;
 cout <<"\n\t\t\tEnter date of birth: ";
 cin>>studentData.stud_date_birth;

 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.mname<<endl<<studentData.tname<<endl<<studentData.sex<<endl<<studentData.admission_date<<endl<<studentData.religion<<endl<<studentData.nationality<<endl<<studentData.matric_number<<endl<<studentData.department<<endl<<studentData.stud_date_birth<<endl;
 cout<<"\n\n\t\t\tDo you want to enter data: ";
 cout<<"\n\t\t\tPress Y for Continue and N to Finish:  ";
 cin>>choice;
}
}
f1.close();
}
continue;

case '2':
{  ifstream f2("student.txt");
system("CLS");
cout<<"\n\t\tDISPLAY STUDENT'S DATA\n";
cout<<"\n\t\t\tEnter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{

getline(f2,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"\n\t\t\tFirst Name: "<<studentData.fname<<endl;
 cout<<"\n\t\t\tLast Name: "<<studentData.lname<<endl;
 cout << "\n\t\t\tMiddle Name: "<<studentData.mname<<endl;
 cout << "\n\t\t\tTribe Name: "<<studentData.tname<<endl;

 cout << "\n\t\t\tSex: " <<studentData.sex<<endl;
 cout << "\n\t\t\tAdmission Date: "<<studentData.admission_date<<endl;
 cout << "\n\t\t\tReligion: " <<studentData.religion<<endl;
 cout << "\n\t\t\tNationality: "<<studentData.nationality<<endl;
 cout<<"\n\t\t\tRegistration Number: "<<studentData.matric_number<<endl;
 cout<<"\n\t\t\tClass: "<<studentData.department<<endl;
 cout<<"\n\t\t\tDate of birth: " <<studentData.stud_date_birth<<endl<<endl;
}

}


if(notFound == 0){

cout<<"\n\t\tNo Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
//The getch() function  takes in a single character from the standard input ( stdin ), and returns an integer.
getch();
getch();

}
continue;

case '3':
{
break;
}
}

break;
}
continue;
}

case '2':
{
while(1)
{
system("cls");

cout<<"\t\tTEACHER INFORMATION DATA SECTION\n\n\n";//code for lecturers details
cout<<"\t\t\t1. Register new Lecturer\n";
cout<<"\t\t\t2. Search and display Lecturer\n";
cout<<"\t\t\t3. Back to main menu\n";
cout<<"\n\n\t\tEnter your choice: ";
cin>>choice;

switch (choice)
{
case '1':
{
ofstream t1("teacher.txt");

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	// clear screen
 	system("CLS");
	//Take in lecturer information
  cout<<"\t\t\tEnter First name: ";
  cin>>tech[i].fst_name;
  cout<<"\n\t\t\tEnter Last name: ";
  cin>>tech[i].lst_name;
  cout<<"\n\t\t\tEnter Qualification: ";
  cin>>tech[i].qualification;
  cout<<"\n\t\t\tEnter Experience(year): ";
  cin>>tech[i].exp;
  cout<<"\n\t\t\tEnter Year in this college: ";
  cin>>tech[i].serves;
  cout<<"\n\t\t\tEnter Subject: ";
  cin>>tech[i].subj;
  cout<<"\n\t\t\tEnter Lecture(per Week): ";
  cin>>tech[i].lec;
  cout<<"\n\t\t\tEnter Salary: ";
  cin>>tech[i].salary;
  cout<<"\n\t\t\tEnter Email Address: ";
  cin>>tech[i].email_addrs;
  cout<<"\n\t\t\tEnter Phone Number 1: ";
  cin>>tech[i].cel_no1;
  cout<<"\n\t\t\tEnter Phone Number 2: ";
  cin>>tech[i].cel_no2;
  cout<<"\n\t\t\tEnter Blood Group: ";
  cin>>tech[i].blod_grp;
  cout<<"\n\t\t\tEnter Sex(Male or Female): ";
  cin>>tech[i].sex;
  cout<<"\n\t\t\tEnter Date of Birth: ";
  cin>>tech[i].lec_date_birth;

  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl
   <<tech[i].qualification<<endl<<tech[i].exp<<endl
   <<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].salary<<endl<<tech[i].email_addrs<<endl<<tech[i].cel_no1<<endl<<tech[i].cel_no2<<endl<<tech[i].blod_grp<<endl<<tech[i].sex<<endl<<tech[i]
   .lec_date_birth<<endl;
  cout<<"\n\n\t\t\tDo you want to enter data: ";
  cout<<"\n\t\t\tPress Y for Continue and N to Finish:  ";
  cin>>choice;
 }
}

system("cls");

t1.close();
}

continue;

case '2':
{
ifstream t2("teacher.txt");
system("CLS");
cout<<"\n\t\tDISPLAY TEACHER'S DATA\n";
cout<<"\n\t\t\tEnter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{

 getline(t2,tech[j].fst_name);

 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\tFirst name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"\n\t\t\tLast name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"\n\t\t\tQualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"\n\t\t\tExperience: "<<tech[j].exp<<endl;

  getline(t2,tech[j].serves);
  cout<<"\n\t\t\tYear in this School: "<<tech[j].serves<<endl;

  getline(t2,tech[j].subj);
  cout<<"\n\t\t\tSubject: "<<tech[j].subj<<endl;

  getline(t2,tech[j].lec);
  cout<<"\n\t\t\tLecture (per Week): "<<tech[j].lec<<endl;
  
  getline(t2,tech[j].salary);
  cout<<"\n\t\t\tSalary: "<<tech[j].salary<<endl;

  getline(t2,tech[j].email_addrs);
  cout<<"\n\t\t\tEmail Address: "<<tech[j].email_addrs<<endl;

  getline(t2,tech[j].cel_no1);
  cout<<"\n\t\t\tPhone Number 1: "<<tech[j].cel_no1<<endl;
  
  getline(t2,tech[j].cel_no2);
  cout<<"\n\t\t\tPhone Number 2: "<<tech[j].cel_no2<<endl;

  getline(t2,tech[j].blod_grp);
  cout<<"\n\t\t\tBlood Group: "<<tech[j].blod_grp<<endl;
  
  getline(t2,tech[j].sex);
  cout<<"\n\t\t\tSex (Male or Female): "<<tech[j].sex<<endl;
  
  getline(t2,tech[j].lec_date_birth);
  cout<<"\n\t\t\tDate of Birth:"<<tech[j].lec_date_birth<<endl;
 }//if

}

t2.close();
if(notFound == 0){

 cout<<"\n\t\tNo Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
//This function takes in a single character from the standard input ( stdin ), and returns an integer.
getch();
getch();
}

continue;

case '3':
{
break;
}

}

break;
}

continue;
}

case '3':
{
	cout<<"\n Thank you for using the system!";
break;
}
}
break;
}
}


int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t   HEAT WAVES COLLEGE MANAGEMENT SYSTEM \n\n";//CODE for login display
   cout<<"\t\t\t------------------------------";
   cout<<"\n\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t------------------------------\n\n";
   cout << "\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "heat"){
      cout << "\n\n\n\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\tAccess Aborted...\n\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   return 0;
}
