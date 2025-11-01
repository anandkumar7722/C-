#include<iostream>
#include <string>
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
      cout << "Before Swap ? num1 = " << swap_num1 << ", num2 = " << swap_num2 << endl;
	  swap_num1 = swap_num1+swap_num2;
	  swap_num2 = swap_num1 - swap_num2;
	  swap_num1 = swap_num1 - swap_num2;
	  cout << "swap_num1 = :"<< swap_num1 << endl;
	  cout <<"swap_num2 = :"<< swap_num2 << endl;
	  cout << "After Swap ? num1 = " << swap_num1 << ", num2 = " << swap_num2 << endl;

	  
	  
	  
}
