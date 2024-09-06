#include <iostream>
#include <string>
using namespace std;

struct  Node
{
    int val;
    Node* next;
};

//创建链表
Node* creatlist(int n){
    Node* head = new Node;
    Node* p = head;
    cout << "请依次输入" << n << "个链表的值" << endl;
    for (int i = 0; i < n; i++)
    {
        Node* node = new Node;
        cin >> node->val;
        p->next = node;
        p = node;
    }
    // head->next = NULL;      
    return head;    
}

//打印链表
void printlist(Node* head){
    Node* p = head->next;
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "请输入链表长度";
    cin >> n;
    cout << "链表长度为" << n << endl;
    
    Node* head = creatlist(n);

    cout << "链表为" << endl;
    printlist(head);
    return 0;
}