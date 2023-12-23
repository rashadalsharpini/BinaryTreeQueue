//
// Created by rashadalsharpini on 14/12/23.
//

#ifndef BINARYTREEQUEUE_TREE_H
#define BINARYTREEQUEUE_TREE_H
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};

class Tree{
private:
    Node* root=NULL;
public:
    Tree();
    ~Tree();
    void CreateTree();
    void Preorder(Node* p);
    void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor
    void Inorder(Node* p);
    void Inorder() { Inorder(root); }
    void Postorder(Node* p);
    void Postorder() { Postorder(root); }
    void Levelorder(Node* p);
    void Levelorder() { Levelorder(root); }
    int Height(Node* p);
    int Height() { return Height(root); }
    void iterativePreorder(Node* p);
    void iterativePreorder() { iterativePreorder(root); }
    void iterativeInorder(Node* p);
    void iterativeInorder() { iterativeInorder(root); }
    void iterativePostorder(Node* p);
    void iterativePostorder() { iterativePostorder(root); }
    void iterativeLevelorder(Node *p);
    void iterativeLevelorder() { iterativeLevelorder(root); }
    void insert(int key);

};


#endif //BINARYTREEQUEUE_TREE_H
