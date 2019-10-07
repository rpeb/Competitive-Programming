#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
Node *rotate(struct Node *head, int k);
Node *insert() {
    int n, i, value;
    struct Node *temp, *head = NULL;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> value;
        if (i == 0) {
            head = new Node(value);
            temp = head;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
    return head;
}
void printList(Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" ");
}
/* Drier program to test above function*/
int main(void) {
    int t, k;
    scanf("%d", &t);
    while (t--) {
        Node *head = insert(); // insert function to build linked list
        scanf("%d", &k);
        head = rotate(head, k); // rotate linked list anti-clockwise  by k nodes
        printList(head);        // print linked list after rotation
    }
    return (0);
}
/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    // Your code here
    Node *temp2 = head;
    int n=0;
    while(temp2!=NULL)
    {
        n++;
        temp2=temp2->next;
    }
    int arr[n];
    Node *temp = head, *temp1 = head;
    for (int i = 0; i < n; i++)
    {
        if (temp->next != NULL)
        {
            arr[i] = temp->data;
            temp=temp->next;
        }
    }
    for (int i = 0; i < n; i++)
    arr[i] = arr[(i+k)%n];
    for (int i = 0; i < n; i++)
    {
        temp1->data = arr[i];
        temp1=temp1->next;
    }
    return temp1;
}

