//
// Created by rashadalsharpini on 14/12/23.
//

#ifndef BINARYTREEQUEUE_TREE_H
#define BINARYTREEQUEUE_TREE_H
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
template <typename T>
class Node{
public:
    Node* lchild;
    T data;
    Node* rchild;
};
template <typename T>
class Tree{
private:
    Node<T>* root;
public:
    Tree();
    ~Tree();
    void CreateTree();
    void Preorder(Node<T>* p);
    void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor
    void Inorder(Node<T>* p);
    void Inorder() { Inorder(root); }
    void Postorder(Node<T>* p);
    void Postorder() { Postorder(root); }
    void Levelorder(Node<T>* p);
    void Levelorder() { Levelorder(root); }
    int Height(Node<T>* p);
    int Height() { return Height(root); }
    void iterativePreorder(Node<T>* p);
    void iterativePreorder() { iterativePreorder(root); }
    void iterativeInorder(Node<T>* p);
    void iterativeInorder() { iterativeInorder(root); }
    void iterativePostorder(Node<T>* p);
    void iterativePostorder() { iterativePostorder(root); }
    void iterativeLevelorder(Node<T> *p);
    void iterativeLevelorder() { iterativeLevelorder(root); }

};


#endif //BINARYTREEQUEUE_TREE_H
