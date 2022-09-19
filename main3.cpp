
#include <iostream> #include <string>
using namespace std;
// passing by reference or value
int getDimensions(int &width, int &length, int &depth);
int areValid(int width, int length, int depth);
int calcVolume(int width, int length, int depth);
void displayVolume(int answer);
int main()
{
    int width;
    int length;
    int depth;
    int answer;
    // function call for dimensions getDimensions(width, length, depth); bool valid = areValid(width,length,depth); // if bounds are valid, display volume
    if (valid == 1)
    {
        answer = calcVolume(width, length, depth);
        displayVolume(answer);
    }
    else
    {
        cout << "You have entred values that are not allowed. Try again. " << endl;
    }
}
// get Dimensions function == The function prompts the user to enter three dimensions of a swimming pool
// user inputs swimming pool width, length, and depth
int getDimensions(int &width, int &length, int &depth)
{
    cout << "Enter widths between 5 and 20: " << endl;
    cin >> width;
    cout << "Enter lengths between 5 and 100: " << endl;
    cin >> length;
    cout << "Enter depths between 1 and 12: " << endl;
    cin >> depth;
}
// areValid function takes userinput width, lnegth and depth and see if its bound to the instructions

int areValid(int width, int length, int depth)
{
    bool status = true;
    if ((width > 5 && width < 20) && (length > 5 && length < 100) && (depth > 1 && depth < 12))
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}
// CALC VOLUME FUNCTION
// takes userinputted dimensions and returns volume back to main int calcVolume(int width, int length, int depth)
{
    double volume;
    volume = width * length * depth;
    return volume;
}
// displayVolume void function, takes value from main and displays the volime that the user wants
void displayVolume(int answer)
{
    cout << "Your volume is: " << answer;
}
