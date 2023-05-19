// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> numbers {};
    char option{};
    do
    {
        cout << "\nPress P - Print numbers" << endl;
        cout << "Press A - Add a number" << endl;
        cout << "Press M - Display mean of the numbers" << endl;
        cout << "Press S - Display the smallest number" << endl;
        cout << "Press L - Display the largest number" << endl;
        cout << "Press K - Find the one number" << endl;
        cout << "Press Q - Quit\n";
        cin >> option;

        if(option == 'P' || option == 'p'){
            if (numbers.size() != 0){
                cout <<"\n[ ";
            //    for(auto num:numbers){
            //         cout << num << " ";
            //    }
                for(int i = 0 ; i < numbers.size();i++){
                    cout << numbers.at(i) << " ";
                }
               cout <<"]" << endl;
            }
            else{
                cout <<"[] - the list is empty" << endl;
            }
        }
        else if(option == 'A' || option == 'a'){
           cout << "Enter an integer to add to the list: ";
            int add_number{};
            cin >> add_number;
            numbers.push_back(add_number);
            cout << add_number << " added" << endl;
        }
        else if(option =='m' || option =='M'){
            int average {};
            if(numbers.size() !=0){
                for(int i = 0 ; i < numbers.size();i++){
                    average = average + numbers.at(i);
                }
                cout << "The mean is: " << static_cast<double>(average)/numbers.size() << endl;
            }
            else{
                cout <<"Unable to calculate the mean - no data" << endl;
            }
        }
        else if(option == 's' || option == 'S'){
            if (numbers.size() != 0){
                int min = numbers.at(0);
                for(int i = 1 ; i < numbers.size();i++){
                    if(min > numbers.at(i)){
                        min = numbers.at(i);
                    }
                }
                cout << "The smallest number is " << min << endl;
            }
            else {
                cout << "Unable to determine the smallest number - list is empty";
            }
        } else if(option == 'L' || option == 'l'){
            if (numbers.size() != 0){
                int find_number{} , count{};
                cin >> find_number;
                for(int i = 0 ; i < numbers.size() ; i++){
                    if(find_number == numbers.at(i)){
                        count++;
                    }
                }
                if(count != 0){
                     cout << "The find number is " << find_number << " of " << count << " time" << endl;
                }
                else{
                    cout << "Dont find number " << find_number << endl;
                }
            }
            else {
                cout << "Unable to determine the find number - list is empty";
            }
        }
        else if(option == 'K' || option == 'k'){
            if (numbers.size() != 0){
                int max = numbers.at(0);
                for(int i = 1 ; i < numbers.size();i++){
                    if(max < numbers.at(i)){
                        max = numbers.at(i);
                    }
                }
                cout << "The largest number is " << max << endl;
            }
            else {
                cout << "Unable to determine the largest number - list is empty";
            }
        }
         else if(option == 'Q' || option == 'q'){
            cout <<"Good bye\n";
            break;
         }
    } while (option != 'Q' && option != 'q');
    
    
    return 0;
}

