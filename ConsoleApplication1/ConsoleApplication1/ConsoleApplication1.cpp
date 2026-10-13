// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <list>
#include <vector>
using namespace std;

// int main () {
//     std::cout << "Hello world" << std::endl;
// ////Here std:: is used to omit the "using namespace std;"    
// From https://www.w3schools.com/: "Using std:: makes it clear where names come from and 
// avoids name conflicts in larger programs."
//     return 0;
// }

//it can be also written as:
//Multi - line Comment example:
/* The code below will print the words Hello World!
to the screen, and it is amazing */
// add other separeate functions for the uni tasks
//Basic Data Types
//bool	1 byte	Stores true or false values
//char	1 byte	Stores a single character/letter/number, or ASCII values
//int	2 or 4 bytes	Stores whole numbers, without decimals
//float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
//double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
int NajMalkoObshtooKratno()
{
    //340
    //100
    int a;
    int b;
    cout << "Write the first number" << endl;
    cin >> a;
    cout << "Write the second number" << endl;
    cin >> b;
    int c = a * b;
    int i = c;
    //use list
    list<int> Numbers_which_can_divide_C;
    while (i <= c)
    {
        if (i == 0)
        {
            //stop the loop
            break;
            
        }
        if (c % i != 0)
        {
            cout << "No " << c << " Can not divide " << i << endl;
        }
        else
        {
            cout << "Yes " << c << " can divide the number " << i << endl;
            if (i % a == 0 && i % b == 0)
            {
                cout << "Yes the number " << i << " can divide " << a << " and " << b  << endl;
                //sloji chisloto v lista
                Numbers_which_can_divide_C.push_front(i);
            }
        }
        i--;
    }
    //cout << Numbers_which_can_divide_C.size();
    //the list   must be printed using for loop with the arrray's lenght
    /*for (int t = 0; t < Numbers_which_can_divide_C.size(); t++)
    {
        cout << Numbers_which_can_divide_C[t] << endl;
    }*/
    for (int number : Numbers_which_can_divide_C)
    {
        cout << number << endl;
        //ostava samo naj-malkoto ot vshicki chisla da se pritne
    }
    //the function is not yet ready because c++ lists are not yet studied
    return 0;
}
int cIfElsew3()
{
    //if
    //example
    if (20 > 18) {
        cout << "20 is greater than 18" << endl;
    }
    //We can also use variables in conditions:
    int x = 20;
    int y = 18;

    if (x > y) {
        cout << "x is greater than y" << endl;  
    }
    //else
    int time = 20;

    if (time < 18) {
        cout << "Good day.";
    }
    else {
        cout << "Good evening Bro. What are u doing?";
    }

    // Outputs "Good evening."
    
    //else if
    //short hand if else
    //nested if
    //logiacal operators
    //real life examples
    //code challlenge

    return 0;
}
int loops()
{
    for (int i = 0; i < 5; i++) {//HOLY SHIT THIS IS ABSOLUTELY THE SAME AS IN C#
        cout << "Hello World\n";
    }//

    /////////////////
    // Initialization
    int i = 1;

    // while loop that starts with i = 1 and ends
    // when i is greater than 5.
    while (i <= 5) {
        cout << i << " " << endl;

        // Updation
        i++;
    } //THIS WHILE SHITTY THING IS ALSO THE SAME AS IN C# DEAM BROOOOOOOOOO..............
    //THE FOREACH LOOP ALSO EXISTS IN C++
    return 0;
}
int Boolean_Values() {
    //Boolean Values
    //A boolean variable is declared with the bool keyword and can take the values true or false:
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << isCodingFun << "\n";  // Outputs 1 (tяrue)
    cout << isFishTasty << "\n"; // Outputs 0 (false)
    //Printing true/false With boolalpha
    bool isCodingFun1 = true;
    bool isFishTasty1 = false;

    cout << boolalpha; // enable printing "true"/"false"

    cout << isCodingFun1 << "\n";   // Outputs true
    cout << isFishTasty1 << "\n";  // Outputs false
    return 0;
}


int uchebeChas() {
    int broiY;
    int broiOstanali;

    cout << "vuvedi broi studentu s Y hromozona";
    cin >> broiY;


    cout << "vuvedi broi studentu bez Y hromozona";
    cin >> broiOstanali;
    double procentizaEdinChovek = (double)100 / (double)(broiY + broiOstanali);
    cout << "procent hora s Y hrmozoan" << broiY * procentizaEdinChovek << endl;

    cout << "procent hora bez Y hr." << 100 - broiY * procentizaEdinChovek << endl;
    return 0;

}
int Math()
{
    
    //The max(x,y) function can be used to find the highest value of x and y:
    cout << max(5, 10) << endl;

    //And the min(x,y) function can be used to find the lowest value of x and y:
    cout << min(5, 10) << endl;
    /////////////
    cout << "ldas;fsad;fsda;kfasdl;fk \n";
    cout << sqrt(64) << endl;//(square root)
    cout << round(2.6) << endl;//rounds a number
    cout << log(2) << endl;//(natural logarithm)
    return 0;
}
int  w3schools2()
{
    //the at() function 
    string myString = "Hello";
    cout << myString << endl; // Outputs Hello

    cout << myString.at(0) << endl;  // First character
    cout << myString.at(1) << endl;  // Second character
    cout << myString.at(myString.length() - 1) << "\n\n";  // Last character

    myString.at(0) = 'J';
    cout << myString << endl;  // Outputs Jello

    ///////////////////
    ///Strings - Special Characters

    //string txt = "We are the so-called "Vikings" from the north.";
    //this is wrong
    /////the right way
    string txt = "We are the so-called \"Vikings\" from the north. \n";
    cout << txt;
    // single quiote
    string txt1 = "It\'s alright. \n";
    cout << txt1 << " space " <<  txt;
    ///tab
    string txt2 = "Hello\tWorld!";
    cout << txt2;
    ////////////////
    //////////
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;

    // Type your first name: John
    // Your name is: John
    ////C++ User Input Strings w3 schools last revied page
    return 0;
}

int  w3schools1()
{
    // Include the string library
    //#include <string>

    string greeting = "Hello \n";
    string greeting2 = "Hello and welcome \n";

    // Print the string
    cout << greeting;
    cout << greeting2;

    //Concatenation
    string firstName = "John ";
    string lastName = " Doe ";
    string fullName = firstName + lastName;
    cout << fullName << endl;
    ////////////////////

    string firstName1 = "John ";
    string lastName1 = "Doe";
    string fullName1 = firstName1.append(lastName1);
    cout << fullName1 << endl;

    /////////////////////////
    string str = "aldsalsjhgjhgjdsfkfdghkdsjfghkjadsfhjksadf";
    cout << "the lenght of the string is: " << str.length() << " symbols \n";

    //////////////
    string myString = "Hello";
    cout << myString[0] << "\n";// Outputs H and prints new line
    cout << myString[2];// prints l
    
    return 0;
}
int  BobiFunction()//just wanted to see if i can declare void function🏗️(because i know in c# this is possible, but wasn't sure about c++)
{
    int age = 19;//there are mistakes in trhis 
    /*string names = "Boris P";
    string zodia = "vodolei";
    cout << "Guess the names, the zodia and the age";*/
    int gueessInput;
    cin >> gueessInput;
    //if(gueessInput < age &&  gueessInput > age)//built this if statement using my C# knowledge, but it turned out to be wrong
    //{
    //    cout << "Wrong age!!!!! Try again";
    //}
    if (gueessInput > age)
    {
        cout << "wrong guess......";
    }
    else  if(gueessInput < age)
    {
        cout << "wrong guess......";
    }
    else
    {
        cout << "yes";
    }
    return 0;
}
int Mathematic_things_because_its_inevitable() {
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

    int m = 5;
    int n = 3;
    cout << m - n << "\n";//Subtraction
    cout << m * n << "\n";//Multiplication

    //Arithmetic Operators full example
    int x = 10;
    int y = 3;

    cout << (x + y) << "\n"; // 13
    cout << (x - y) << "\n"; // 7
    cout << (x * y) << "\n"; // 30
    cout << (x / y) << "\n"; // 3 (integer division)
    cout << (x % y) << "\n"; // 1

    int z = 5;
    ++z;
    cout << z << "\n"; // 6
    --z;
    cout << z << "\n"; // 5
    cout << "\n";//decided to check if i can insert an empty line this way
    cout << z << "\n"; // 5


    //Assignment Operators list:
    //=
    int nb = 5;
    cout << nb << "\n";

    //+=
    int rt = 5;
    rt += 3;
    cout << rt << "\n";
    cout << "\n";
    //-= x -= 3	x = x - 3
    //*= x *= 3	x = x * 3
    // /= x /= 3	x = x / 3
    // %= x %= 3	x = x % 3
    // &= x &= 3	x = x & 3
    // |= x |= 3	x = x | 3
    // ^= x ^= 3	x = x ^ 3
    // >>= x >>= 3	x = x >> 3
    // <<= x <<= 3	x = x << 3

    //Comparison Operators list:
    // ==	Equal to	x == y	
    // !=	Not equal	x != y	
    // >	Greater than	x > y	
    // <	Less than	x < y	
    // >=	Greater than or equal to	x >= y	
    // <=	Less than or equal to	x <= y


    ////
    int age = 18;
    cout << (age >= 18) << "\n"; // 1 (true), old enough to vote
    cout << (age < 18) << "\n";  // 0 (false)
    return 0;
}
int Real_Life_Example() {
    // Student data
    int studentID = 15;
    int studentAge = 23;
    double studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    cout << "Student ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n";
    return 0;
}
int main7() {// little demo calculator
    int x, y;//declaring variables
    int sum;// declaring the sum variable which will hold the result
    cout << "Type a number: ";//here the user types the the first number
    cin >> x;//the user enters a number
    cout << "Type another number: ";
    cin >> y;// the user types the second number
    sum = x + y;// here the summing happens
    cout << "Sum is: " << sum;//the code prints the result
    return 0;// end of the function
}

int main6() {
    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of a rectangle
    int area = length * width;

    // Print the variables
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";

    return 0;// end of the function
}

const int myNum = 15;  // myNum will always be 15(It can't be changed because of the const)
int main5() {
    int myAge = 35;//declaring int variable
    cout << "I am " << myAge << " years old."; //printing text with the varuable's value
    return 0;// end of the function
}

int main4() {
    int myNum;
    myNum = 15;
    ////////////////
    int myNum1 = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    float floatVariable = 6.77098234;
    //The precision of a floating point value indicates how many digits the value can have after the decimal point. 
    // The precision of float is only six or seven
    //decimal digits, while double variables have a precision of about 15 digits. 
    ///Therefore it is safer to use double for most calculations.
    //Scientific Number example:
    //A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    cout << f1 << "Science NUmber ";
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    ////////////////////////////
    // bools example, yeah the true and false..... Thing
    bool isCodingFun = true;//Sometimes the coding is not fun(so u know just in case)
    bool isFishTasty = false;
    cout << isCodingFun << "\n";  // Outputs 1 (true)
    cout << isFishTasty << "\n";  // Outputs 0 (false)
    //////////////////////////
    int x = 5, y = 6, z = 50;//Multiple Variables declaration example
    cout << x + y + z << "\n";
    cout << "myNum \n";
    auto r = 5; // r is automatically treated as int
    //JUST LIKE THE "VAR" TYPE IN C#
    return 0;
	//creating a variable called myNum and assigning it the value of 15
    //If you are viewing this code and u are new to programing/coding.... EVERY FUCKING VARIABLE MUST HAVE A UNIQE NAME NOT SHIT 
    // LIKE VARIABLE A OR B.
}

int main3() {
	cout << "Hello World! \n" << endl;//endl - this also works to insert a new line
    cout << "I am learning C++ \n";
    return 0;
}

int main1() { cout << " Hello World!(Main1) "; return 0; }

int main2() {
    std::cout << " Hello World from Bobi who's learning c++ right now(Main2) \n";
    return 0;
}

int main() {
    /*cout << " Hello World(Main function) \n";
    cout << " MainM \n";
    cout << "126777 \n";
    cout << 2 * 5;*/
	//main1();// the second main function is called here
	//main2();// the third main function is called here
	//main3();// the fourth main function is called here
    //main4();
    //main5();
    //main6();
    //main7();
    //Real_Life_Example();
    //Mathematic_things_because_its_inevitable();
    //BobiFunction();
    //w3schools1();
    //w3schools2();
    //Math();
    //uchebeChas();
    //Boolean_Values();
    //loops();
    //cIfElsew3();
    NajMalkoObshtooKratno();
    return 0;
}
// "\n" means new line
//learning c++ as a begginner



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
