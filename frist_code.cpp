#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
 //Write a C++ program to print your name, age, and favorite subject on separate lines.
  //first declare the variable needs like name ,etc.
  // separate line usind /n.
  //identity the type of variable to need the 
  string name ="anandkumar";
  int age = 19;
  string fav_sub = "math.computer";
  cout << name << endl;
  cout << age << endl;
  cout << fav_sub << endl;
  //Create variables for marks in 3 subjects. Calculate and print the total and average.
    int a,b,c,total,average;
    a = 10,b = 20,c = 30;
	total = a+b+c;
	average = (a+b+c)/3;
	cout << total << endl;
	cout << average << endl;   
	//Ask the user for two integers and print their sum, difference, product, and quotient.
	  int x,y,z;
	  cout << "enter x value :";
	  cin >> x;
	  cout << "enter y value :";
	  cin >> y;
	  cout << "enter x+y value :" << x+y << endl;
	  cout << "enter x-y value :" << x-y << endl;
	  cout << "enter x*y value :" << x*y << endl;
	  cout << "enter x-y value :" << x % y << endl;
	  //Rewrite the swap program without using a third variable.
	  int swap_num1,swap_num2;
	  cout << "enter num_1";
	  cin >> swap_num1;
	  cout << "enter num_1";
	  cin >> swap_num2;
      cout << "Before Swap  num1 = " << swap_num1 << ", num2 = " << swap_num2 << endl;
	  swap_num1 = swap_num1+swap_num2; // num1-7 = 5+2
	  swap_num2 = swap_num1 - swap_num2; //num2_5 = 7- 2
	  swap_num1 = swap_num1 - swap_num2;//num1_2 = 7 -5
//	  cout << "swap_num1 = :"<< swap_num1 << endl;
//	  cout <<"swap_num2 = :"<< swap_num2 << endl;
	  cout << "After Swap  num1 = " << swap_num1 << ", num2 = " << swap_num2 << endl;
    // 2.11.25
	/*
	Rewrite the swap program without using a third variable.
	Level 2: Type Casting & Arithmetic Practice

Ask the user for distance in kilometers. Convert it to meters, centimeters, and millimeters.
 
Input two integers and show the result of integer division and floating-point division.

Write a program that takes radius and prints the area and circumference of a circle.

Calculate the Body Mass Index (BMI):

Input: weight (kg) and height (m)

Output: BMI = weight / (height × height)

Convert temperature from Celsius to Fahrenheit and vice versa.

	*/
	//Ask the user for distance in kilometers. Convert it to meters, centimeters, and millimeters.
//	int km,meters,centimeters,millimeters;
     double km, meters, centimeters, millimeters;
	 cout << "enter the distance in kilometers :";
	 cin >> km;
	 meters = km * 1000;
	 centimeters = km * 100000;
	 millimeters = km * 1000000;
	 cout << "km =" << km << endl
	 <<"meters =" << meters << endl
	 <<"centimeters =" << centimeters << endl
	 << "millimeters =" << millimeters << endl
	 << endl;	
	 
//Input two integers and show the result of integer division and floating-point division.
	int valu_1 = 10,valu_2 = 20;
	float ans = (float)valu_1/valu_2;
	cout<<fixed<<setprecision(4);
	cout<<ans<<endl;
	
//	Calculate the Body Mass Index (BMI):
 	float bmi,weight,height,kg;
 	cout << "enter weight in kg ";
	cin >> kg;
 	cout << "enter height in m ";
 	cin >> height;
 	bmi = weight/(height*height);
 	cout<<fixed<<setprecision(4);
 	cout << bmi;
 //Convert temperature from Celsius to Fahrenheit and vice versa.
 	float celsius,fahrenheit;
 	cout << "enter celsius";
	cin >> celsius;
	cout << "enter fahrenheit";
	cin >> fahrenheit;
 	fahrenheit = (celsius * 1.8)+32;
 	celsius = (fahrenheit-32)/1.8;
 	cout << "Celsius to Fahrenheit";
 	cout<<fixed<<setprecision(4);
	cout<<celsius << "F"<<endl;
	cout << "Fahrenheit to Celsius";
	cout<<fixed<<setprecision(4);
	cout<<fahrenheit << "C"<<endl;
 	
	  
}
