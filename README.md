1. they are only working with the CreateTree function
``` cpp
void iterativePreorder() { iterativePreorder(root); }  
void iterativeInorder(Node* p);  
void iterativeInorder() { iterativeInorder(root); }  
void iterativePostorder(Node* p);  
void iterativePostorder() { iterativePostorder(root); }  
void iterativeLevelorder(Node *p);  
void iterativeLevelorder() { iterativeLevelorder(root); }

```

2. the tree that is created by insert function can only be displayed by
	the recursion way.
```cpp
void insert(int key);
void Preorder(Node* p);  
void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor  
void Inorder(Node* p);  
void Inorder() { Inorder(root); }  
void Postorder(Node* p);  
void Postorder() { Postorder(root); }
```

