#include<string>
#include<vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
struct problem
{
    int leetcodenumber;
    string name;
    string difficulty;
    string topic;
    string status;
};
string selectTopic()
{
    string topic;

    cout << "\n===== DSA PROBLEM TRACKER =====" << endl;
    cout << "Enter topic: ";
    getline(cin,topic);
    transform(topic.begin(), topic.end(), topic.begin(),
          [](char c) { return tolower(c); });

    return topic;
}

void loadProblems(vector<problem>& problems)
{
    problem p1;

p1.name = "Two Sum";
p1.leetcodenumber = 1;
p1.difficulty = "Easy";
p1.topic = "hashing";
p1.status = "Unsolved";
problems.push_back(p1);

problem p2;

p2.name = "Longest Consecutive Sequence";
p2.leetcodenumber = 128;
p2.difficulty = "Medium";
p2.topic = "hashing";
p2.status = "Unsolved";
problems.push_back(p2);

problem p3;

p3.name = "Integer to Roman";
p3.leetcodenumber = 12;
p3.difficulty = "Medium";
p3.topic = "hashing";
p3.status = "Unsolved";
problems.push_back(p3);

problem p4;

p4.name = "Roman to Integer";
p4.leetcodenumber = 13;
p4.difficulty = "Easy";
p4.topic = "hashing";
p4.status = "Unsolved";
problems.push_back(p4);

problem p5;

p5.name = "Min Stack";
p5.leetcodenumber = 155;
p5.difficulty = "Medium";
p5.topic = "stack";
p5.status = "Unsolved";

problems.push_back(p5);

problem p6;

p6.name = "Add Two Numbers";
p6.leetcodenumber = 2;
p6.difficulty = "Medium";
p6.topic = "linked list";
p6.status = "Unsolved";
problems.push_back(p6);

problem p7;

p7.name = "Remove Nth Node From End of List";
p7.leetcodenumber = 19;
p7.difficulty = "Medium";
p7.topic = "linked list";
p7.status = "Unsolved";
problems.push_back(p7);

problem p8;

p8.name = "Swap Nodes in Pairs";
p8.leetcodenumber = 24;
p8.difficulty = "Medium";
p8.topic = "linked list";
p8.status = "Unsolved";
problems.push_back(p8);

problem p9;

p9.name = "Merge Two Sorted Lists";
p9.leetcodenumber = 21;
p9.difficulty = "Easy";
p9.topic = "linked list";
p9.status = "Unsolved";
problems.push_back(p9);

problem p10;

p10.name = "Valid Parentheses";
p10.leetcodenumber = 20;
p10.difficulty = "Easy";
p10.topic = "stack";
p10.status = "Unsolved";

problems.push_back(p10);

problem p11;

p11.name = "Daily Temperatures";
p11.leetcodenumber = 739;
p11.difficulty = "Medium";
p11.topic = "stack";
p11.status = "Unsolved";
problems.push_back(p11);

problem p12;

p12.name = "Evaluate Reverse Polish Notation";
p12.leetcodenumber = 150;
p12.difficulty = "Medium";
p12.topic = "stack";
p12.status = "Unsolved";
problems.push_back(p12);

problem p13;

p13.name = "Largest Rectangle in Histogram";
p13.leetcodenumber = 84;
p13.difficulty = "Hard";
p13.topic = "stack";
p13.status = "Unsolved";
problems.push_back(p13);

problem p14;

p14.name = "Trapping Rain Water";
p14.leetcodenumber = 42;
p14.difficulty = "Hard";
p14.topic = "stack";
p14.status = "Unsolved";
problems.push_back(p14);

problem p15;

p15.name = "Reverse Linked List";
p15.leetcodenumber = 206;
p15.difficulty = "Easy";
p15.topic = "linked list";
p15.status = "Unsolved";
problems.push_back(p15);

problem p16;

p16.name = "Linked List Cycle";
p16.leetcodenumber = 141;
p16.difficulty = "Easy";
p16.topic = "linked list";
p16.status = "Unsolved";
problems.push_back(p16);

problem p17;

p17.name = "Reorder List";
p17.leetcodenumber = 143;
p17.difficulty = "Medium";
p17.topic = "linked list";
p17.status = "Unsolved";
problems.push_back(p17);

problem p18;

p18.name = "Merge k Sorted Lists";
p18.leetcodenumber = 23;
p18.difficulty = "Hard";
p18.topic = "linked list";
p18.status = "Unsolved";
problems.push_back(p18);

problem p19;

p19.name = "Contains Duplicate";
p19.leetcodenumber = 217;
p19.difficulty = "Easy";
p19.topic = "hashing";
p19.status = "Unsolved";
problems.push_back(p19);

problem p20;

p20.name = "Valid Anagram";
p20.leetcodenumber = 242;
p20.difficulty = "Easy";
p20.topic = "hashing";
p20.status = "Unsolved";
problems.push_back(p20);

problem p21;

p21.name = "Group Anagrams";
p21.leetcodenumber = 49;
p21.difficulty = "Medium";
p21.topic = "hashing";
p21.status = "Unsolved";
problems.push_back(p21);

problem p22;

p22.name = "Top K Frequent Elements";
p22.leetcodenumber = 347;
p22.difficulty = "Medium";
p22.topic = "hashing";
p22.status = "Unsolved";
problems.push_back(p22);

problem p23;

p23.name = "Longest Substring Without Repeating Characters";
p23.leetcodenumber = 3;
p23.difficulty = "Medium";
p23.topic = "hashing";
p23.status = "Unsolved";
problems.push_back(p23);



}


void displayTopicProblems(vector<problem>& problems, string topic)
{
    bool found = false;
    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].topic == topic){
            found=true;
            break;
        }
    }
    if(found==false){
        cout<<"Topic not found";
        return;
    }
    cout << "\nEasy:" << endl;

    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].topic == topic &&
           problems[i].difficulty == "Easy")
        {
            found = true;
            cout << "#" << problems[i].leetcodenumber
                 << "  " << problems[i].name
                 << "  [" << problems[i].status << "]" << endl;
        }
    }

    cout << "\nMedium:" << endl;

    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].topic == topic &&
           problems[i].difficulty == "Medium")
        {
            found= true;
            cout << "#" << problems[i].leetcodenumber
                 << "  " << problems[i].name
                 << "  [" << problems[i].status << "]" << endl;
        }
    }

    cout << "\nHard:" << endl;

    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].topic == topic &&
           problems[i].difficulty == "Hard")
        {
            found=true; 
            cout << "#" << problems[i].leetcodenumber
                 << "  " << problems[i].name
                 << "  [" << problems[i].status << "]" << endl;
        }
    }
}

void filterByDifficulty(vector<problem>& problems)
{
    int choice;

    cout << "\n===== FILTER BY DIFFICULTY =====" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "Enter choice: ";

    cin >> choice;
    cin.ignore();

    string difficulty;

    if(choice == 1)
        difficulty = "Easy";
    else if(choice == 2)
        difficulty = "Medium";
    else if(choice == 3)
        difficulty = "Hard";
    else
    {
        cout << "Invalid choice!" << endl;
        return;
    }

    bool found = false;

    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].difficulty == difficulty)
        {
            found = true;

            cout << "#" << problems[i].leetcodenumber
                 << "  " << problems[i].name
                 << "  [" << problems[i].topic << "]"
                 << "  [" << problems[i].status << "]"
                 << endl;
        }
    }

    if(found == false)
        cout << "No problems found." << endl;
}

void markProblemSolved(vector<problem>& problems)
{
    int number;

    cout << "Enter LeetCode problem number: ";
    cin >> number;
    cin.ignore();

    bool found = false;

    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].leetcodenumber == number)
        {
            found = true;

            int statusChoice;

            cout << "\n1. Mark as Solved" << endl;
            cout << "2. Mark as Unsolved" << endl;
            cout << "Enter choice: ";
            cin >> statusChoice;
            cin.ignore();

            if(statusChoice == 1)
            {
                problems[i].status = "Solved";
            }
            else if(statusChoice == 2)
            {
                problems[i].status = "Unsolved";
            }
            else
            {
                cout << "Invalid choice." << endl;
                return;
            }

            cout << problems[i].name << " marked as "
                 << problems[i].status << "!" << endl;

            break;
        }
    }

    if(found == false)
    {
        cout << "Problem not found." << endl;
    }
}
void displayUnsolvedProblems(vector<problem>& problems)
{
    bool found = false;

    cout << "\n===== UNSOLVED PROBLEMS =====" << endl;

    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].status == "Unsolved")
        {
            found = true;

            cout << "#" << problems[i].leetcodenumber
                 << "  " << problems[i].name
                 << "  [" << problems[i].difficulty << "]"
                 << "  [" << problems[i].topic << "]"
                 << endl;
        }
    }

    if(found == false)
    {
        cout << "All problems are solved!" << endl;
    }
}

void showProgress(vector<problem>& problems)
{
    int total = problems.size();
    int solved = 0;

    for(int i = 0; i < problems.size(); i++)
    {
        if(problems[i].status == "Solved")
        {
            solved++;
        }
    }

    int unsolved = total - solved;
    double percentage = (double)solved / total * 100;

    cout << "\n===== YOUR DSA PROGRESS =====" << endl;
    cout << "Total Problems: " << total << endl;
    cout << "Solved Problems: " << solved << endl;
    cout << "Unsolved Problems: " << unsolved << endl;
    cout << "Completion: " << percentage << "%" << endl;
}


void saveProgress(vector<problem>& problems)
{
    ofstream file("progress.txt");

    for(int i = 0; i < problems.size(); i++)
    {
        file << problems[i].leetcodenumber << " "
             << problems[i].status << endl;
    }

    file.close();

    cout << "Progress saved successfully!" << endl;
}


void searchProblem(vector<problem>& problems)
{
    int choice;

    cout << "\n===== SEARCH PROBLEM =====" << endl;
    cout << "1. Search by LeetCode number" << endl;
    cout << "2. Search by problem name" << endl;
    cout << "Enter choice: ";

    cin >> choice;
    cin.ignore();

    bool found = false;

    if(choice == 1)
    {
        int number;

        cout << "Enter LeetCode problem number: ";
        cin >> number;
        cin.ignore();

        for(int i = 0; i < problems.size(); i++)
        {
            if(problems[i].leetcodenumber == number)
            {
                found = true;

                cout << "\nProblem found!" << endl;
                cout << "#" << problems[i].leetcodenumber << endl;
                cout << "Name: " << problems[i].name << endl;
                cout << "Difficulty: " << problems[i].difficulty << endl;
                cout << "Topic: " << problems[i].topic << endl;
                cout << "Status: " << problems[i].status << endl;

                break;
            }
        }
    }
    else if(choice == 2)
    {
        string searchName;

        cout << "Enter problem name: ";
        getline(cin, searchName);

        for(int i = 0; i < problems.size(); i++)
        {
            if(problems[i].name == searchName)
            {
                found = true;

                cout << "\nProblem found!" << endl;
                cout << "#" << problems[i].leetcodenumber << endl;
                cout << "Name: " << problems[i].name << endl;
                cout << "Difficulty: " << problems[i].difficulty << endl;
                cout << "Topic: " << problems[i].topic << endl;
                cout << "Status: " << problems[i].status << endl;

                break;
            }
        }
    }
    else
    {
        cout << "Invalid choice!" << endl;
        return;
    }

    if(found == false)
    {
        cout << "Problem not found." << endl;
    }
}

void loadProgress(vector<problem>& problems)
{
    ifstream file("progress.txt");

    if(!file)
    {
        return;
    }

    int number;
    string status;

    while(file >> number >> status)
    {
        for(int i = 0; i < problems.size(); i++)
        {
            if(problems[i].leetcodenumber == number)
            {
                problems[i].status = status;
                break;
            }
        }
    }

    file.close();

    cout << "Progress loaded successfully!" << endl;
}

int main()
{
    vector<problem> problems;
    loadProblems(problems);
    loadProgress(problems);

    int choice;

    while(true)
    {
        cout << "\n===== DSA PROBLEM TRACKER =====" << endl;
        cout << "1. Browse problems by topic" << endl;
        cout << "2. Mark problem as solved/unsolved" << endl;
        cout << "3. Show unsolved problems" << endl;
        cout << "4. Show progress statistics" << endl;
        cout << "5. Save progress" << endl;
        cout << "6. Filter by difficulty" << endl;
        cout << "7. Search for a problem" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice: ";

        cin >> choice;
        cin.ignore();

        if(choice == 1)
        {
            string topic = selectTopic();

            if(topic == "exit")
            {
                break;
            }

            displayTopicProblems(problems, topic);
        }
        else if(choice == 2)
        {
            markProblemSolved(problems);
        }
        else if(choice == 3)
        {
            displayUnsolvedProblems(problems);
        }
        else if(choice == 4)
        {
            showProgress(problems);
        }
        else if(choice == 5)
        {
            saveProgress(problems);
        }

else if(choice == 6)
{
    filterByDifficulty(problems);
}
else if(choice == 7)
{
    searchProblem(problems);
}
else if(choice == 8)
{
    saveProgress(problems);
    cout << "Thank you for using DSA Problem Tracker!" << endl;
    break;
}

        else
        {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}

