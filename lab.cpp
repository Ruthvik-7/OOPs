// 21-09-2003

//----------- LAB-1---------------  

//  1. To read the temperature in Fahrenheit and convert it to degree centigrade.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int F,C;
//     cout<<"Enter the temperature in Fahrenheit : ";
//     cin>>F;
//     if(F>=32)
//     {
//         C=5*(F-32)/9;
//     }
//     cout<<"Temperature in Celsius is :"<<C<<endl;
//     return 0;
// }

//_________________________________________________________________________________________________________

//2. An Employee's Basic Pay (BP) is to be read through keyboard. DA is 40% of BP, HRA is twenty percent of BP,
     // calculate the Gross Pay (GP) GP is computed as BP+DA+HRA.

// #include<iostream>
// using namespace std;

// int main()
// {
//     float BP, DA, HRA, GP;
//     cout<<"Enter the BP of employee : ";
//     cin>>BP;
//     DA = 0.4 * BP;
//     cout<<"DA of employee is : "<<DA<<endl;
//     HRA = 0.2 * BP; 
//     cout<<"HRA of the employee is : "<<HRA<<endl;
//     GP = BP + DA + HRA;
//     cout<<"GP of the employee is : "<<GP<<endl;
//     return 0;
// }

//_______________________________________________________________________________________________________________

//3.Write a program in C++ using classes to calculate the area of a circle , a rectangle and a triangle on user’s choice.

// #include<iostream>
// using namespace std;

// class circle
// {
//     public:
//         float radius;
// };
// class rectangle
// {
//     public:
//         float length,breadth;
// };
// class triangle
// {
//     public:
//         float base,height;
// };
// class area : public circle,public rectangle,public triangle 
// {
//     public:
//     float AOC,AOR,AOT;
// };
// int main()
// {
//     area a;
//     a.radius = 7;
//     int pi = 3.14;
//     a.AOC = pi * a.radius * a.radius;
//     cout<<"Area of circle is : "<<a.AOC<<endl;
//     a.length = 10;
//     a.breadth = 3;
//     a.AOR = a.length * a.breadth;
//     cout<<"Area of rectangle is : "<<a.AOR<<endl;
//     a.base = 2;
//     a.height = 7;
//     a.AOT = 0.5 * a.height * a.base;
//     cout<<"Area of triangle is : "<<a.AOT<<endl;
//     return 0;  
// }

//_________________________________________________________________________________________________________________

//4. Write a program in C++ using classes to enter the data of a Student and display it. (Data of a student : Name, Reg no, Branch, Sem).

// #include<iostream>
// using namespace std;

// class student
// {
//   public:
//     string name,branch,RegNo,sem;
//     void print();
// };
// void student :: print()
// {
//     cout<<"Student Name : "<<name<<endl;
//     cout<<"Student branch : "<<branch<<endl;
//     cout<<"Student Resitration number : "<<RegNo<<endl;
//     cout<<"Student is  in : "<<sem<<endl;
// }
// int main()
// {
//     student s;
//     s.name="Ruthvik";
//     s.branch="DSAI";
//     s.RegNo="21BDS035";
//     s.sem="3rd sem";
//     s.print();
//     return 0;
// }

//_________________________________________________________________________________________________________________________________

//5. Create a Class time that has separate int member data for hours,minutes and seconds. One constructor should initialize this data to 0 and another should initialize it to fixed values. Another
       //member function should display it in hh:mm:ss format.

// #include<iostream>
// using namespace std;
// class time
// {
//     public:
//         int hours,minutes,seconds;
//         time()
//         {
//             hours=0;
//             minutes=0;
//             seconds=0;
//         }
//         void read()
//         {
//             cout << "Enter hours : ";
//             cin >> hours;
//             cout << "Enter minutes : ";
//             cin >> minutes;
//             cout << "Enter seconds : ";
//             cin >> seconds;
//         }
//         void print()
//         {
//             cout << "\nTime = " << hours <<":" << minutes << ":" << seconds;
//         }
// };

// int main()
// {
//     time t;
//     t.read();
//     t.print();
// }
//________________________________________________________________________________________________________________________

//6. Write a program in C++ to increment and decrement a complex number read from the user by overloading ++ and - - operators.


// #include<iostream>
// using namespace std;
// class complexn
// {
//     public :
//         int a,b;
//         void operator ++()
//         {
//             int choice;
//             cout << "\nEnter which part to increment";
//             cout << "\n1.Real\n2.Imaginary";
//             cout <<"\n\tEnter choice : ";
//             cin >> choice;
//             if(choice==1)
//             {
//                 ++a;
//             }
//             else
//             {
//                 ++b;
//             }
//         }
//         void display()
//         {
//             cout << " Complex Number = " << a << "+" << b <<"i";
//         }
// };

// int main()
// {
//     complexn c;
//     cout << "Enter real and imaginary parts : ";
//     cin >> c.a >> c.b;
//     c.display();
//     ++c;
//     c.display();
// }

//___________________________________________________________________________________________________________________

//7. Write a C++ program to demonstrate the inheritance principle of OOP. Create a Student class that includes student’s basic
     // information : Name, Reg no, Age, Gender, Branch, Sem. Define functions to read and display basic information. 
        //Create a new class Student ResultInfo that inherits from Student class.
           // Derived class will include student’s total marks, percentage and grade. Display student’s basic information and result 
              //information using derived class.

// #include<iostream>
// using namespace std;
// class student
// {
//     public :
//         string name,reg,branch,gender;
//         int age,sem;
//         void read()
//         {
//             cout << "\nEnter name : ";
//             cin >> name;
//             cout << "Enter registration number : ";
//             cin >> reg;
//             cout << "Enter age : ";
//             cin >> age;
//             cout << "Enter gender : ";
//             cin >> gender;
//             cout << "Enter branch : ";
//             cin >> branch;
//             cout << "Enter semester : ";
//             cin >> sem;
//         }
// };

// class marks : public student
// {
//     public :
//         int marks , percentage;
//         void read2()
//         {
//             cout << "Enter marks : ";
//             cin >> marks;
//             cout << "Enter percentage : ";
//             cin >> percentage;
//         }
//         void display()
//         {
//             cout << "Name : " << name << endl;
//             cout <<"Registration number : " << reg<<endl;
//             cout << "Age : " << age << endl;
//             cout << "Gender : "<< gender << endl;
//             cout <<"Branch : " << branch<<endl;
//             cout <<"Semester : " << sem<<endl;
//             cout << "Marks : "<<marks << endl;
//             cout << " percentage : " << percentage << endl;
//         }
// };

// int main()
// {
//     int n;
//     cout << "Enter number of students : ";
//     cin >> n;
//     marks t[n];
//     for(int i=0 ; i<n ; i++)
//     {
//         t[i].read();
//         t[i].read2();
//     }
//     for(int i=0 ; i<n ; i++)
//     {
//         t[i].display();
//     }
// }              

//___________________________________________________________________________________________________________________________
//___________________________________________________________________________________________________________________

//-------------------LAB-2--------------------

//1. Create the equivalent four-function calculator. The program should request the user to enter a number, an operator, and 
   //another number. It should then carry out the specified arithmetical operation: adding, multiplying, or dividing the two numbers. 
      //(It should use a switch statement to select the operation). Finally, it should display the result. When it finishes
         //the calculation, the program should ask if the user wants to do another calculation. The response can be ‘Y’ or ‘N’.

// #include<iostream>
// using namespace std;
// class calculator
// {
// public :
//     float a,b;
//     void add()
//     {
//         cout << "Enter a and b  values : ";
//         cin >> a >> b;
//         cout << "Sum of a and b is : " << a+b << endl;
//     }
//     void sub()
//     {
//         cout << "Enter a and b  values : ";
//         cin >> a >> b;
//         cout << "Difference of a and b is : " << a-b << endl;
//     }
//     void multiply()
//     {
//         cout << "Enter a and b  values : ";
//         cin >> a >> b;
//         cout << "Product of a and b is : " << a*b << endl;
//     }
//     void divide()
//     {
//         cout << "Enter a and b  values : ";
//         cin >> a >> b;
//         cout << "Division of a and b is : " << a/b << endl;
//     }
// };

// int main()
// {
//     calculator c;
//     int choice;
//     while(1)
//     {
//         cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
//         cout << "\tEnter choice : ";
//         cin >> choice;
//         if(choice<0 && choice>4)
//         {
//             cout << "Enter valid input....";
//             exit(0);
//         }
//         switch(choice)
//         {
//             case 1 : c.add();
//                      break;
//             case 2 : c.sub();
//                      break;
//             case 3 : c.multiply();
//                      break;
//             case 4 : c.divide();
//                      break;
//         }
//         int que;
//         cout << "\n1.Continue\n2.Exit";
//         cout << "\n\tEnter choice : ";
//         cin >> que;
//         if(que==1)
//         {
//             continue;
//         }
//         else if(que==2)
//         {
//             exit(0);
//         }
//         else
//         {
//             cout << "Enter valid input........";
//         }
//     }

// }

//________________________________________________________________________________________________________________

//2. Create a class complex with two integer data members as real and imaginary. Design a method to input the complex number,
      //design a function to perform addition operation between the two complex numbers by overloading the + operator. 
        //Finally display the result.
        
// #include<iostream>
// using namespace std;
// class complex
// {
//    public :
//     int real,img,r,i;
//     complex operator +(complex b)
//     {
//       r = real + b.real;
//       i = img + b.img;
//       cout << "Sum of 2 complex numbers : " << r << " + " << i << "i";
//     }
// };

// int main()
// {
//     complex a,b;
//     cout << "Enter real and imaginary parts of 1st complex number : ";
//     cin >> a.real >> a.img;
//     cout << "Enter real and imaginary parts of 2nd complex number : ";
//     cin >> b.real >> b.img;
//     cout << "1st Number = " << a.real << " + " << a.img << "i"<<endl;
//     cout << "2nd Number = " << b.real << " + " << b.img << "i"<<endl;
//     a+b;
// }
  
//___________________________________________________________________________________________________________________________

//3. A hospital wants to create a database regarding its indoor patients. The information to store
     //include:
        //a) Name of the patient
        //b) Date of admission.
        //c) Disease.
        //d) Date of discharge.
            //Create a class to store the date (year, month and date as its members). Create a base class to store the above information. 
              //The member function should include functions to enter information and display a list of all the patients in the database. 
                //Create a derived class to store the age of the patients. List the information about all the paediatric patients
                  //(less than twelve years in age).

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

//_______________________________________________________________________________________________________________________

//4. Create a base class shape. Use this class to store two double type values that could be used to compute area of figures.
   // Derive two specific classes called triangle and rectangle from the base shape. Add to the base a member function getdata() 
      //to initialize base class data member and another member function display_area() to compute and display the area of figures.


// #include<iostream>
// using namespace std;
// #define pi 3.1415
// class area
// {
//     public :
//         float l,b,area;
//         void rectangle()
//         {
//             cout << "Enter length and breath of rectangle : ";
//             cin >> l >> b;
//             area = l*b;
//             cout << "Area of rectangle = "<<area;
//         }
//         void triangle()
//         {
//             cout << "Enter base and height of traingle : ";
//             cin >> l >> b;
//             area = 0.5*l*b;
//             cout << "Area of Triangle = "<<area;
//         }
// };

// int main()
// {
//     area t;
//     int ch;
//     cout << "\n1.Rectangle\n2.Traingle\n";
//     cout << "\tEnter Choice : ";
//     cin >> ch;
//     if(ch>2 || ch<0)
//     {
//         cout << "Error ! Enter valid input....";
//         exit(0);
//     }
//     if(ch==1)
//     {
//         t.rectangle();
//     }
//     else if(ch==2)
//     {
//         t.triangle();
//     }
// }

//_______________________________________________________________________________________________________________

//5. Imagine a tollbooth which collects a fix amount of Rs. 50.00 from every four-wheeler passing through it. Create a class to count 
    //the number passing vehicles and the total amount collected.
       //Data/class members:
           //1)First unsigned int to hold the total number of cars
           //2)And the second double to hold the total amount of money collected by the owing toll.
              //Class and Functions:
                //Declare a class tollbooth with the following functions:
                  //1)A constructor to initialize above both variables’ values to 0.
                  //2)A member function – PayingVechiles() to increment the vehicles total and add 50.00 to the
                      //cash total for each time next four wheeler pays the toll.
                  //3)Create another function – NonPayingVehicles(). In this function increment the vehicle total
                     //but add nothing to the cash total. Call this function for every vehicle passing without paying  toll.
                  //4) Finally create a member function – DisplayCashCollected() to display the total collection
                     //and the number of vehicles passes through the toll.
//The Main() function tests the class tollbooth. Read number 0 to count a paying four wheeler, and1 for nonpaying vehicle.
  // Press 2 to exit.

// #include<iostream>
// using namespace std;
// class tollingboth
// {
//   public:
//     int pass;
//     double money;
//     tollingboth()
//     {
//         pass = 0;
//         money = 0;
//     }
//     void pvehicles()
//     {
//         pass += 1;
//         money += 50;
//     }
//     void npvehicles()
//     {
//         pass += 1;
//     }
//     void display()
//     {
//         cout << "Money Collected = " << money<<endl; ;
//         cout << "Number of Vehicles Passed = "<< pass<<endl ;
//     }
// };

// int main()
// {
//     tollingboth t;
//     while(1)
//     {
//         int choice;
//         cout << "\n1.Paying\n2.Non-Paying \n3.Exit\n";
//         cout << "Enter choice : ";
//         cin >> choice;
//         if(choice > 3 || choice <1)
//         {
//             cout << "Enter Valid input.....\n";
//             exit(1);

//         }
//         switch(choice)
//         {
//             case 1 : t.pvehicles();
//                      break;
//             case 2 : t.npvehicles();
//                      break;
//             case 3 : exit(1);
//         }
//         t.display();
//     }
// }

//________________________________________________________________________________________________________________
//________________________________________________________________________________________________

