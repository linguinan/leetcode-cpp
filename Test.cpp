#include "headers.h"

void test()
{
    vector<int> arr = {4, 5, 8, 2};
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
