cout << "Welcome to the Course Planner!\n";
//use while loop to determine the user input and give the appropriate output in response
while (true)
{
    //used to determine which function of the course planner the user wants to use
    int choice = 0;
    //used to determine which course the user would like to know about
    int course = 0;

    cout << "Please select from the options below:\n";
    cout << "-------------------------------------\n";
    cout << "1.Load Data Structure.\n";
    cout << "2.Print Course List.\n";
    cout << "3.Print Course.\n";
    cout << "9.Exit Course Planner.\n";
    cout << "-------------------------------------\n";

    cout << "Please enter your choice:";
    cin >> choice;

    cout << "\n";

    if (choice == 1)
    {
        //If user selects one all the databases are loaded from strings containing course names and information. Program will not give proper output unless 1 is selected first.
        userClasses.assign(classes, classes + 8);
        CSCI101.assign(CSCI101prereq, CSCI101prereq + 1);
        CSCI200.assign(CSCI200prereq, CSCI200prereq + 1);
        CSCI300.assign(CSCI300prereq, CSCI300prereq + 2);
        CSCI301.assign(CSCI301prereq, CSCI301prereq + 1);
        CSCI350.assign(CSCI350prereq, CSCI350prereq + 1);
        CSCI400.assign(CSCI400prereq, CSCI400prereq + 2);

        cout << "----------------------\n";
        cout << "Data Structure Loaded!\n";
        cout << "----------------------\n\n";

    }
    //choice 2 is to print out a sample schedule for the user to see the course layout. Prereqs are not included in schedule. 
    else if (choice == 2)
    {
        cout << "-----------------------------------------------\n";
        cout << "Here is a sample schedule:\n";
        cout << userClasses;
        cout << "----------------------------------------------\n\n";
    }
