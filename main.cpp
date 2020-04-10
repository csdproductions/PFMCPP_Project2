#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 Integer
 Character
 Boolean
 Floating Point
 Double Floating Point
 Valueless or Void

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    // INTS
    int noOfDoors = 7;
    int noOfStairs = 10;
    int noOfCupboards = 6;

    ignoreUnused(noOfDoors, noOfStairs, noOfCupboards);

    // CHARS
    char a = 'A';
    char b = 'B';
    char c = 'C';
    
    ignoreUnused(a, b, c);

    // BOOLEAN
    bool isTrue = 1;
    bool isFalse = 0;
    bool areTheBengalsTheWorstNFLTeamEver = 1;

    ignoreUnused(isTrue, isFalse, areTheBengalsTheWorstNFLTeamEver);

    // FLOATING POINT
    float myBankBalance = 0.0f;
    float myWifesBankBalance = 100.0f;
    float myDogsBankBalance = 500.0f;

    ignoreUnused(myBankBalance, myWifesBankBalance, myDogsBankBalance);

    // DOUBLE FLOATING POINT
    double pi = 3.14159265359;
    double goldenRatio = 1.61803398875;
    double squareRoot2 = 1.41421356237;

    ignoreUnused(pi, goldenRatio, squareRoot2);

    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int myAddingFunction(int a, int b)
{
    ignoreUnused(a, b);
    return {};
}

/*
 2)
 */
void displayMyBirthday(int day, int month, int year)
{
    ignoreUnused(day, month, year);
}

/*
 3)
 */
float convertFahrenheitToCelcius(float degrees)
{
    ignoreUnused(degrees);
    return {};
}

/*
 4)
 */
bool isThisAGoodWine(int year)
{
    ignoreUnused(year);
    return {};
}
/*
 5)
 */
float calculateInterest(float currentBalance = 0.0f, float interestRate = 2.0f)
{
    ignoreUnused(currentBalance, interestRate);
    return {};
}

/*
 6)
 */
float convertDogYearsToHumanYears(float dogAge, float multiplier = 7.0f)
{
    ignoreUnused(dogAge, multiplier);
    return {};
}

/*
 7)
 */
void xboxOrPS4(char vote1, char vote2, char vote3 = 'P')
{
    ignoreUnused(vote1, vote2, vote3);
}

/*
 8)
 */
bool checkSnowboardRidePosition(char goofyOrRegular)
{
    ignoreUnused(goofyOrRegular);
    return {};
}

/*
 9)
 */
float flightPriceTotal(int noOfPassengers, float flightPrices)
{
    ignoreUnused(noOfPassengers, flightPrices);
    return {};
}

/*
 10)
 */
float calculate3dPosition(float x, float y = 2.0f, float z = 1.0f)
{
    ignoreUnused(x, y, z);
    return{};
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    ignoreUnused(carRented);

    //1)
    auto calculateThisNumber = myAddingFunction(3, 4);
    ignoreUnused(calculateThisNumber);
    //2)
    displayMyBirthday(6, 11, 1986);
    //3)
    auto currentTemp = convertFahrenheitToCelcius(32.0f);
    ignoreUnused(currentTemp);
    //4)
    auto wineRating = isThisAGoodWine(1987);
    ignoreUnused(wineRating);
    //5)
    auto howMuchMoney = calculateInterest(100.0f);
    ignoreUnused(howMuchMoney);
    //6)
    auto myDogAge = convertDogYearsToHumanYears(11.1);
    ignoreUnused(myDogAge);
    //7)
    xboxOrPS4('X', 'X');
    //8)
    auto boardStance = checkSnowboardRidePosition('G');
    ignoreUnused(boardStance);
    //9)
    auto flightsToTheMoon = flightPriceTotal(5, 699.99);
    ignoreUnused(flightsToTheMoon);
    //10)
    auto currentPosition = calculate3dPosition(10.0, 0.5, 8.7);
    ignoreUnused(currentPosition);
     
    std::cout << "good to go!" << std::endl;
    return 0;    
}
