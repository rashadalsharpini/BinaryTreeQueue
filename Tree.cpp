//
// Created by rashadalsharpini on 14/12/23.
//

#include "Tree.h"
template class Tree<int>;
template class Tree<double>;
template class Tree<string>;
template class Tree<float>;
template class Tree<char>;
template class Tree<bool>;
template <typename T>
Tree<T>::Tree() {
    root = nullptr;
}
template <typename T>
Tree<T>::~Tree() {
    // TODO
}
template <typename T>
void Tree<T>::CreateTree() {
    Node<T>* p;
    Node<T>* t;
    int x;
    queue<Node<T>*> q;

    root = new Node<T>;
    cout << "Enter root data: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.emplace(root);

    while (! q.empty()){
        p = q.front();
        q.pop();

        cout << "Enter left child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node<T>;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }

        cout << "Enter right child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node<T>;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}
template <typename T>
void Tree<T>::Preorder(Node <T>*p) {
    if (p){
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
template <typename T>
void Tree<T>::Inorder(Node<T> *p) {
    if (p){
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}
template <typename T>
void Tree<T>::Postorder(Node<T> *p) {
    if (p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}
template <typename T>
void Tree<T>::Levelorder(Node<T> *p) {
    queue<Node<T>*> q;
    cout << root->data << ", " << flush;
    q.emplace(root);

    while (! q.empty()){
        p = q.front();
        q.pop();

        if (p->lchild){
            cout << p->lchild->data << ", " << flush;
            q.emplace(p->lchild);
        }

        if (p->rchild){
            cout << p->rchild->data << ", " << flush;
            q.emplace(p->rchild);
        }
    }
}
template <typename T>
int Tree<T>::Height(Node<T> *p) {
    int l = 0;
    int r = 0;
    if (p == nullptr){
        return 0;
    }

    l = Height(p->lchild);
    r = Height(p->rchild);

    if (l > r){
        return l + 1;
    } else {
        return r + 1;
    }
}
template <typename T>
void Tree<T>::iterativePreorder(Node<T> *p) {
    stack<Node<T>*> stk;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            cout << p->data << ", " << flush;
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            p = p->rchild;
        }
    }
    cout << endl;
}
template <typename T>
void Tree<T>::iterativeInorder(Node<T> *p) {
    stack<Node<T>*> stk;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            cout << p->data << ", " << flush;
            p = p->rchild;
        }
    }
    cout << endl;
}
template <typename T>
void Tree<T>::iterativePostorder(Node<T> *p) {
    stack<long int> stk;
    long int temp;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            stk.emplace((long int)p);
            p = p->lchild;
        } else {
            temp = stk.top();
            stk.pop();
            if (temp > 0){
                stk.emplace(-temp);
                p = ((Node<T>*)temp)->rchild;
            } else {
                cout << ((Node<T>*)(-1 * temp))->data << ", " << flush;
                p = nullptr;
            }
        }
    }
    cout << endl;
}
template <typename T>
void Tree<T>::iterativeLevelorder(Node<T> *p) {
    queue<Node<T>*>q;
    cout<<p->data;
    q.push(p);
    while(!q.empty()){
        p=q.front();
        q.pop();
        if(p->lchild){
            cout<<p->lchild->data;
            q.push(p->lchild);
        }
        if(p->rchild) {
            cout << p->rchild->data;
            q.push(p->lchild);
        }
    }
}
