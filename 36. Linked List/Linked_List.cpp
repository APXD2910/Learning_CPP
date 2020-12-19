/*
Limitations of Array
1) Fixed size
2) Contiguous block of memory
3) Insertion or deletion is costly


Properties of Linked List
1) Size can be modified
2) Non-Contiguous memory
3) Insertion or deletion at any point is easier


STRUCTURE OF LINKED LIST
Each part of a linked list is called a node
Each node has 2 parts: Data and Next

Data contains the data of the node and the other part of the 
node called next contains the address of the next node

- 'Next' portion of the last node contains NULL
*/

#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insert_at_tail(node* &head, int val){
    node* n = new node(val);

    // Special Case
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    // We are now at our last element
    temp->next = n;
}

void print_ll(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "\n";
}

int main(){
    node* head=NULL;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter the "<< i+1 << "th element: ";
        int t;
        cin >> t;
        insert_at_tail(head, t);
    }
    print_ll(head);
    return 0;
}