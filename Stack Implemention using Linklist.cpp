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
int FindNode(double x);
int DeleteNode();
void DisplayList(void);
private:
Node* head;
};



Node* List::InsertNode( double x)
{
//if (index < 0) return NULL;
//int currIndex = 1;
//Node* currNode = head;
//while (currNode && index > currIndex)
//{
////Try to locate index'th node. If it doesn't exist, return NULL
//currNode = currNode->next;
//currIndex++;
//}
//if (index > 0 && currNode == NULL) return NULL;
//Node* newNode = new Node;
//newNode->data = x; 
//if (index == 0)
//{
//newNode->next = head;
//head = newNode;
//}
//else
//{
//newNode->next = currNode->next;
//currNode->next = newNode;
//}

Node* newNode= new Node;
newNode->data=x;
newNode->next=head;
head=newNode;


return newNode;
}




//int List::FindNode(double x)
//{
//Node* currNode = head;
//int currIndex = 1;
//while (currNode && currNode->data != x)
//{
//currNode = currNode->next;
//currIndex++;
//}
//if (currNode) return currIndex;
//return 0;
//}



int List::DeleteNode()
{
	
//Node* prevNode = NULL;
//Node* currNode = head;
//int currIndex = 1;
//while (currNode && currNode->data != x)
//{
//prevNode = currNode;
//currNode = currNode->next;
//currIndex++;
//}
//if (currNode)
//{
//if (prevNode)
//{
//prevNode->next = currNode->next;
//delete currNode;
//}
//else
//{
//head = currNode->next;
//delete currNode;
//}
//return currIndex;
//}


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
Node* currNode = head;
Node* nextNode = NULL;
while (currNode != NULL)
{
nextNode = currNode->next;
delete currNode; // destroy the current node
currNode = nextNode;
}
}
int main(void)
{
List list;
//list.InsertNode(7.0); // successful
//list.InsertNode( 5.0); // successful
//list.InsertNode(-1, 5.0); // unsuccessful
//list.InsertNode(0, 6.0); // successful
//list.InsertNode(8, 4.0); // unsuccessful
//// print all the elements
//list.DisplayList();
//if(list.FindNode(5.0) > 0)
//cout << "5.0 found" << endl;
//else
//cout << "5.0 not found" << endl;
//if(list.FindNode(4.5) > 0)
//cout << "4.5 found" << endl;
//else
//cout << "4.5 not found" << endl;
//list.DeleteNode();
//list.DisplayList();
//



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
