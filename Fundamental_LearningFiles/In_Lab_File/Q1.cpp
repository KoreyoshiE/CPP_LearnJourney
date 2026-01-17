#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    cout << "Enter three points (x1 y1 x2 y2 x3 y3): ";
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double side_a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double side_b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double side_c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    double angle_A = acos((side_a * side_a - side_b * side_b - side_c * side_c) / (-2 * side_b * side_c));
    double angle_B = acos((side_b * side_b - side_a * side_a - side_c * side_c) / (-2 * side_a * side_c));
    double angle_C = acos((side_c * side_c - side_b * side_b - side_a * side_a) / (-2 * side_a * side_b));

    const double PI = 3.141592653589793;
    cout << "The three angles are: "
         << angle_A * 180 / PI << "°, "
         << angle_B * 180 / PI << "°, "
         << angle_C * 180 / PI << endl;

    return 0;
}