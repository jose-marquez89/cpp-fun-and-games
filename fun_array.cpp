#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int i, j;
    int num_arr[] = {0, 1, 2, 3, 4};
    string str_arr[] = {"I ", "am ", "very ", "repetitive ", "text "}; 

    for (i = 0; i < sizeof(num_arr) / sizeof(int); i++) {
        for (j = 0; j < pow(2, num_arr[i]); j++)
            cout << str_arr[i];
        cout << endl;
    }

    return 0;
}