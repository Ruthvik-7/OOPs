// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         for(int j=1;j<=3;j++)
//         {
//             if(i==2 && j==2)
//             {
//                 continue;
//             }
//             cout<<i<<" "<<j<<endl;
//         }
//     }
//     __________________________________________________________________________

//     cout<<"Eligibilty fot voting"<<endl;
//     cout<<"Enter the age"<<endl;
//     int age;
//     cin>>age;
//     if (age<18)
//     {
//         cout<<" Not eligible for voting"<<endl;
//     }
//     else
//     {
//         cout<<"Eligible for voting"<<endl;
//     }
//     ______________________________________________________________________________

//     int a[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++)                  |           for(int i : a[i])
//     {                                     |           { 
//         cout<<a[i]<<endl;                 |              cout<<i<<endl; 
//     }                                     |           }
//     _________________________________________________________________________________
    
//     int a1[5]={1,2,3,4,5};
//     int a2[5]={5,4,3,2,1};
//     void printMin(a1);
//     void printMin(a2);
//     return 0;
// }

//  void printMin(int a[5])
// {
//     int min=a[0];
//     for(int i=0;i<5;i++)
//     {
//       if(min>a[1])
//        {
//            min=a[i];
//        }
//     } 
//     cout<<"Minimum element is : "<<min<<endl;
// }
// // ___________________________________________________________________________________
// ____________________________________________________________________________________


// #include <iostream>
// using namespace std;
// class student
// {
//     string name;
//     int marks;
//     void printf();
// };

// void student::printf()
// {
//     cout>>name>>endl;
//     cout>>marks>>endl;
// }
// int main()
// {    
//     int count,i;
//     student s[4];
//     cout<<"Enter the the no.of students : "<<endl;
//     cin>>count;
//     for(i=0;i<count;i++)
//     {
//         cout<<"Enter the details of the student(NAME & MARKS)"<<endl;
//         cin>>s[i].name;
//         cin>>s[i].marks;
//     } 
//     for(i=0;i<count;i++)
//     {
//         s[i].printf();
//     }
//     return 0;
// }

// __________________________________________________________________________________

// #include <iostream>
// using namespace std;
// class student
// {
//     public:
//     string name,department,hostel;
//     int marks;
//     student();
//     student(string dept);
//     student(string dept,string y);
//     void printf();
// };
// student::student()
// {
//     department = "CSE";
// }
// student::student(string dept)
// {
//     department = dept;
// }
// student::student(string dept,string y)
// {
//     department = dept;
//     hostel = y;
// }
// void student::printf()
// {
//     cout<<name<<endl;
//     cout<<department<<endl;
//     cout<<marks<<endl;
//     cout<<hostel<<endl;
// }

// int main()
// {
//     student s,p("CSE","y");
//     s.name = "Ruthvik";
//     s.marks = 98;
//     p.name = "Saahi";
//     p.marks = 96;
//     s.printf();
//     p.printf();
//     return 0;
// }
// ______________________________________________________________
// ___________________________________________________________________________


// #include <iostream>
// using namespace std;
// class student
// {
//     public:
//     string name,department;
//     int marks;
//     void print();
//     student(string dept);
//     student(student &p);
// };
// student::student(string dept)
// {
//     department=dept;
// }
// student::student(student &p)
// {
//     department=p.department;
// }
// void student:: print()
// {
//     cout<<name<<endl;
//     cout<<department<<endl;
//     cout<<marks<<endl;
// }
// int main()
// {
//     student s("DSAI");
//     s.name="Ruthvik";
//     s.marks=100;
//     s.print();
//     return 0;
// }

// ___________________________________________________________________________

// #include <iostream>
// using namespace std;
// class student
// {
//     public:
//     string name,department,college;
//     int marks;
//     void print();
//     student(string dept,string clg)
//     {
//         department=dept;
//         college=clg;
//     }
//     student(student &s)
//     {
//         department=s.department;
//         college=s.college;
//     }
// };
// void student::print()
// {
//      cout<<"name of the student :"<<name<<endl;
//      cout<<"college name :"<<college<<endl;
//      cout<<"department name :"<<department<<endl;
//      cout<<"marks obtained :"<<marks<<endl;
// }
// int main()
// {
//     student s("DSAI","IIIT");
//     cin>>s.name;
//     cin>>s.marks;
//     s.print();
//     return 0;
// }
// _______________________________________________________________

// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name,department;
//     int marksEco, marksMath, marksData, marksEng;
//     student()
//     {

//     }
//     student(string dept)
//     {
//         department=dept;
//     }
//     void print();
//     void calSum(int marksEco,int marksMath,int marksData,int marksEng)
//     {
//         total=marksEco+marksData+marksEng+marksMath;
//     }
//     void calSum(int marksEco,int marksMath,int marksEng)
//     {
//         total=marksData+marksEco+marksMath;
//     }
// };
// void print()
// {
//     cout<<name<<endl;
//     cout<<department<<endl;
//     cout<<marksEco<<endl;
//     cout<<marksData<<endl;
//     cout<<marksMath<<endl;
//     cout<<marksEng<<endl;
// }
// int main()
// {
//     student s,p("DSAI","CSE");
//     s.name="Ruthvik";
//     s.marksEco=100;
//     s.marksMath=100;
//     s.marksData=100;
//     s.marksEng=100;
//     p.name="Saahi";
//     p.marksEco=99;
//     p.marksMath=99;
//     p.marksData=99;
//     s.print();
//     p.print();
//     return 0;
// }
//_____________________________________________________________________
//______________________________________________________________

// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name,department;
//     int marks,comboMarks;
//     student(string dept)
//     {
//         department=dept;
//     }
//     void print();
//     void operator + (student a;)
// };
// student::student(student dept)
// {
//     department=dept;
// }
// void student::print()
// {
//     cout<<name<<endl;
//     cout<<marks<<endl;
//     cout<<department<<endl;
// }
// void student::operator + (student a)
// {
//     comboMarks = marks + a.marks;
//     cout<<comboMarks<<endl;
// }
// int main()
// {
//     student s,p("DSAI","CSE");
//     s.name="Ruthvik";
//     s.marks=100;
//     p.name="Saahi";
//     p.marks=99;
//     s.print();
//     p.print();
//     return 0;
// }
//________________________________________________________________________

// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name,department;
//     int marks;
//     student(string dept)
//     {
//         department=dept;
//     }
//     void print();
//     void operator ++();
// };
// void student::print()
// {
//     cout<<name<<endl;
//     cout<<department<<endl;
//     cout<<marks<<endl;
// }
// void student::operator++()
// {
//     marks = marks + 2;
//     cout<<marks<<endl;
// }
// int main()
// {
//     student s,p("DSAI","CSE");
//     s.name="RUTHVIK";
//     s.marks=100;
//     p.name="Saahi";
//     p.marks=99;
//     s.print();
//     p.print();
//     return 0;
// }
// ______________________________________________________________________________

// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     void setName(string sname);
// };
// void student::setName(string sname)
// {
//     name=sname;
//     cout<<name<<endl;
// }
// class semester : public student
// {
//     public:
//     int marksA,marksB;
//     void nameSet(string firstname)
//     {
//         setName(firstname);
//     }
// };
// int main()
// {
//     semester s;
//     s.setName="Ruthvik";
//     s.marks=100;
//     s.print();
//     return 0;
// }
// _________________________________________________________________
//________________________________________________________

// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name;
// };
// class semester : public student            //inheritance
// {
//     public:
//     int marksA,marksB;
// };
// int main()
// {
//     semester s;
//     s.name="Ruthvik";
//     s.marksA=92;
//     s.marksB=98;
//     cout<<"Name : "<<s.name<<endl;
//     cout<<"Marks in A : "<<s.marksA<<endl;
//     cout<<"Marks in B : "<<s.marksB<<endl;
//     return 0;
// }
//__________________________________________________________________
//__________________________________________________________

// #include<iostream>
// using namespace std;

// class professer
// {
//     public:
//     string profresser;
// };
// class subject
// {
//     public:
//     string analysis;
// }
// class studentCS : public professer
// {
//     public:
//     int marksCSa,marksCSb;
// };
// class studentDSAI : public professer,public subject
// {
//     public:
//     int marksDSa,marksDSb;
// };
//__________________________________________________________________
// #include<iostream>
// using namespace std;
// class patient
// {
//     public:
//     string patientName;
// };
// class hospital
// {
//     public:
//     string hospitalName;
// };
// class date : public patient,public hospital
// {
//     public:
//     string DOA,DOD;
//     void read()
//     {
//         cout << "Enter patient name : ";
//         cin >> patientName;
//         cout<<"Enter hospital name : ";
//         cin>>hospitalName;
//         cout << "Enter date of admission : ";
//         cin >> DOA;
//         cout << "Enter date of discharge : ";
//         cin >> DOD;
//         cout << endl;
//     }
//     void display();
// };
// void date :: display()
// {
//     cout << "Name : "<<patientName<<endl;
//     cout<<"Hospital : "<<hospitalName<<endl;
//     cout << "Date of joining : "<<DOA<<endl;
//     cout << "Date of discharge : "<<DOD<<endl;
// }
// int main()
// {
//     int n,i;
//     cout << "Enter number of patients : ";
//     cin >> n;
//     cout << endl;
//     date d[n];
//     for(i=0 ; i<n ; i++)
//     {
//         d[i].read();
//     }
//      for(i=0 ; i<n ; i++)
//     {
//         d[i].display();
//     }
//     return 0;
// }
//____________________________________________________________
//___________________________________________________