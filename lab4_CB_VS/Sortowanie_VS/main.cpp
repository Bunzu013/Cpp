#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int sum_numbers(int number) {

    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number = number / 10;
    }

    return sum;
}
bool compare_numbers(int n1, int n2) {
    if (sum_numbers(n1) <= sum_numbers(n2))
    {
        return true;
    }
    else
        return false;
}
int count_numbers(int number) {

    int sum = 0;
    while (number > 0)
    {
        sum += 1;
        number = number / 10;
    }

    return sum;
}
bool compare2(int n1, int n2) {
    if (count_numbers(n1) > count_numbers(n2))
    {
        return true;
    }
    else
        return false;
}
int main()
{
    std::vector<int>v{ 11,5,456,76578,345 };
    std::sort(v.begin(), v.end(), compare2);

    for (const auto& i : v)
    {
        cout << i << " ";
    }
    std::sort(v.begin(), v.end(), compare_numbers);
    cout << endl;
    for (const auto& i : v)
    {
        cout << i << " ";
    }
    return 0;
}
