#include <iostream>
#include <cmath>

using namespace std;

double std_dev(int numbers[], int arr_size) {
    int i, j, sum = 0;
    double avg, squared_dist, var;

    for (i = 0; i < arr_size; i++)
        sum = sum + numbers[i];
    
    avg = sum / arr_size;
    squared_dist = 0.0;

    for (j = 0; j < arr_size; j++)
        squared_dist = squared_dist + pow((numbers[j] - avg), 2);

    var = squared_dist / arr_size;

    return sqrt(var);
}

int main() 
{
    int arr_one[] = {0, 1, 2, 3, 4, 5};
    int arr_two[] = {34, 23, 55, 33, 55, 67, 23, 34, 45, 34, 23, 23};

    cout << "the standard deviation of array one is " << std_dev(arr_one, sizeof(arr_one) / sizeof(int)) << endl;
    cout << "the standard deviation of array two is " << std_dev(arr_two, sizeof(arr_two) / sizeof(int)) << endl;
    cout << "array one has " << sizeof(arr_one) / sizeof(int) << " elements" << endl;
    cout << "array two has " << sizeof(arr_two) / sizeof(int) << " elements" << endl;

    return 0;
}