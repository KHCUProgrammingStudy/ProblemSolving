#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string input_string)
{
    string answer = "";
    vector<int> alphabet(26, 0);

    // Find if it is a lonely alphabet
    int temp;
    for (int i = 0; i < input_string.size(); i++)
    {
        if (i == 0)
        {
            alphabet[input_string[i] - 'a']++;
        }
        else if (input_string[i] != input_string[i-1])
        {
            alphabet[input_string[i] - 'a']++;
        }
    }

    // Get the lonely alphabets from the vector
    for (int i = 0; i < alphabet.size(); i++)
    {
        if (alphabet[i] >= 2) answer += 'a' + i;
    }
    if (answer == "") answer = "N";

    return answer;
}
