#include <iostream>
#include <string>

void reversesal(std::string word)
{
    int length = word.size();
    std::string result;
    while(length > 0)
    {
        result.push_back(word.at(length - 1));
        length--;
    }
    std::cout << result << std::endl;
}

int main()
{
    std::string word = "I love coding";
    reversesal(word);
}
// reversing a string