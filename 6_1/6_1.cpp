#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>

using namespace std;

void Sort(vector<int>& numbers)
{
    sort(numbers.begin(), numbers.end());

    vector<int> numbers2;
    int num_back = numbers[0];

    for (int i = 1; i < numbers.size(); i++)
    {
        if (!(num_back == numbers[i]))
        {
            numbers2.push_back(numbers[i]);
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<int> numbers = { 1, 1, 2, 5, 6, 1, 2, 4 };
    Sort(numbers);

    auto it = unique(numbers.begin(), numbers.end());
    numbers.erase(it, numbers.end());

    for (int num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}