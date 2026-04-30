


//                   Name=  Degie Ayana
//                    ID=1141/17

#include <iostream>
#include <string>
using namespace std;
struct student
{
    int id;
    string name; // name of student
    char grade; // in letter
    student *next; //Pointer to next node
};

struct student *start_ptr = NULL;

void add_at_the_beginning()
{
   student*temp;
    student*temp2;
    temp=new student;
    temp2=start_ptr;
    cout<<"please enter your id ";
    cin>>temp->id;
    cout<<"please enter your name ";
    cin>>temp->name;
    cout<<"please enter your grade";
    cin>>temp->grade;
    if(start_ptr==NULL)
        start_ptr=temp;
    else
    {
        temp->next=temp2;
        start_ptr=temp;
    }
}

void add_at_the_end()
{
    student*temp;
    student*temp2;
    temp=new student;
    temp2=start_ptr;
    cout<<"please enter your id ";
    cin>>temp->id;
    cout<<"please enter your name ";
    cin>>temp->name;
    cout<<"please enter your grade";
    cin>>temp->grade;
    if(start_ptr==NULL)
        start_ptr=temp;
    else
    {
        student*temp2=start_ptr;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}


void display()
{
    student*temp;
    if(start_ptr==NULL)
        cout<<"no data inside\n";
    else {
        temp=start_ptr;
        while(temp!=NULL)
        {
            cout<<"\n=============================";
            cout<<"\nid\t "<<temp->id;
            cout<<"\n=============================";
            cout<<"\nname\t "<<temp->name;
            cout<<"\n=============================";
            cout<<"\ngrade\t "<<temp->grade;
            temp=temp->next;
        }
    }
}


void delete_end()
{
    student*temp,
    *temp2;
    if(start_ptr==NULL)
        cout<<"no data inside\n";
    else
    {
        temp=start_ptr;
        while(temp->next!=NULL)
        {
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=NULL;
        delete temp;
    }
}


int main ()
{
    while(true) {
        int choise;

        cout<<"\nPress 1 to insert new data at beginig\n";
        cout<<"\nPress 2 to insert new data at end\n";
        cout<<"Press 4 to display all data\n";
        cout<<"\npress 7 to delet data at the end\n";
        cout<<"Please enter your chooise ";
        cin>>choise;

        switch(choise) {
        case 1:
            add_at_the_beginning();
            break;
        case 2:
            add_at_the_end();
            break;
        case 4:
            display();
            break;
        case 7:
            delete_end();
            break;
        default:

            goto last;
        }
    }
last:
    ;
}

    