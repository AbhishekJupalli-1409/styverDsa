#include<iostream>
using namespace std;

#include "node.cpp"                                    //For including the node class file in this program

node* takeInput() {
	int data;
	cin >> data;
	node* head = NULL;
	node* tail = NULL;
	while (data != -1) {
		node* newNode = new  node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next=newNode;
			tail=newNode;
		}
//Below method has more time complexiety
//but in the above code we are removing the while loop in order to reduce the time complexity

		/*
		else {
			node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}

			temp->next = newNode;
		}
		*/



		cin >> data;



	}
	return head;
}
                                                                     // Function to print the linked list
void print(node* head) {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;

	}

	// node* temp2 = head;
	// while (temp2 != NULL) {
	// 	cout << temp2->data << " ";
	// 	temp2 = temp2->next;

	// }


}


void insertNode(node *head,int i,int data){
	node *newNode= new node(data);
	int count=0;
	node *temp= head;
	while(temp!=NULL && count < i-1){
	         
         	temp=temp->next;
        	count++;
	
	}
	if(temp!=NULL){
		node *a=temp->next;
		temp->next=newNode;
		newNode->next=a;
		count++;
    /*Or we can use these statement with out using new variable
	        newNode->next=temp->next;
	        temp->next=newNode;
		*/
	}
	else{
		cout<<"Enter the index value within the limit"<<endl;
	}



}






int main() {
	node* head = takeInput();
	print(head);

        int i,data;
	cin>>i>>data;
	insertNode(head,i,data);
	print(head);


	/*
	 statically allocating the memory

	node n1(1);
	node *head = &n1;
	node n2(2);
	node n3(3);
	node n4(4);
	node n5(5);

	n1.next = &n2;
		n2.next=&n3;
		n3.next =&n4;
	n4.next= &n5;
	print(head);
*/



/*
n1.next=&n1;
cout<<n1.data<<" "<<n2.data<<endl;
DYnamically
node *n3=new node(3);
	node *head=n3;
node *n4=new node(4);
node n3->next=n4;
	*/
}
