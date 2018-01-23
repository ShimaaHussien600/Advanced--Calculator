#include<iostream>
#include<cmath>
#define Pi 3.141592654;
using namespace std;
double number1, number2, result, num, res;  //defined the global variables.
char choice;

bool x = false;    //defined flag
double arthimatic();       //the declaration of arthimatic function
double power();            // the decleration of power function
double trigonometric();    // the decleration of trigonometric function
void programmer();         // the decleration of programmer function
int main(){
	do{                    //opened do while loop
		system("cls");     //clear the screen

		                   //the menu of calculator
		cout << "         \t\tScientific Calculator\n";
		cout << "\t\t\t    *************\n\n";
		cout << "===============================================\n";
		cout << "*      1-Standard mathematics                 *\n";
		cout << "*      2-Power functions                      *\n";
		cout << "*      3-Trigonometric functions              *\n";
		cout << "*      4-Programmer                           *\n";
		cout << "*      5-Exit                                 *\n";
		cout << "===============================================\n";
		cout << "Your choice ";    
		cin >> choice;            //the user choose from menu
		system("cls");
		switch (choice)                  //open switch to make the operator which the user choose
		{
		case '1':{result = arthimatic();                  //the call of the arthmatic function
			if (!x)cout << "\nYour result = " << result << endl;          //print the result if flag= false 
		}break;
		case '2':{result = power();                       //the call of the power function
			cout << "\nYour result = " << result << endl;              //print the result
			break; }
		case '3':{result = trigonometric();               //the call of the trigonometric function
			cout << "\nYour result = " << result << endl; }               //print the result
				 break;
		case '4':{programmer(); }                         //the call of the programmer function
				 break;
		default:
			break;
		}  //end of the switch

		system("pause");
	} while (choice != '5');                              //the condition of do while loop 
	                                                   //the do while loop ended if the user enter 5 and the program exit

	return 0;
}
double arthimatic(){                                      //the defenition of arthimatic function 

	                             //the menu of arthimatic function
	cout << "===============================================\n";
	cout << "*           1-Addation                        *\n";
	cout << "*           2-Subtraction                     *\n";
	cout << "*           3-Multiplication                  *\n";
	cout << "*           4-Division                        *\n";
	cout << "===============================================\n";
	char choice;
	cout << "Your choice ";
	cin >> choice;             // the user choose from menu
	system("cls");
	cout << "Enter first number ====>  ";
	cin >> number1;           //the user enter the first number
	cout << "\n===============================================\n";
	cout << "Enter second number ====>  ";
	cin >> number2;           //the user enter the second number
	cout << "\n===============================================\n";
	switch (choice)                //open switch to make the operator which the user choose
	{
	case '1': return number1 + number2;       //return the Addation operator
		break;
	case '2':return number1 - number2;         //return the Subtraction operator
		break;
	case '3':return number1*number2;             //return the Multiplication operator
		break;
	case '4':{
		while (number2 == 0){     
			system("cls");

			cout << "===> Error!!!! Can't divide on 0\n\n";      //print error if second number=0
			cout << "Press Y to enter other number ";
			cin >> choice;             // the user choose to enter other number
			if (choice == 'y' || choice == 'Y'){
				cout << "\nEnter second number ===> ";
				cin >> number2;             //the user enter the second number
			}
			else {

				x = true;             //flag=true
				return 0;
			}
		}

		return number1 / number2;         //return the Division operator
	}default:
		break;
	}

}
double power(){                //the defenition of power function
	cout << "===============================================\n";
	cout << "*           1-power                           *\n";
	cout << "*           2-Root                            *\n";
	cout << "*           3-Factorial                       *\n";
	cout << "*           4-Mod                             *\n";
	cout << "*           5-Log                             *\n";
	cout << "*           6-abs                             *\n";
	cout << "*           7-Ln(x)                           *\n";
	cout << "===============================================\n";
	char choice;
	cin >> choice;              //the user choose from menu
	system("cls");
	cout << "Enter the number ====>  ";
	cin >> number1;
	cout << "\n===============================================\n";
	switch (choice)         //open switch to make the operator which the user choose
	{

	case '1':{cout << "Enter the power ";
		cin >> number2;               //the user enter the power
		return pow(number1, number2); }
	case '2':{cout << "Enter your root degree ";
		cin >> number2;           //the user enter the root degree
		number2 = 1.0 / number2;     //convert root to power
		return pow(number1, number2); }
	case '3':{double res = 1;   //define variable to calculat the factorial
		for (int i = 1; i <= number1; i++)res *= i;      //for loop to calculat the factorial
		return res; }                  //return factorial
	case '4':{
		cout << "Enter number2 ";
		cin >> number2;
		return static_cast<int>(number1) % static_cast<int>(number2); }    //use static_cast to convert from double to integer and return the mood
	case '5':{
		cout << "*       1- For Base 2                         *\n";
		cout << "*       2- For Base 10                        *\n";
		cout << "===============================================\n";
		cout << "Your choice "; 
		cin >> number2;             //the user choose the base
		while (number2 != 1 && number2 != 2){    // while loop ask if the choose error 
			system("cls");
			cout << "Number2 should = 1 or 2\n\n";
			cout << "*       1- For Base 2                         *\n";
			cout << "*       2- For Base 10                        *\n";
			cout << "===============================================\n";
			cout << "  Your choice ";
			cin >> number2;            //the user choose the base again
		};
		if (number2 == 1)
			return log2(number1);        //return log if the base=2
		else if (number2 == 2)
			return log10(number1); }       //return log if the base=10

	case '6':return abs(number1);         //return abs
	case '7':return log(number1);          //return ln

	default:
		break;
	}
}
double trigonometric()           //the defenition of trigonometric function
{
	cout << "===============================================\n";
	cout << "*         1-sin                               *\n";
	cout << "*         2-cos                               *\n";
	cout << "*         3-tan                               *\n";
	cout << "*                                             *\n";
	cout << "*         4-sin^-1                            *\n";
	cout << "*         5-cos^-1                            *\n";
	cout << "*         6-tan^-1                            *\n";
	cout << "*                                             *\n";
	cout << "*         7-sinh                              *\n";
	cout << "*         8-cosh                              *\n";
	cout << "*         9-tanh                              *\n";
	cout << "*                                             *\n";
	cout << "*         10-sinh^-1                          *\n";
	cout << "*         11-cosh^-1                          *\n";
	cout << "*         12-tanh^-1                          *\n";
	cout << "===============================================\n";
	char choice;
	cout << "Your choice ";
	cin >> choice;                   //the user choose from menu
	system("cls");
	cout << "Enter your number ===> ";
	cin >> number1;   //the user enter number 
	num = number1;       //conver number1 from double to num(integer)
	number1 = number1 / 180.0 * Pi;              //convert the number from degrees to radians
	switch (choice)                         //open switch to make the operator which the user choose
	{
	case '1':return sin(number1);         //return result of sin
	case '2':return cos(number1);           //return result of cos
	case '3':return tan(number1);          //return result of tan
	case '4':
	{
		res = asin(num) * 180.0 / Pi;     //function used number to convert it to sin^-1
		return res;
	}
	case '5':{
		res = acos(num) * 180.0 / Pi;      //function used number to convert it to cos^-1
		return res;
	}
	case '6':{
		res = atan(num) * 180.0 / Pi;    //function used number to convert it to tan^-1
		return res;
	}
	case '7':return sinh(num);           
	case '8':return cosh(num);
	case '9':return tanh(num);
	case '10':return asinh(num);
	case '11':return acosh(num);
	case '12':return atanh(num);
	default:
		break;
	}

	return 0;
}
void programmer(){        //the defenition of programmer function
	cout << "========================================================\n";
	cout << "*       1-Convert from Decimal to Binary               *\n";
	cout << "*       2-Convert from Binary to Decimal               *\n";
	cout << "*       3-Convert from Binary to Octal                 *\n";
	cout << "*       4-Convert from Binary to Hexadecimal           *\n";
	cout << "========================================================\n";
	char choice;
	cout << "Your choice ";
	cin >> choice;                      //the user choose from menu
	system("cls");
	cout << "Enter your number ===> ";
	cin >> number1;
	int number = number1;
	int a[20], cnt = 0;
	double x, y ;
	switch (choice)                       //open switch to make the operator which the user choose
	{
	case '1':
	{
		while (number > 0)
		{
			int mod = number % 2;
			number /= 2;
			a[cnt++] = mod;
		}

		cout << "\nYor result = "; 
		for (int i = cnt - 1; i >= 0; i--)
			cout << a[i];
		cout << endl;
	}
	break;
	case '2':{
		int sum = 0,z=0;
		while (number > 0)
		{
			int mod = number % 10;
			number /= 10;
			sum += mod*pow(2, z);
			z++;
		}
		cout << "\nYor result = " << sum << endl;
	}
			 break;
	
	
	}
}