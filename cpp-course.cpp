// Coded while watching: https://www.youtube.com/watch?v=-TkoO8Z07hI

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

int main() {
    // std = standard namespace   cout = character output
    // \n OR << std::endl (flushes buffer)
    //std::cout << "Hello world\n"; 
    //std::cout << "How you doing?\n"; 

    // This is a comment
    /*
        This
        is
        a
        multiline
        comment
    */

    /*
        Variable: Allocated space in memory to store a value.
        We refer to a variable's name to access the stored value.
        That var now behaves as if it what the value it contais.
        BUT we need to declare what type of data we are storing.

        Code:

        //int x; // Declaration
        //x = 5; // Initialization / Assignment
        int x = 5; // Declaration + Initialization
        int y = 6;
        int sum = x + y;

        std::cout << x << '\n';
        std::cout << y << '\n'; 
        std::cout << sum << '\n';
    */

    /*
        Data types: type of value a variable has

        Code:

        // integer: whole number
        int age = 21, year = 2022, days = 7;
        std::cout << days << '\n';

        // double: number including decimal
        double price = 10.99, gpa = 2.5, temperature = 25.1;
        std::cout << price << '\n';

        // single character
        char grade = 'A', initial = 'B', currency = '$';
        std::cout << initial << '\n';

        // boolean: true or false / 1 or 0
        bool student = true, teacher = false, forSale = true; 
        
        // string: objects that represents a sequence of text
        // "bunch of characters"
        std::string name = "Bernardo", day = "Friday", food = "pizza";
        std::cout << name << '\n';
        std::cout << "Hello " << name << "\nYou are " << age << " years old\n";
    */
    
    /*
        Constant: fixed value that cannot be altered by the program during its execution
        "read-only variables"

        Code:

        const double PI = 3.14159;
        double radius = 10, circumference = 2 * PI * radius;
        std::cout << circumference << "cm";

        const int LIGHTSPEED = 299792458;
        const int WIDTH = 1920, HEIGHT = 1080;
    */

    /*
        Namespace: provides a solution for preventing name conflicts
        in large projects. Each entity needs a unique name.
        A namespace allows for identically named entities as long as 
        the namespaces are different.

        Code:

        // outside main()
        namespace first { int x = 1; }
        namespace second { int x = 2; }

        int x = 0;
        std::cout << x;
        std::cout << first::x; // :: = scope resolution operator
        std::cout << second::x;

        // declares what namespace is being used
        using namespace first;
        std::cout << x; // out: 1

        // use this to avoid typing sts:: everytime, but adds other methods
        using namespace std;

        // use this to avoid std::cout -> cout
        using std::cout;
        cout << "Ok";

        using std::string;
        string name = "Yup";
    */

    /*
        typedef: reserved keyword that gives an existing datatype a "nickname"
        Helps readability, reduces typos
        Good practice: use _t at the end of the type name
        Replaced with 'using' (works better w/ templates)

        Code:

        typedef std::vector<std::pair<std::string, int>> pairlist_t;
        pairlist_t pairlist;

        typedef std::string text_t;
        text_t name = "Bernardo";
        std::cout << name << '\n';

        typedef int number_t;   
        number_t age = 8;
        std::cout << age << '\n';
    */
    
    /*
        'using' keyword: substituted typedef

        Code:

        using text_t = std::string;
        using number_t = int;
    */

    /*
        Arithmetic operators
        + (addition)
        - (subtraction)
        * (multiplication)
        / (division)
        % (modulus) -> division remainder
        ++ (increment)
        -- (decrement)

        Code:

        int xx = 4;
        int yy = 2;
        
        //float zz = xx / (float) yy;
        float zz = xx % yy;

        std::cout << zz << "\n\n";
    */

    /*
        Augmented assignment operators = replace a statement
        where an operator takes a variable as one of its arguments
        and then assigns the result back to the same variable
        x = x + 1
        x += 1

        x = x -1
        x -= 1

        Code:

        int num = 10;
        num += 2;
        num -= 3;
        num *= 4;
        num /= 2;
        num %= 3;
    */

    /*
        Increase/Decrease operator: adds/subtracts 1 to the number

        Code:

        int x = 2;
        x++; // x = x + 1;
        x--; // x = x - 1;
    */

    /*
        Type conversion: conversion of a value of one data type to another
        Implicit = automatic
        Explicit = precede value with new data type (int) value

        Code:

        double x = (int) 3.14;
        std::cout << x;

        std::cout << (char) 100;

        int correct = 8, questions = 10;
        double score = correct / (double) questions * 100;
        std::cout << score << "%";
    */

    /*
        Input:  
            std::cin >> (extraction operator) - reads until space
            std::getline(std::cin >> std::ws, var) - reads until newline
        Output: 
            std::cout << (insertion operator)
        
        Code:

        std::string name;
        int age;

        std::cout << "What's your name? ";
        std::getline(std::cin >> std::ws, name);
        std::cout << "What's your age? ";
        std::cin >> age;

        std::cout << "Hello " << name << '\n';
        std::cout << "You are " << age << " years old\n";
    */

    /*
        Math operations

        Code:
    
        double x = 3, y = 4, pi = 3.14, z;

        z = std::max(x, y); // returns greater number b/w x and y
        z = std::min(x, y); // returns minimum number b/w x and y
        z = pow(2, 3);      // 2 to the power of 4
        z = sqrt(9);        // square root of 9
        z = abs(-4);        // find absolute from 0 
        z = round(pi);      // removes decimals, leaves integer
        z = ceil(pi);       // rounds up
        z = floor(pi);      // rounds down
        
        std::cout << z;
    */

    /*
        Hipothenuse of a right triangle

        Code:

        double a, b, c;

        std::cout << "Enter side A: ";
        std::cin >> a;
        std::cout << "Enter side B: ";
        std::cin >> b;
        
        c = sqrt(pow(a, 2) + pow(b, 2));

        std::cout << "Side C: " << c << '\n';
    */
    
    /*
        If statements: do something if a condition is true

        Code:

        int age;

        std::cout << "Enter your age: ";
        std::cin >> age;

        if(age >= 18) {
            std::cout << "Welcome to the site\n";
        }
        else if(age < 0) {
            std::cout << "You haven't been born yet\n";
        }
        // Not gonna be executed
        else if(age >= 100) {
            std::cout << "You're too old to enter this site\n";
        }
        else {
            std::cout << "You're not old enough to enter\n";
        }
    */

    /*
        Switch: a more efficient way to using many "else if"
        statements, allows value to be tested against many cases

        Code:

        int day;
        std::cout << "Enter a day (1-7): ";
        std::cin >> day;

        switch(day) {
            case 1:
                std::cout << "It's Sunday";
                break;
            case 2:
                std::cout << "It's Monday";
                break;
            case 3:
                std::cout << "It's Tuesday";
                break;
            case 4:
                std::cout << "It's Wednesday";
                break;
            case 5:
                std::cout << "It's Thursday";
                break;
            case 6:
                std::cout << "It's Friday";
                break;
            case 7:
                std::cout << "It's Saturday";
                break;
            default:
                std::cout << "Invalid day";
                break;
        }
    */
    
    /*
        Basic Calculator

        Code:

        char op;
        double n1, n2, res;
        
        std::cout << "Calculator\n";

        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> op;
        std::cout << "Enter number 1: ";
        std::cin >> n1;
        std::cout << "Enter number 2: ";
        std::cin >> n2;

        switch (op)
        {
        case '+':
            std::cout << "Result: " << n1 + n2 << "\n";
            break;
        case '-':
            std::cout << "Result: " << n1 - n2 << "\n";
            break;
        case '*':
            std::cout << "Result: " << n1 * n2 << "\n";
            break;
        case '/':
            std::cout << "Result: " << n1 / n2 << "\n";
            break;
        default:
            std::cout << "Invalid operator\n";
            break;
        }
    */

    /*
        Ternary operator ?: = replacement to an if/else statement
        condition ? if true : if false

        Code:

        int grade = 75;
        grade > 60 ? std::cout << "You passed\n" : std::cout << "You failed\n";
        
        int n = 9;
        n % 2 ? std::cout << "Odd number\n" : std::cout << "Even number\n";
        
        bool hungry = true;
        hungry ? std::cout << "So go eat\n" : std::cout << "Alright, go work\n";
    */    

    /*
        Logical operators:

        && (AND): checks if two conditions are true
        || (OR): checks if at least one condition is true
        ! (NOT): reverses the state of a condition

        Code:

        int temp;
        std::cout << "Enter a temperature: ";
        std::cin >> temp;

        if(temp > 0 && temp < 30) {
            std::cout << "The temperature is good\n";
        } else {
            std::cout << "The temperature is bad\n";
        }

        if(temp <= 0 || temp >= 30) {
            std::cout << "The temperature is bad\n";
        } else {
            std::cout << "The temperature is good\n";
        }

        bool sunny = true;
        if(!sunny) {
            std::cout << "It's cloudy outside";
        } else {
            std::cout << "It's sunny outside";
        }
    */

    /*
        Convert Fahrenheit - Celsius

        Code:

        double temp;
        char unit;

        std::cout << "Temperature conversion\n";
        std::cout << "F = Fahrenheit\n";
        std::cout << "C = Celsius\n";
        std::cout << "What unit would you like to convert to (F/C): ";
        std::cin >> unit;

        if(unit == 'F' || unit == 'f') {
            std::cout << "Enter the temperature in Celsius: ";
            std::cin >> temp;

            temp = (1.8 * temp) + 32.0;
            std::cout << "Temperature is: " << temp << "F\n";
        }
        else if(unit == 'C' || unit == 'c') {
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temp;

            temp = (temp - 32) / 1.8;
            std::cout << "Temperature is: " << temp << "C\n";
        }
        else {
            std::cout << "Please enter only F or C\n";
        }
    */

    /*
        String operations

        Code:

        std::string name;

        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        name.length();              // returns length of string
        name.empty();               // is string empty? (bool)
        name.clear();               // clears string
        name.append("anystring");   // appends to the end
        name.at(0);                 // returns char at index
        name.insert(0, "@");        // inserts char at index
        name.find(" ");             // finds char at index (-1: not found)
        name.erase(0, 3);           // erase from a to b indexes

        std::cout << name;
    */

    /*
        For loop: repeats a section of code a limited amount of times
    
        Code:

        for(int i = 1; i <= 10; i++) {
            std::cout << i << '\n';
        }
        for(int i = 10; i > 0; i--) {
            std::cout << i << '\n';
        }
        std::cout << "HIII\n";
    */
    
    /*
        While loop: checks a condition, THEN executes a block of code if it's true

        Code:

        std::string name;
        while(1==1) {
            std::cout << "Stuck in an infinite loop";
        }
        while(name.empty()) {
            std::cout << "Enter your name: ";
            std::getline(std::cin, name); 
        }
        std::cout << "Hello " << name << "\n";
    */
    
    /*
        Do While loop: always executes a block of code once, THEN checks a condition

        Code:

        int n;
        do {
            std::cout << "Enter a positive number: ";
            std::cin >> n;
        } while(n < 0);
        std::cout << "The number is: " << n;
    */

    /*
        Nested loop: a loop inside another loop

        Code:

        int rows, cols;
        char symbol;

        std::cout << "How many rows? ";
        std::cin >> rows;
        std::cout << "How many collumns? ";
        std::cin >> cols;
        std::cout << "Enter a symbol to use ";
        std::cin >> symbol;

        for(int i = 1; i <= rows; i++) {
            for(int j = 1; j <= cols; j++) {
                std::cout << symbol << " ";
            }
            std::cout << "\n";
        }
    */

    
    

    /*
        Continue: skips a rest of code & forces next iteration
        Break: exits a loop

        Code:

        for(int i = 0; i < 20; i++) {
            if(i == 13) continue;    // skips 13
            else if(i == 17) break;  // breaks when 17

            std::cout << i << "\n";
        }
    */
    
    /*
        Pseudo random numbers: A set of values or elements that
        are statistically random (don't use for cryptography)

        Code:

        srand(time(0));

        int n1 = rand() % 20 + 1;  // random number b/w 1-20
        int n2 = rand() % 6 + 1;   // random number b/w 1-6
        int n3 = rand() % 100 + 1; // random number b/w 1-100
        std::cout << n1 << "\n";
        std::cout << n2 << "\n";
        std::cout << n3 << "\n";
    */

    /*
        Random event generator

        Code:

        srand(time(0));
        int randN = rand() % 5 + 1;

        switch(randN) {
            case 1:
                std::cout << "You won a bumper sticker!";
                break;
            case 2:
                std::cout << "You won a t-shirt!";
                break;
            case 3:
                std::cout << "You won free lunch!";
                break;
            case 4:
                std::cout << "You won a gift card!";
                break;
            case 5:
                std::cout << "You won concert tickets!";
                break;
        }
    */

    /*
        Number guessing game

        Code:

        int num, guess, tries;
        srand(time(0));
        num = rand() % 100 + 1;
        
        std::cout << "Number guessing game\n";
        do {
            std::cout << "Enter a guess between 1-100: ";
            std::cin >> guess;
            tries++;

            if(guess > num) {
                std::cout << "Too high\n";
            } else if(guess < num) {
                std::cout << "Too low\n";
            } else {
                std::cout << "Correct! Tries: " << tries << "\n";
            }
        } while (guess != num);
    */
    
    /*
        Function: block of reusable code

        Code:

        returnType functionName(paramType param, ...) {
            return sth;
        }

        void happyBirthday() {
            std::cout << "Happy birthday to you!\n";
        }
        happyBirthday();

        std::string name = "Bernardo";
        void happyBirthday(std::string nm) {
            std::cout << "Happy birthday to " << nm;
        }

        happyBirthday(name);
    */

    /*
        Function prototype: function declaration, without a body, before main()
        ensures that calls to a function are made with the correct arguments
        
        NOTES: many Cpp compilers don't check for parameter matching
        a function prototype causes the compiler to flag an error if missing args
    
        Code:

        void hello(char[], int); // function prototype
        int main() {
            char name[] = "Bernardo";
            int age = 17;
            hello(name, age);
        }
        void hello(char name[], int age) {
            std::cout << "Hello " << name;
            std::cout << "You are " age << " years old";
        }
    */

    /*
        'return' keyword

        Code: 

        double square(double length) {
            return length * length;
        }  
        double cube(double length) {
            return length * length * length;
        }  

        double length = 5.0;
        double area = square(length); 
        double volume = cube(length);
        std::cout << "Area: " << area << "cm²";
        std::cout << "Volume: " << volume << "cm³";

        //////

        std::string concatStrings(std::string s1, std::string s2) {
            return s1 + " " + s2;
        }

        std::string firstName = "Bernardo", secondName = "Rodrigues";
        std::string fullName = concatStrings(firstName, secondName);
        std::cout << "Hello " << fullName;
    */

    /*
        Function signature = name + params
        Overloaded function: different signatures (same name, diff params) 

        Code:

        void bakePizza() {
            std::cout << "Here is your pizza\n";
        }

        void bakePizza(std::string topping1) {
            std::cout << "Here is your pizza with " << topping1 << "\n";
        }

        void bakePizza(std::string topping1, std::string topping2) {
            std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << "\n";
        }

        bakePizza();
        bakePizza("pepperoni");
        bakePizza("pepperoni", "mushrooms");
    */

    /*
        Local variables: declared inside a function or block {}
        Global variables: declared outside of all functions
            *Note*: if two variables diff scope (glob/loc), same name, 
            use ::varName to access the global var
    */

    /*
        Banking practice program

        Code:

        void showBalance(double balance);
        double deposit();
        double withdraw(double balance);    

        double balance = 123.01;
        int choice = 0;

        do {
            std::cout << "Enter your choice: \n";
            std::cout << "1. Show balance\n";
            std::cout << "2. Deposit money\n";
            std::cout << "3. Withdraw money\n";
            std::cout << "4. Exit\n";

            std::cin >> choice;
            std::cin.clear();
            fflush(stdin);

            switch(choice) {
                case 1:
                    showBalance(balance);
                    break;
                case 2:
                    balance += deposit();
                    showBalance(balance);
                    break;
                case 3:
                    balance -= withdraw(balance);
                    showBalance(balance);
                    break;
                case 4:
                    std::cout << "Thanks for visiting!\n";
                    break;
                default:
                    std::cout << "Invalid choice\n";
                    break;
            }
        } while(choice != 4);

        void showBalance(double balance) {
            std::cout << "Balance: $" << std::setprecision(2) << std::fixed << balance << "\n";
        }
        double deposit() {
            double amount = 0;

            std::cout << "Enter amount to be deposited: ";
            std::cin >> amount;

            if(amount > 0) {
                return amount;
            }
            else { 
                std::cout <turn amount;
            }
            else { 
                std::cout << "That's not a valid amount\n";
                return 0;
            }
        }
        double withdraw(double balance) {
            double amount = 0;

            std::cout << "Enter amount to be withdrawn: ";
            std::cin >> amount;

            
            if(amount > balance || amount <= 0) {
                std::cout << "That's not a valid amount\n";
                return 0;
            }
            else {
                return amount;
            }
        }< "That's not a valid amount\n";
                return 0;
            }
        }
        double withdraw(double balance) {
            double amount = 0;

            std::cout << "Enter amount to be withdrawn: ";
            std::cin >> amount;

            
            if(amount > balance || amount <= 0) {
                std::cout << "That's not a valid amount\n";
                return 0;
            }
            else {
                return amount;
            }
        }
    */

    /*
        Rock Paper Scissors

        Code:

        char getUserChoice() {
            char player;
            std::cout << "Rock Paper Scissors Game\n";

            do {
                std::cout << "Enter your choice (r/p/s):";
                std::cin >> player;
            }  while(player != 'r' && player != 'p' && player != 's');

            return player;
        }
        char getComputerChoice() {
            srand(time(0));

            char options[] = {'r', 'p', 's'};
            int option = rand() % 3;

            return options[option];
        }
        void showChoice(char choice) {
            switch (choice) {
                case 'r':
                    std::cout << "Rock\n";
                    break;
                case 'p':
                    std::cout << "Paper\n";
                    break;
                case 's':
                    std::cout << "Scissors\n";
                    break;
            }
        }
        void chooseWinner(char player, char computer) {
            if(player == computer) {
                std::cout << "It's a draw!";
            } 
            else {
                switch (player) {
                    case 'r':
                        if(computer == 'p') {
                            std::cout << "You lose!";
                        }
                        else {
                            std::cout << "You won!";
                        }
                        break;
                    case 'p':
                        if(computer == 's') {
                            std::cout << "You lose!";
                        }
                        else {
                            std::cout << "You won!";
                        }
                        break;
                    case 's':
                        if(computer == 'r') {
                            std::cout << "You lose!";
                        }
                        else {
                            std::cout << "You won!";
                        }
                        break;
                }
            }
            std::cout << "\n";
        }

        char player, computer;

        player = getUserChoice();
        std::cout << "Your choice: ";
        showChoice(player);
        computer = getComputerChoice();
        std::cout << "Computer's choice: ";
        showChoice(computer);

        chooseWinner(player, computer);
    */

    /*
        Array: a data structure that can hold multiple values
        values are acessed by an index number
        like a variable that holds multiple values

        Code:

        std::string cars[] = {"Corvette", "Mustang", "Camaro"};
        std::cout << cars[0] << "\n"; 
        
        cars[0] = "Porsche";
        std::cout << cars[0] << "\n"; 

        std::string cars2[5];
        cars2[0] = "Lamborghini";
        std::cout << cars2[0] << "\n"; 
        
        double prices[] = {5, 7.5, 9.99, 15.0};
        std::cout << prices[2] << "\n";
    */

    /*
        sizeof(): determines the size in bytes of a:
        variable, data type, class, objects, etc.

        char: 1 byte
        bool: 1 byte
        int: 4 bytes
        float: 4 bytes
        double: 8 bytes
        string: 32 bytes

        Code:

        float gpa = 2.5;
        std::cout << sizeof(gpa) << " bytes\n"; 

        std::string name = "Bernardo";
        std::cout << sizeof(name) << " bytes\n"; 

        char grades[] = {'A', 'B', 'C', 'D', 'E'};
        int e = sizeof(grades) / sizeof(grades[0]);
        std::cout << "Length of array: " << e << " elements";
    */

    /*
        Iterate over array
        
        Code:
        
        std::string students[] = {"Spongebob", "Patrick", "Squiward", "Sandy"};
        int elem = sizeof(students) / sizeof(std::string);

        // Using for loop
        for(int i = 0; i < elem; i++) {
            std::cout << students[i] << '\n';
        }

        // Using foreach loop
        for(std::string student : students) {
            std::cout << student << '\n';
        }
    */

    /*
        Pass array to a function
        (also passes its size)

        Code:
        
        double getTotal(double prices[], int size) {
            double total = 0;

            for(int i = 0; i < size; i++) {
                total += prices[i];
            }

            return total;
        }

        double prices[] = {49.99, 15.05, 75, 9.99};
        int size = sizeof(prices)/sizeof(prices[0]);
        double total = getTotal(prices, size);

        std::cout << total;
    */

    /*
        Search in array with for loop

        Code:

        int searchArray(int numbers[], int size, int element) {
            for(int i = 0; i < size; i++) {
                if(numbers[i] == element) {
                    return i;
                }
            }
            return -1;
        }

        int numbers[] = {1,2,3,4,5,6,7,8,9,10};
        int size = sizeof(numbers)/sizeof(int);
        int index, myNum;

        std::cout << "Enter element to search for: ";
        std::cin >> myNum;

        index = searchArray(numbers, size, myNum);

        if(index != -1) {
            std::cout << "Element found at index: " << index << '\n';
        }
        else {
            std::cout << "Element not found in the array" << '\n';
        }
    */

    /*
        Bubble sort

        Code:

        void bubbleSort(int array[], int size) {
            int temp;

            for(int i = 0; i < size-1; i++) {
                for(int j = 0; j < size-1-i; j++) {
                    if(array[j] > array[j+1]) {
                        temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                    }
                }
            }
        }

        int array[] = {10,2,3,5,8,7,1,6,4,9};
        int size = sizeof(array)/(sizeof(int));

        bubbleSort(array, size);

        for(int elem : array) {
            std::cout << elem << " ";
        }
    */
    
    /*
        fill(): fills a range of elements with a specified values
        fill(begin, end, value);
        fill(array, array + size, value);

        Code:

        const int SIZE = 100;
        std::string foods[SIZE];
        
        fill(foods, foods + SIZE, "pizza");

        for(std::string food : foods) {
            std::cout << food << " - ";
        }
    */

    /*
        Fill array with user input

        Code:

        std::string foods[5];
        int size = sizeof(foods) / sizeof(foods[0]);

        for(int i = 0; i < size; i++) {
            std::cout << "Enter a food you like or 'q' to quit: #" << i + 1 << ": ";
            std::string temp;
            std::getline(std::cin, temp); 

            if(temp == "q") {
                break;
            }
            else {
                foods[i] = temp;
            }
        }

        std::cout << "You like the following food:\n";

        for(std::string food : foods) {
            if(food == "") continue;
            std::cout << food << '\n';
        }
    */
    
    /*
        Multidimensional array: array made of arrays
        NECESSARY to set the collumn size 

        Code:

        std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                                 {"Corvette", "Equinox", "Silverado"},
                                 {"Challenger", "Durango", "Ram 1500"}};
        int rows = sizeof(cars) / sizeof(cars[0]);
        int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                std::cout << cars[i][j] << " ";
            }
            std::cout << '\n';
        }
    */

    /*
        Quiz Game

        Code:

        std::string questions[3] = {"1. What year was Steve Jobs born?", "2. Which year was Google created?", "3. How many planets are there in the Solar System"};
        std::string options[][3] = {{"A. 1950", "B. 1961", "C. 1955"}, {"A. 1980", "B. 1999", "C. 1998"}, {"A. 10", "B. 8", "C. 9"}};
        char answers[3] = {'C', 'C', 'B'};
        int nQuestions = sizeof(questions) / sizeof(questions[0]);
        
        char guess;
        int score;

        std::cout << "Quiz Game\n";

        for(int i = 0; i < nQuestions; i++) {
            std::cout << questions[i] << "\n";
            
            int nOptions = sizeof(options[i]) / sizeof(options[i][0]); 
            for(int j = 0; j < nOptions; j++) {
                std::cout << options[i][j] << "\n";
            }

            std::cout << "Your answer: ";
            std::cin >> guess;
            
            guess = toupper(guess);

            if(guess == answers[i]) {
                score++;
                std::cout << "Correct!\n";
            }
            else {
                std::cout << "Wrong!\n";
            }   
        }

        std::cout << "Your score was: " << score << "\n";
    */

    /*
        Memory address: a location in memory where data is stored
        can be accessed with & (address-of operator)
        represented in hexadecimal

        Code:

        std::string name = "Bro";
        int age = 21;
        bool student = true;

        std::cout << &name << '\n' << &age << '\n' << &student << '\n';
    */

    /*
        Pass by value / Pass by reference

        Code:

        // Pass by value
        // This creates copies of the params
        void swap(std::string x, std::string y) {
            std::string temp = x;
            x = y;
            y = temp;
        }

        // Pass by reference
        // This passes the memory address of each param
        // so changes the value of the var, not of a copy
        void swap(std::string x, std::string y) {
            std::string temp = x;
            x = y;
            y = temp;
        }

        std::string x = "Kool-Aid", y = "Water", temp;
        swap(x, y);
    */

    /*
        const parameter: parameter that is effectively read-only
        code is more secure & conveys intent
        useful for references and pointers

        Code:

        void printInfo(const std::string &name, const int &age) {
            //name = " ";  error with const param
            //age = 0;     error with const param
            std::cout << name << " " << age;
        }

        std::string name = "Bro";
        int age = 21;
        printInfo(name, age);
    */

    /*
        Credit card validator
        uses Luhn Algorithm
        1. Double every second digit from right to left
        If doubled number is 2 digits, split them
        2. Add all single digits from step 1
        3. Add all odd numbered digits from right to left
        4. Sum results from steps 2 & 3
        5. If step 4 is divisible by 10, # is valid

        Code:

        int getDigit(const int number) {    
            return number % 10 + (number / 10 % 10);
        }
        int sumOddDigits(const std::string cardNumber) {
            int sum = 0;

            for(int i = cardNumber.size() - 1; i >= 0; i-=2) {
                sum += getDigit(cardNumber[i] - '0');
            }
            
            return sum;
        }
        int sumEvenDigits(const std::string cardNumber) {
            int sum = 0;

            for(int i = cardNumber.size() - 2; i >= 0; i-=2) {
                sum += getDigit((cardNumber[i] - '0')*2);
            }
            
            return sum;
        }

        std::string cardNumber; 
        int res = 0;

        std::cout << "Enter a credit card #: ";
        std::cin >> cardNumber;

        res = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

        if(res % 10 == 0) {
            std::cout << "Card number is valid";
        }
        else {
            std::cout << "Card number isn't valid";
        }
    */
    
    /*
        Pointer: a variable that stores a memory address of another variable
        sometimes it's easier to work with an address

        &: address-of operator
        *: dereference operator

        Code:

        std::string name = "Bernardo";
        std::string *pName = &name;

        // to access memory address: pName
        // to access value at address: *pName
        std::cout << *pName << '\n';

        std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
        std::string *pFreePizzas = freePizzas;

        // an array is already an address
        std::cout << freePizzas << '\n';
    */
    
    /*
        Null value: a special value that means something has no value.
        when a pointer is holding a null value,
        that pointer is not pointing at anything (null pointer)
        
        nullptr = keyword that represents a null pointer literal

        nullptrs are helpful when determining if an address
        was successfully assigned to a pointer
        
        Code:

        int *ptr = nullptr;
        int x = 123;

        ptr = &x;

        if(ptr == nullptr) {
            std::cout << "address was not assigned!";
        }
        else {
            std::cout << "address was assigned!";
            std::cout << *ptr;
        }
    */

    /*
        TicTacToe

        Code:

        void drawBoard(char *spaces) { 
            std::cout << "\n     |     |     \n";
            std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "   \n";
            std::cout << "-----|-----|-----\n";
            std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "   \n";
            std::cout << "-----|-----|-----\n";
            std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "   \n";
            std::cout << "     |     |     \n\n";
        }
        void playerMove(char *spaces, char player) { 
            int number;
            do {
                std::cout << "Enter a spot to place (1-9): ";
                std::cin >> number;
                number--;

                if(spaces[number] == ' ') {
                    spaces[number] = player;
                    break;
                } else {
                    std::cout << "Invalid spot!\n";
                    number = 10;
                }

                std::cout << number;
            } while(!number > 0 || !number < 8);
        }
        void computerMove(char *spaces, char computer) {
            int number;

            srand(time(NULL));

            while(true) {
                number = rand() % 9;
                if(spaces[number] == ' ') {
                    spaces[number] = computer;
                    break;
                }
            }
        }
        bool checkWinner(char *spaces, char player, char computer) {
            // check rows
            if(spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] != ' ') {
                spaces[0] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }
            if(spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] != ' ') {
                spaces[3] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }
            if(spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] != ' ') {
                spaces[6] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }

            // check cols
            if(spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] != ' ') {
                spaces[0] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }
            if(spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] != ' ') {
                spaces[1] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }
            if(spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] != ' ') {
                spaces[2] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }

            // check left diag
            if(spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] != ' ') {
                spaces[0] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }walk
            
            // check right diag
            if(spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] != ' ') {
                spaces[2] == player ? std::cout << "You won!" : std::cout << "You lost!";
                return true; 
            }

            for(int i = 0; i < sizeof(spaces); i++) {
                if(spaces[i] == ' ') {
                    return false;
                }
            }

            std::cout << "It's a draw!";
            return true;
        }

        char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        char player = 'X', computer = 'O';
        bool running = true;

        std::cout << "TicTacToe !!!\n";
        drawBoard(spaces);

        while(running) {
            playerMove(spaces, player);
            drawBoard(spaces);

            if(checkWinner(spaces, player, computer)) {
                running = false;
                break;
            }

            computerMove(spaces, computer);
            drawBoard(spaces);

            if(checkWinner(spaces, player, computer)) {
                running = false;
                break;
            }
        }
    */
    
    /*
        Dynamic memory: memory that is allocated after the program 
        is already compuled & running.
        Use the 'new' operator to allocate
        memory in the heap rather than the stack

        Useful when we don't know how much memory
        we'll need. Makes our programs more flexible,
        especially when accepting user input.

        Code:

         int *pNum = nullptr;
        pNum = new int;
        *pNum = 21;
        std::cout << "address: " << pNum << " - value: " << *pNum; 
        delete pNum; // free memory

        char *pGrades = nullptr;
        int size;

        std::cout << "How many grades to enter in?: ";
        std::cin >> size;
        pGrades = new char[size];

        for(int i = 0; i < size; i++) {
            std::cout << "Enter grade #" << i + 1 << ": ";
            std::cin >> pGrades[i];
        }
        for(int i = 0; i < size; i++) {
            std::cout << pGrades[i] << " ";
        }
        delete[] pGrades;  // delete[] to delete array
    */

    /*
        Recursion: a programming technique where a function
        invokes itself from within
        break a complex concept into a repeatable single steps

        (iterative vs recursive) 
        advantages = less code and is cleaner
                     useful for sorting and searching algorithms
        disadvantages = uses more memory
                        slower

        Code:

        // Iteratively
        void walk(int steps) {
            for(int i = 0; i < steps; i++) {
                std::cout << "You took a step!\n";
            }
        }

        // Recursively
        void walk(int steps) {
            if(steps > 0) {
                std::cout << "You took a step!\n";
                walk(steps - 1);
            }
        }

        // Iteratively
        int factorial(int num) {
            int res = 1;
            for(int i = 1; i <= num; i++) {
                res *= i;
            }
            return res; 
        }

        // Recursively
        int factorial(int num) {
            if(num > 1) {
                return num * factorial(num - 1);
            } 
            return 1;
        }
    */

    /*
        Function templates: describes what a function looks like.
        Can be used to generate as many overloaded functions as
        needed, each using DIFFERENT DATA TYPES

        works by using typenames for the params
        use auto (compiler deduces return type)

        Code:

        template <typename T, typename U>
        auto max(T x, U y) {
            return x > y ? x : y;
        }
    */

    /*
        Struct: groups related variables under one name
        can contrain many data types (string, int, double)
        variables in a struct are known as "members"
        members can be accessed with . "Class Member Access Operator"

        Code:

        struct student {
            std::string name;
            double gpa;
            bool enrolled;
        };

        student s1;
        s1.name = "Bernardo";
        s1.gpa = 4.0;
        s1.enrolled = true;

        // OR

        student s1 = {"Bernardo", 4.0, true};
        student s2 = {"Anna", 4.0, false};

        std::cout << s1.name << " " << s1.gpa << " " << s1.enrolled << "\n";
        std::cout << s2.name << " " << s2.gpa << " " << s2.enrolled;
    */

    /*
        Pass struct to function

        Code:

        struct car {
            std::string model, color;
            int year;
        };

        void printCar(car &car) {
            std::cout << car.model << " " << car.color << " " << car.year << "\n";
        }
        void paintCar(car &car, std::string color) {
            car.color = color;
        }

        car car1 = {"Mustang", "black", 2022};
        car car2 = {"Corvette", "grey", 2021};
        paintCar(car1, "gold");
        paintCar(car2, "blue");

        printCar(car1);
        printCar(car2);
    */
    
    /*
        Enums: a user-defined data type that consists
        of paired named-integer constants.
        GREAT if you have a set of potential options

        Code:

        enum Day {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

        enum Day today = Mon;
        if(today == Sun || today == Sat) {
            std::cout << "It's weekend! Party time";
        }
        else {
            std::cout <<  "I have to work today";
        }
    */
    
    /*
        Object: a collection of attributes and methods 
        They can have characteristics and could perform actions
        Can ve used to mimic real world items (ex. Phone, Book, Dog)
        Created from a CLASS which acts as a "blue-print"

        Class = mold   
        Object = thing constructed from the mold

        Code:

        class Human {
            public:
                std::string name = "CommonGuy", occupation = "CommonJob";
                int age = 100000;

                void eat() {
                    std::cout << "This person is eating" << "\n";
                }
                void drink() {
                    std::cout << "This person is drinking" << "\n";
                }
                void sleep() {
                    std::cout << "This person is sleeping" << "\n";
                }
        };

        Human human1 = {"Bernardo", "Student", 17};
        std::cout << human1.name << " " << human1.occupation << " " << human1.age << "\n";
        human1.eat();
        human1.drink();
        human1.sleep();

        Human human2;
        std::cout << human2.name << " " << human2.occupation << " " << human2.age << "\n";
    
        class Car {
            public:
                std::string make, model, color;
                int year;

                void accelerate() {
                    std::cout << "You stepped on the gas!\n";
                }
                void brake() {
                    std::cout << "You stepped on the brakes!\n";
                }
        };

        Car car1;
        car1.make = "Ford";
        car1.model = "Mustang";
        car1.year = 2023;
        car1.color = "Black";

        std::cout << car1.make << " " << car1.model << " " << car1.year << " " << car1.color << "\n";
        car1.accelerate();
        car1.brake();
    
    */    

    /*
        Constructor: special method that is automatically called when an object
        is instantiated
        useful for assigning values to attributes as arguments

        Code:

        class Student {
            public:
                std::string name;
                int age;
                double gpa;
            
            Student(std::string name, int age, double gpa) {
                this->name = name;
                this->age = age;
                this->gpa = gpa;
            }
        };

        Student student("Bernardo", 17, 4.0);
        std::cout << student.name << " " << student.age << " " << student.gpa << "\n";
    */

    /*
        Overloaded constructors: multiple constructors w/ same name but different params
        allows for varying arguments when instantianting an object

        Code:

        class Pizza {
            public:
                std::string topping1, topping2;

            Pizza() {
            }
            Pizza(std::string topping1) {
                this->topping1 = topping1;
            }
            Pizza(std::string topping1, std::string topping2) {
                this->topping1 = topping1;
                this->topping2 = topping2;
            }
        };

        Pizza pizza1("pepperoni");
        Pizza pizza2("mushrooms", "peppers");
        Pizza pizza3;

        std::cout << pizza1.topping1 << "\n";
        std::cout << pizza2.topping1 << " and " << pizza2.topping2 << "\n";
    */

    /*
        Abstraction: hiding unnecessary data from outside a class
        getter: function that makes a private attribute READABLE
        setter: function that makes a private attribute WRITEABLE

        Code:

        class Stove {
            public:
                int getTemp() {
                    return temp;
                }
                void setTemp(int temp) {
                    if(temp < 0) {
                        temp = 0;
                    } else if(temp >= 10) {
                        temp = 10;
                    } else {
                        temp = temp;
                    }
                    this->temp = temp;
                }
            private:
                int temp = 0;

            Stove() {}
            Stove(int temp) {
                setTemp(temp);
            }
        };
        
        Stove stove;
        //stove.temp = 1000000;  // inaccessible
        stove.setTemp(1000000); // limited to 10

        std::cout << "The temperature setting is: " << stove.getTemp();
    */

    /*
        Inheritance: a class can receive attributes and methods from another class
        Children classes inherit from a parent class
        Helps to reuse similar code found within multiple classes

        Code:

        class Animal {
            public:
                bool alive = true;
                void eat() {
                    std::cout << "This animal is eating\n";
                }
        };
        class Dog : public Animal {
            public:
                void bark() {
                    std::cout << "The dog goes woof\n";
                }
        };
        class Cat : public Animal {
            public:
                void meow() {
                    std::cout << "The cat goes meow\n";
                }
        };

        Dog dog;

        std::cout << dog.alive << "\n";
        dog.eat();
        dog.bark();
        
        Cat cat;

        std::cout << cat.alive << "\n"; 
        cat.meow();

        class Shape {
            public:
                double area, volume;
        };

        class Cube : public Shape {
            public:
                double side;

            Cube(double side) {
                this->side = side;
                this->area = side*side*6;
                this->volume = side*side*side;
            }
        };

        class Sphere : public Shape {
            public:
                double radius;
            
            Sphere(double radius) {
                this->radius = radius;
                this->area = 4*3.14159*(radius*radius);
                this->volume = (4/3.0)*3.14149*(radius*radius*radius);
            }
        };

        Cube cube(10);
        std::cout << cube.area << "cm² " << cube.volume << "cm³\n";

        Sphere sphere(5);
        std::cout << sphere.area << "cm² " << sphere.volume << "cm³\n";
    */

    return 0;
}

