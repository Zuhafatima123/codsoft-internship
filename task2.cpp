#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct task{string description;
            bool iscompleted;
 task(string desc):
 description(desc), iscompleted(false){}};

int main()
{
vector<task> tasks;
int choice;
do{
    cout<<"To-do list Manager"<<endl;
    cout<<"1. Add task"<<endl;
    cout<<"2. View task"<<endl;
    cout<<"3. Remove task"<<endl;
    cout<<"4. Mark task as completed"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<endl;
    cout<<"Enter your choice: ";

    cin>>choice;
    cin.ignore();

    switch(choice){
    case 1:{ string taskdescription;
            cout<<endl;
            cout<<"Enter task description: ";
            getline(cin,taskdescription);
            tasks.push_back(task(taskdescription));
            break;}

    case 2:{ if(tasks.empty()){
             cout<<"No task to display";}
             else{
                  for(size_t i=0; i<tasks.size(); ++i){
                  cout<<i+1<<"."<<tasks[i].description<<"-"<<(tasks[i].iscompleted ?"Completed":"Pending")<<endl;}
                  }break;}

    case 3:{ int tasknum;
            cout<<endl;
            cout<<"Enter task number to remove: ";
            cin>>tasknum;
            if(tasknum>0 && tasknum<=tasks.size()){
            tasks.erase(tasks.begin()+tasknum-1);
            cout<<"Task removed seccessfully."<<endl;}
            else{
                 cout<<"Invalid task number."<<endl;
                }break;}

    case 4:{ int tasknumber;
            cout<<endl;
            cout<<"Enter task number to mark as completed: ";
            cin>>tasknumber;
            if(tasknumber>0 && tasknumber<=tasks.size()) {
            tasks[tasknumber-1].iscompleted = true;
            cout<<"Task marked as completed."<<endl;}
            else{
            cout<<"Invalid task number."<<endl;
            }break;}

    case 5:
           cout<<"Exiting program."<<endl;
           break;

default:
           cout<<"Invalid choice,try again."<<endl;}
           cout<<endl;

}while(choice != 5);

    return(0);
}

