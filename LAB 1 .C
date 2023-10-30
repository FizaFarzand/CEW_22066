
//LAB SESSION NO 1
//ALL EXERCISE ANSWERS



//#include <stdio.h>

//ANWER #1

//int main() {
//    int employee_id , salary_per_hour = 999;
//    float hours_worked;
//    printf("Enter your Employee ID :\t");
//    scanf("%d",&employee_id);
//    printf("\n Enter the hours worked this month:\t");
//    scanf("%f",&hours_worked);
//    printf("The exact total salary of Employee(ID = %d): Rs.%.3f/=",employee_id,salary_per_hour * hours_worked);
//    return 0;
//
//}


//ANSWER #2


//int main() {
//    double height, width;
//    double perimeter, area;
//
//    // Input the height of the rectangle
//    printf("Enter the Height of the Rectangle: ");
//    scanf("%lf", &height);
//
//    // Input the width of the rectangle
//    printf("Enter the Width of the Rectangle: ");
//    scanf("%lf", &width);
//
//    // Calculating the perimeter and area
//    perimeter = 2 * (height + width);
//    area = height * width;
//
//    // Displaying the results
//    printf("Perimeter of the Rectangle: %.3lf\n", perimeter);
//    printf("Area of the Rectangle: %.3lf\n", area);
//
//    return 0;
//}



//ANSWER # 3


//int main() {
//    float Height; // Variable to store the height in centimeters
//
//    // Prompt the user to enter their height
//    printf("Enter your Height in centimeters: ");
//    scanf("%f", &Height);
//
//    // Check and categorize the height
//    if (Height < 150.0) {
//        printf("You are categorized as a Dwarf.\n");
//    } else if (Height == 150.0) {
//        printf("You are categorized as Average.\n");
//    } else if (Height >= 165.0) {
//        printf("You are categorized as Tall.\n");
//    } else {
//        printf("You are in the Average category.\n");
//    }
//
//    return 0;
//}


//ANSWER # 4


// Function to convert a decimal number to binary
//int convertDecimalToBinary(int decimalNumber) {
//    int binary = 0, remainder, multiplier = 1;
//
//    // Handle the case when the input is 0
//    if (decimalNumber == 0) {
//        return 0;
//    }
//
//    while (decimalNumber > 0) {
//        remainder = decimalNumber % 2;
//        decimalNumber = decimalNumber / 2;
//        binary = binary + (remainder * multiplier);
//        multiplier = multiplier * 10;
//    }
//
//    return binary;
//}
//
//int main() {
//    printf("DECIMAL TO BINARY CONVERTER\n\n");
//    int userInput;
//
//    printf("ENTER A DECIMAL NUMBER: ");
//    scanf("%d", &userInput);
//
//    if (userInput < 0) {
//        printf("Please enter a non-negative decimal number.\n");
//    } else {
//        printf("BINARY EQUIVALENT: %d\n", convertDecimalToBinary(userInput));
//    }
//
//    return 0;
//}


// ANSWER#5


//int fib(a,b,num){
//    int x=a,y=b,z,n=num;
//    if (n==0)
//        return 0;
//    else{
//        z=x+y;
//        printf("%d ",z);
//        return fib(y,z,n-1);
//    }
//}
//int main(){
//    int a=0,b=1,num;
//    printf("FIBONACCI SERIES PRINTER\nEnter nth term of fibonacci series:\t ");
//    scanf("%d",&num);
//    printf("1 ");
//    fib(a,b,num);
//}


