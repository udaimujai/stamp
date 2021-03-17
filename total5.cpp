#include <iostream>
using namespace std;

int main()
{
    int loop_counter =1;
    int number =0;
    int total= 0;
    cout << "enter nubers";
    while ((loop_counter <=5))
    {
        cin >> number;
        total = total + number;
        loop_counter++;
    }
    cout << "total nuber "<< total << endl;

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  