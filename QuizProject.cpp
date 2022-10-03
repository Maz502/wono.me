#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

//functions outside the main  are global variable
// we will discuss global variables later

void loadData(); //Don't bother about this code, you will learn it later.

const int qsize = 20; //Maximum number of questions
const int usize = 5;  //Maximum number of users
//variable area
bool qflag[qsize]; //use this array to check whether an element exist on an index or not.
string question[qsize];
string option1[qsize];
string option2[qsize];
string option3[qsize];
string option4[qsize];
string correctOption[qsize];

bool uflag[usize]; //use this array to check whether an element exist on an index or not.
string username[usize];
string passwords[usize];
int scores[usize]; //array will be used to save the score attempted.

int main()
{

    string user;
    string pwd;
    bool userSearchFlag = false;
    string x;
    int totalmarks;

    int input;

    int loggedInUserType = -10; //1 for administrator, 2 for user

    //TODO-- Initializtion of all arrays
    for(int i=0;i<qsize;i++)
    {
        qflag[i]=false;
        question[i]="";
        option1[i]="";
        option2[i]="";
        option3[i]="";
        option4[i]="";
        correctOption[i]="";
    }
    //assign an intial values to all arrays here.
        for(int i=0;i<usize;i++)
        {
            username[i]="";
            passwords[i]="";
            uflag[i]=false;
        }
    loadData(); //Don't bother about this code, you will learn it later.

    //program header
    cout << "***************************************************************\n";
    cout << "                     Quiz System                               \n";
    cout << "***************************************************************\n";

    do
    {
        cout << endl;
        cout << "Choose the desired option\n";
        cout << left << setw(10) << "\t"
             << setw(25) << "1. Administrator Login"
             << setw(25) << "2. User Login"
             << setw(25) << "0. Exit";
        cout << endl;

        cout.unsetf(ios::left);
        cout.unsetf(ios::right);

        cout << "\tChoose an option: ";
        cin >> input;
        cout << endl;

        switch (input)
        {

        case 1:
            cout << "Enter the username: ";
            cin >> user;

            cout << "Enter Password: ";
            cin >> pwd;

            if (user == "a" && pwd == "a")
                loggedInUserType = 1;
            else
                loggedInUserType = -10;
            break;
        case 2:
            cout << "Enter the username: ";
            cin >> user;

            cout << "Enter Password: ";
            cin >> pwd;
            //write code to search user from user list
           for(int i=0;i<usize;i++)
            {
                if(user==username[i])
                {
                    userSearchFlag=true;
                }
            }
            for(int i=0;i<usize;i++)
            {
                if(pwd==passwords[i])
                {
                    userSearchFlag=true;
                }
            }
            if (userSearchFlag == true)
            {
                loggedInUserType = 2;
            }
            else
            {
                loggedInUserType = -1;
            }
            break;
        case 0:
            loggedInUserType = -10;
            cout << "Thank you for using system;" << endl;
            break;

        default:
            cout << "Invalid choice!!!";
            break;
        }

        if (loggedInUserType == 1) //administrator
        {
            do
            {
                cout << endl;
                cout << "Choose the desired option\n";
                cout << left << setw(20) << "\tQuestions"
                     << setw(15) << "1. Add"
                     << setw(15) << "2. Delete"
                     << setw(15) << "3. Update"
                     << setw(15) << "4. List";
                cout << endl;

                cout << setw(20) << "\tUsers"
                     << setw(15) << "5. Register"
                     << setw(15) << "6. Edit"
                     << setw(15) << "7. Delete"
                     << setw(15) << "8. List"
                     << endl;

                cout << left << setw(20) << "\t"
                     << setw(15) << "9. View Scores"
                     << setw(15) << " "
                     << setw(15) << "0. Logout";
                cout << endl;

                cout.unsetf(ios::left);
                cout.unsetf(ios::right);

                cout << "\tChoose an option: ";
                cin >> input;

                switch (input)
                {
                case 1:
                    //Add a Question
                    for(int i=0;i<qsize;i++)
                    {
                    if(qflag[i]==false)
                    {
                        cin.ignore(25,'\n');
                        cout<<"Enter the Question:";
                        getline(cin,question[i]);
                        cout<<"Enter options 1:";
                        getline(cin,option1[i]);
                        cout<<"Enter options 2:";
                        getline(cin,option2[i]);
                        cout<<"Enter options 3:";
                        getline(cin,option3[i]);
                        cout<<"Enter options 4:";
                        getline(cin,option4[i]);
                        cout<<"Enter Corret option:";
                        getline(cin,correctOption[i]);
                        qflag[i]=true;
                        break;
                        }

                    }
                    break;
                case 2:
                    //delete question
                    cout << left << setw(50) << "  Questions" << setw(15) << "   option 1" << setw(15) << "   option 2" << setw(15) << "   option 3" << setw(15) << "   option 4" << setw(20) << "  correct answer" << endl;
                    cout << "***********************************************************************************************************************************************" << endl;
                    for (int i=0;i<qsize;i++)
                    {
                        if(question[i]!="")
                        {
                           cout << i + 1 << "   " << left << setw(50) << question[i] << setw(15) << option1[i] << setw(15) << option2[i] << setw(15) << option3[i] << setw(15) << option4[i] << setw(15) << correctOption[i] << endl;
                    }
                    }
                    cout<<"Select the Question ID to delete a question:";
                    cin>>input;
                    for(int i=0;i<qsize;i++)
                    {
                        if(input==i)
                        {
                            question[i-1]="";
                            option1[i-1]="";
                            option2[i-1]="";
                            option3[i=1]="";
                            option4[i-1]="";
                            correctOption[i-1]="";
                            cout<<"Question Delelted Successfully!!"<<endl;
                            break;
                        }
                    }
                    break;
                case 3:
                    //update question
                    cout << left << setw(50) << "  Questions" << setw(15) << "   option 1" << setw(15) << "   option 2" << setw(15) << "   option 3" << setw(15) << "   option 4" << setw(20) << "  correct answer" << endl;
                    cout << "***********************************************************************************************************************************************" << endl;
                    for (int i=0;i<qsize;i++)
                    {
                        if(question[i]!="")
                        {
                           cout << i + 1 << "   " << left << setw(50) << question[i] << setw(15) << option1[i] << setw(15) << option2[i] << setw(15) << option3[i] << setw(15) << option4[i] << setw(15) << correctOption[i] << endl;
                    }
                    }
                    cout<<"Select the Question ID to update question:";
                    cin>>input;
                     for(int i=0;i<qsize;i++)
                        {
                        if(input==i)
                        {
                        cin.ignore(25,'\n');
                        cout<<"Enter the Question:";
                        getline(cin,question[i-1]);
                        cout<<"Enter options 1:";
                        getline(cin,option1[i-1]);
                        cout<<"Enter options 2:";
                        getline(cin,option2[i-1]);
                        cout<<"Enter options 3:";
                        getline(cin,option3[i-1]);
                        cout<<"Enter options 4:";
                        getline(cin,option4[i-1]);
                        cout<<"Enter Corret option:";
                        cout<<"Enter Correct Anwser:";
                        getline(cin,correctOption[i-1]);
                       break;
                        }
                        }
                    break;
                case 4:
                   //list of questions
                    cout << left << setw(50) << "  Questions" << setw(15) << "   option 1" << setw(15) << "   option 2" << setw(15) << "   option 3" << setw(15) << "   option 4" << setw(20) << "  correct answer" << endl;
                    cout << "***********************************************************************************************************************************************" << endl;
                    for (int i=0;i<qsize;i++)
                    {
                        if(question[i]!="")
                        {
                           cout << i + 1 << "   " << left << setw(50) << question[i] << setw(15) << option1[i] << setw(15) << option2[i] << setw(15) << option3[i] << setw(15) << option4[i] << setw(15) << correctOption[i] << endl;
                    }
                    }
                    break;
                case 5:
                    //Register a student
                   for(int i=0;i<usize;i++)
                   {
                       if(uflag[i]==false)
                       {
                     cin.ignore(25,'\n');
                    cout<<"Enter username:";
                    getline(cin,user);
                    username[i]=user;
                    cout<<"Enter Password:";
                    getline(cin,pwd);
                    passwords[i]=pwd;
                    cout<<"User Register Successfully!!"<<endl;
                    uflag[i]=true;
                    break;
                       }
                   }
                    break;
                case 6:
                   //edit student
                   cin.ignore(25,'\n');
                   cout<<"Enter the username to edit/update:";
                   getline(cin,user);
                   for(int i=0;i<usize;i++)
                   {
                       
                       if(user==username[i])
                       {
                           cout<<"Enter the updated username:";
                           getline(cin,username[i]);
                           cout<<"Enter the updated password:";
                           getline(cin,passwords[i]);
                           cout<<"User Updated Successfully!!!!"<<endl;
                           break;
                       }
                   }
                    break;
                case 7:
                     //delete user
                     cin.ignore(25,'\n');
                    cout<<"Enter The Username To delete:";
                    getline(cin,user);
                    for(int i=0;i<usize;i++)
                    {
                    if(user==username[i])
                    {
                        username[i]="";
                        passwords[i]="";
                        cout<<"student Deleted Successfull"<<endl;
                        uflag[i]=false;
                        break;
                    }       
                    }
                    break;
                case 8:
                    //list of student
                    cout<<left<<setw(30)<<"Username"<<left<<setw(30)<<"Password"<<endl;
                    cout<<"***************************************************************"<<endl;
                    for(int i=0;i<usize;i++)
                    {
                     if(uflag[i]==true)
                     {
                         cout<<left<<1+i<<" "<<left<<setw(30)<<username[i]<<left<<setw(10)<<passwords[i]<<endl;
                     }
                    }
                    break;
                case 9:
                    //view score
                    cout<<"************************************************************************************************"<<endl;
                    cout<<left<<setw(30)<<"Username"<<left<<setw(30)<<"Attained Marks"<<left<<setw(30)<<"Total Marks"<<endl;
                    cout<<"*************************************************************************************************"<<endl;
                    for(int i=0;i<usize;i++)
                    {
                        if(uflag[i]==true)
                        {
                            cout<<left<<1+i<<left<<setw(30)<<username[i]<<left<<setw(10)<<scores[i]<<left<<setw(30)<<totalmarks<<endl;
                        }
                    }
                    break;
                case 0:
                    cout<<"Thanks For Using System..."<<endl;
                    cout << "Administrator is logged out" << endl;
                    break;

                default:
                    cout << "Invalid choice!!!";
                    break;
                }
            } while (input != 0);
            input = -1; //this statment is to make sure that do not exit from outer loop
        }
        else if (loggedInUserType == 2) //user
        {
            cout << endl;
            cout << "Choose the desired option\n";
            cout << left << setw(10) << "\t"
                 << setw(25) << "1. Attempt Quiz"
                 << setw(25) << "2. View Score"
                 << setw(25) << "0. Logout";
            cout << endl;

            cout.unsetf(ios::left);
            cout.unsetf(ios::right);

            cout << "\tChoose an option: ";
            cin >> input;

            do
            {
                switch (input)
                {

                case 1:
                    //
                    for(int i=0;i<qsize;i++)
                    {
                        if(question[i]!="")
                        {
                            cout<<"Q"<<i+1<<cout<<".   "<<question[i]<<endl;
                            cout<<"Options"<<endl;
                            cout<<"a.  "<<option1[i]<<"        "<<"b.   "<<option2[i]<<"         "<<"c.   "<<option3[i]<<"       "<<"d.   "<<option4[i]<<endl;
                            totalmarks[i]=totalmarks[i]+1;
                        }
                    }
        
                    break;
                case 2:
                    /* code */
                    cout<<"************************************************************************************************"<<endl;
                    cout<<left<<setw(30)<<"Username"<<left<<setw(30)<<"Attained Marks"<<left<<setw(30)<<"Total Marks"<<endl;
                    cout<<"*************************************************************************************************"<<endl;
                    for(int i=0;i<usize;i++)
                    {
                        if(uflag[i]==true)
                        {
                            cout<<left<<1+i<<left<<setw(30)<<username[i]<<left<<setw(10)<<scores[i]<<left<<setw(30)<<totalmarks<<endl;
                        }
                    }
                    break;

                case 0:
                    cout << "You are logged out" << endl;
                    break;

                default:
                    cout << "Invalid choice!!!";
                    break;
                }

            } while (input != 0);
            input = -1; //this statment is to make sure that do not exit from outer loop
        }
        else if (loggedInUserType == -1)
        {
            cout << "You have entered invalid Credentials!!!" << endl;
        }
    } while (input != 0);

    return 0;
}

void loadData()
{
    ifstream inf1("UserList.csv");
    string line1, field1;
    vector<vector<string>> array1;
    vector<string> v1;
    string usr = "user";
    while (getline(inf1, line1))
    {
        v1.clear();
        stringstream ss(line1);
        while (getline(ss, field1, ','))
        {
            v1.push_back(field1);
        }
        array1.push_back(v1);
    }
    for (size_t i = 1; i < array1.size(); ++i)
    {
        uflag[i] = true;
        username[i] = array1[i][0];
        passwords[i] = array1[i][1];
    }
    inf1.close();

    ifstream in("QuesionsList.csv");
    string line, field;
    vector<vector<string>> array;
    vector<string> v;

    while (getline(in, line))
    {
        v.clear();
        stringstream ss(line);
        while (getline(ss, field, ','))
        {
            v.push_back(field);
        }
        array.push_back(v);
    }
    for (size_t i = 1; i < array.size(); ++i)
    {
        qflag[i] = true;
        question[i] = array[i][0];
        option1[i] = array[i][1];
        option2[i] = array[i][2];
        option3[i] = array[i][3];
        option4[i] = array[i][4];
        correctOption[i] = array[i][5];
    }
    in.close();
}
