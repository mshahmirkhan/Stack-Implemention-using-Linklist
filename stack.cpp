#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
double data; // data
Node* next; // pointer to next
};

class List
{
public:
List(void) { head = NULL; } // constructor
~List(void); // destructor
bool IsEmpty() { return head == NULL; }
Node* InsertNode( double x);
int DeleteNode();
void DisplayList(void);
private:
Node* head;
};



Node* List::InsertNode( double x)
{
	
Node* newNode= new Node;
newNode->data=x;
newNode->next=head;
head=newNode;


return newNode;
}




int List::DeleteNode()
{
if(IsEmpty()){
	cout<<"list is empty";
}else{
	Node* currNode = head;
	head=head->next;
	free(currNode);	
}
return 0;
}




void List::DisplayList()
{
	
if(IsEmpty()){
	cout<<"list is empty";
}else{
Node* currNode = head;
while (currNode != NULL)
{
cout << currNode->data << endl;
currNode = currNode->next;
}
}

}



List::~List(void)
{
}

int main(void)
{
List list;
int data;
	char choice2;
do{
	int choice,Nentries ;
	cout<<"DYNAMIC IMPLEMENTATION OF STACK USING LINK LIST \n\n";
	cout<<"Choose any of the follwing option \n\n";

	cout<<"1_  INSERTION \n";
	cout<<"2_  DELETION \n";
	cout<<"3_  EXIT\n";
	
	cout<<"\nENTER YOUR CHOICE: \n";
	cin>>choice;
	
	switch(choice){
		case 1:
			
			cout<<"how many Entries you want to insert: ";
			cin>>Nentries;
			cout<<"\nENTER "<<Nentries<<" elements in Stack:\n";
			for(int i=0;i<Nentries;i++)
				{
				cin>>data;
				list.InsertNode(data);
				}
				cout<<"\nElement of the Stack:\n";
				list.DisplayList();
			break;
		
		case 2:{
			cout<<"\n\n\nHow many elements you want to remove from the Stack? : ";
			cin>>Nentries;
			for(int i=0;i<Nentries;i++)
				{
					list.DeleteNode();
				}
			cout<<"Stack after removal of "<<Nentries<<" elemants \n";	
			list.DisplayList();
			break;
		}
		case 3:{
			
			cout<<"\n GOOD BYE :-\n\n ";
			break;
		}
		default:cout<<"\n\nThis is not an option (TRY AGAIN)";
	}

 
	cout << "\n\nDoyou want to repeat the program? Enter Y/N:  ";
    cin >> choice2;
    system("CLS"); 
} while (choice2 == 'y' || choice2 == 'Y');



}
