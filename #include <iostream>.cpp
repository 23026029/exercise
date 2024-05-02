#include <iostream>
#include <cmath>

// Function to calculate the Euclidean distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    // Accepting input from the user
    std::cout << "Calculate the Euclidean distance between two points" << std::endl;
    std::cout << "Enter the value of x1: ";
    std::cin >> x1;
    std::cout << "Enter the value of y1: ";
    std::cin >> y1;
    std::cout << "Enter the value of x2: ";
    std::cin >> x2;
    std::cout << "Enter the value of y2: ";
    std::cin >> y2;

    // Calculating the distance by calling the function
    double dist = distance(x1, y1, x2, y2);

    // Displaying the result
    std::cout << "The distance between point 1 and point 2 is " << dist << std::endl;
}
    return 0;