#include <iostream>
#include "Tree.h"
using namespace std;
int main() {

    Tree bt;

//    bt.CreateTree();
    for (int i = 0; i < 10; ++i) {
        int x;cin>>x;
        bt.insert(x);
    }
    cout << endl;

    cout << "Preorder: " << flush;
    bt.Preorder();
    cout << endl;

    cout << "Inorder: " << flush;
    bt.Inorder();
    cout << endl;

    cout << "Postorder: " << flush;
    bt.Postorder();
    cout << endl;

    cout << "Levelorder: " << flush;
    bt.Levelorder();
    cout << endl;

    cout << "Height: " << bt.Height() << endl;

//    cout << "Iterative Preorder: " << flush;
//    bt.iterativePreorder();
//    cout << endl;
//
//    cout << "Iterative Inorder: " << flush;
//    bt.iterativeInorder();
//    cout << endl;
//
//    cout << "Iterative Postorder: " << flush;
//    bt.iterativePostorder();
//    cout << endl;
//
//    cout << "Iterative Levelorder: " << flush;
//    bt.iterativeLevelorder();
//    cout << endl;

    cout<<"\n\nNo Run Time Error"<<endl;
    return 0;
}