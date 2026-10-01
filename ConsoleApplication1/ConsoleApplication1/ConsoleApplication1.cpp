// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// int main () {
//     std::cout << "Hello world" << std::endl;
//     return 0;
// }

//it can be also written as:
//Multi - line Comment example:
/* The code below will print the words Hello World!
to the screen, and it is amazing */


int main7() {
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;//the user enters a number
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
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

const int myNum = 15;  // myNum will always be 15(It can't be changed)
int main5() {
    int myAge = 35;
    cout << "I am " << myAge << " years old.";
    return 0;
}

int main4() {
    int myNum;
    myNum = 15;
    ////////////////
    int myNum1 = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    //////////////////////////
    int x = 5, y = 6, z = 50;
    cout << x + y + z << "\n";
    cout << "myNum \n";
    return 0;
	//creating a variable called myNum and assigning it the value of 15
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
    cout << " Hello World(Main function) \n";
    cout << " MainM \n";
    cout << "126777 \n";
    cout << 2 * 5;
	main1();// the second main function is called here
	main2();// the third main function is called here
	main3();// the fourth main function is called here
    main4();
    main5();
    main6();
    main7();
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
