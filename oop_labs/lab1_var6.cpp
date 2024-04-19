#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_GROUPS = 10;

struct Group
{
    string type;
    int number;
    string teacher;
    int childrenCount;
};

Group groups[MAX_GROUPS];
int numGroups = 0;

void AddGroup()
{
    if (numGroups < MAX_GROUPS)
    {
        Group newGroup;
        cout << "Enter group type: ";
        cin >> newGroup.type;
        cout << "Enter group number: ";
        cin >> newGroup.number;
        cout << "Enter teacher's name: ";
        cin >> newGroup.teacher;
        cout << "Enter number of children: ";
        cin >> newGroup.childrenCount;
        groups[numGroups++] = newGroup;
        cout << "Group added successfully. \n";
    }
    else
    {
        cout << "Maximum number of groups reached. \n";
    }
}

void DeleteGroup(int number)
{
    for (int i = 0; i < numGroups; ++i)
    {
        if (groups[i].number == number)
        {
            for (int j = i; j < numGroups - 1; ++j)
            {
                groups[j] = groups[j + 1];
            }
            --numGroups;
            cout << "Group with number " << number << " deleted successfully.\n";
            return;
        }
    }
    cout << "Group with number " << number << " not found.\n";
}


void ModifyGroup(int number)
{
    for (int i = 0; i < numGroups; ++i)
    {
        if (groups[i].number == number)
        {
            cout << "Enter new group type: ";
            cin >> groups[i].type;
            cout << "Enter new teacher's name: ";
            cin >> groups[i].teacher;
            cout << "Enter new number of children: ";
            cin >> groups[i].childrenCount;
            cout << "Group information modified successfully.\n";
            return;
        }
    }
    cout << "Group with number " << number << " not found.\n";
}

void SortByChildrenCount()
{
    for (int i = 0; i < numGroups - 1; ++i)
    {
        for (int j = 0; j < numGroups - i - 1; ++j)
        {
            if (groups[j].childrenCount < groups[j + 1].childrenCount)
            {
                Group temp = groups[j];
                groups[j] = groups[j + 1];
                groups[j + 1] = temp;
            }
        }
    }
}


void SaveGroupsToFile()
{
    ofstream outFile("groups.bin", ios::binary | ios::out);
    if (!outFile)
    {
        cout << "Unable to open file.\n";
        return;
    }

    outFile.write((char*)&numGroups, sizeof(numGroups));
    outFile.write((char*)groups, numGroups * sizeof(Group));
    outFile.close();
    cout << "Groups saved to file successfully.\n";
}

void LoadGroupsFromFile()
{
    ifstream inFile("groups.bin", ios::binary | ios::in);
    if (!inFile)
    {
        cout << "Unable to open file or file does not exist.\n";
        return;
    }

    inFile.read((char*)&numGroups, sizeof(numGroups));
    inFile.read((char*)groups, numGroups * sizeof(Group));
    inFile.close();

    cout << "Groups loaded from file successfully.\n";
}

void ShowGroup()
{
    for (int i = 0; i < numGroups; ++i)
    {
        cout << endl;
        cout << "Group type: " << groups[i].type << endl;
        cout << "Group number: " << groups[i].number << endl;
        cout << "Group teacher's name: " << groups[i].teacher << endl;
        cout << "Group children count: " << groups[i].childrenCount << endl;

    }
}

void Menu(int choice)
{
    int groupNumber;

    switch (choice)
    {

    case 1:
        ShowGroup();
        break;

    case 2:
        AddGroup();
        break;

    case 3:
        cout << "Enter group number to delete: ";
        cin >> groupNumber;
        DeleteGroup(groupNumber);
        break;

    case 4:
        cout << "Enter group number to modify: ";
        cin >> groupNumber;
        ModifyGroup(groupNumber);
        break;

    case 5:
        SortByChildrenCount();
        break;

    case 6:
        SaveGroupsToFile();
        break;

    case 7:
        cout << "Exiting program.\n";
        break;

    default:
        cout << "Invalid choice. Please try again.\n";

    }
}

int main()
{
    LoadGroupsFromFile();
    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Show group\n";
        cout << "2. Add group\n";
        cout << "3. Delete group\n";
        cout << "4. Modify group information\n";
        cout << "5. Sort groups by children count\n";
        cout << "6. Save groups to file\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: " << endl;
        cin >> choice;

        Menu(choice);
    } while (choice != 7);
    return 0;
}
