#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        // Constructor Class
        node(int val){
            data = val;
            next = NULL;
        }
};

void insert_at_tail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void print_ll(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


node* recursive_reverse(node* &head){
    // Base Cases
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newHead = recursive_reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}


int main(){
    node* head = NULL;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Enter the " << i+1 << "th element: ";
        int t;
        cin >> t;
        insert_at_tail(head, t);
    }
    print_ll(head);

    node* newhead = recursive_reverse(head);
    print_ll(newhead);
    return 0;
}