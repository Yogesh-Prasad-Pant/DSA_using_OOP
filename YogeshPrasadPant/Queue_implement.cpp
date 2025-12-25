#include<iostream>
using namespace std;
//class for Node or element
    class node{
        public:
            int data;
            node* next;
        node(int val){
            data = val;
            next = NULL;
        }
    };

    /// class for queue
    class Queue{
        node* head;
        node* tail;
    public: 
        Queue(){
            head=tail=NULL;
        }
        void Enqueue(int val){
             node* New = new node(val);
            if(head==NULL){
                tail=New;
                head=New;
                return;
            }
            tail->next = New;
            tail = New;
        }
    
     void print(){
        cout<<"the queue elements are : "<<endl;
        node*temp = head;
        while(temp!= NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        cout<<endl;
    }
    void Dequeue(){
        if(head == NULL){
            cout<<"The Queue is empty"<<endl;
            return;
        }
         node*temp = head->next;
         cout<<head->data<<" is dequeue"<<endl;
       delete head;
        head = temp;
        if(head == NULL)
        tail = NULL;
    }

    };

int main(){
    Queue q;
    q.Enqueue(5);
    q.Enqueue(6);
    q.Enqueue(7);
    q.print();
    q.Dequeue();
    q.print();
    q.Dequeue();
    q.print();
    return 0;
}
/*Conclusion:
Hence, in this way we were able to implement Queue linked list using  C++ 
titel index 
source code 
*/