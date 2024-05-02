#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
template <typename T>
double distance(T x1, T y1, T z1, T x2, T y2, T z2);
int main()
{
    #include <iostream>



    // Declare variables for point 1
    int x1, y1, z1;
    cout << "Enter coordinates for point 1 (x y z): ";
    cin >> x1 >> y1 >> z1;

    // Declare variables for point 2
    int x2, y2, z2;
    cout << "Enter coordinates for point 2 (x y z): ";
    cin >> x2 >> y2 >> z2;

    // Calculate distance
    double result = distance(x1, y1, z1, x2, y2, z2);

    // Display the result
    cout << "Distance between the two points: " << result << endl;

    return 0;
}

// Function to calculate the Euclidean distance
template <typename T>
double distance(T x1, T y1, T z1, T x2, T y2, T z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

