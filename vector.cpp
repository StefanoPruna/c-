#include <iostream>
#include <vector>

int main()
{
    //examples of vectors/arrays:
    // std::vector<double> subwayAdult;
    // std::vector<int> subwayChild = {800, 500, 300};
    // std::vector<double> location = {42.65, -74.34};
    // std:: vector<int> locations(2);
    // std::vector<char> vowels = {'a', 'e', 'i', 'o'};   //it's only accepted '' for characters
    // std::cout << vowels[2] << "\n"; //to print the element of the vector in the index n.2
    // vowels.push_back('u'); // to add a new element to the vector/array at the end
    // subwayChild.pop_back(); //to remove the last element

    // std::vector<std::string> lastJedi;
    // lastJedi.push_back("Luke"); //it will only accetp "" for strings
    // lastJedi.push_back("Obi");
    // lastJedi.push_back("The new Trilogy");
    // lastJedi.pop_back();

    // std::cout << subwayChild[0] << "\n";
    // std::cout << vowels[2] << "\n";
    // std::cout << lastJedi[0] << "\n";

    // std::cout << lastJedi.size() << "\n"; //will print the length of the vector, how many elements there are

    // double total = 0.0;

    // for (int i = 0; i < subwayChild.size(); i++)
    // {
    //     total = total + subwayChild[i];
    // }
    // std::cout << total << "\n";


    // for (int i = 0; i < lastJedi.size(); i++)
    // {
    //     std::cout << lastJedi[i] << "\n";
    // }

    std::vector<int> numbers = {2,4,3,6,1,9};
    int evenNum = 0;
    int oddNum = 1;

    for (int i=0; i<numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenNum = evenNum + numbers[i];            
        }
        else
        {
            oddNum = oddNum * numbers[i];            
        }
    }
    std::cout << "Sum of even numbers is " << evenNum << "\n";
    std::cout << "Product of odd numbers is " << oddNum << "\n";
}