#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
    string user_ID;
    string user_Pass;

    bool login = false;
    while (!login)
    {

        //Program start screen, asks for Student ID and Password. 
        cout << "Enter your student ID: " << endl;
        cin >> user_ID;
        cout << "Enter your password: " << endl;
        cin >> user_Pass;
        string user_idpass = user_ID + " " + user_Pass;

        //Ref student input with existing ID

        string line;
        ifstream student_ID("studentID.txt");
        if (student_ID.is_open())
        {
            while (getline(student_ID, line))
            {
                if (line == user_idpass)
                {
                    cout << "Login successful." << endl;
                    login = true; 
                }
            }
        }
        else
        {
            cout << "Error opening file";
        }
    }
    int userInput; 
    bool showMenu = true;

    while (showMenu)
    {
        // Presenting options to the user. 
        cout << "Student Directory - please select an option from below." << endl;
        cout << "1. Declare a Major. " << endl;
        cout << "2. Degree Plan." << endl;
        cout << "3. Register for classes." << endl;
        cout << "4. Completed classes." << endl;
        cout << "5. Sign out. " << endl;

        // Validating user selection
        cin >> userInput; 
        switch (userInput)
        {
        case 1:
            //Declare major code here.
            cout << "Major" << endl; 
            break;
        case 2:
            // View Degree plan code here.
            cout << "Degree Plan" << endl; 
            break;
        case 3:
            // register for classes code here.
            cout << "Reg" << endl; 
            break; 
        case 4:
            // View completed classes code here.
            cout << "Completed" << endl; 
            break; 
        case 5:
            // Get out of loops, and close terminal. 
            showMenu = false; 
            break; 
        default:
            cout << "Invalid Selection" << endl;
            break; 
        }
    }

    return 0;
}
