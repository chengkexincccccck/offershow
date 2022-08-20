/*
 * @Author: Chengkexin
 * @Date: 2022-07-03 19:41:15
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-24 10:10:15
 * @FilePath: /getOffer/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "headers.h"

void test_01(){
    char* str="hello world";
    CMyString a(str);
    CMyString b(a);
    a.print();
    b.print();
}
void test_02(){
    singletonhunger* a=singletonhunger::getinstance();
    a->printf();
    singletonlazy* b=singletonlazy::getInstance();
    b->print();
}
void test_03(){
    int a[]={1,2,3,5,6,7,8,9,4,7};
    int b[]={1,2,3,5,6,7,8,9,4,7};
    int c[]={1,2,3,5,6,7,8,9,4,7};
    findDuplication_any(a,sizeof(a)/sizeof(int));
    findDuplication_any2(b,sizeof(b)/sizeof(int));
    findDuplication_any3(c,sizeof(c)/sizeof(int));
}
void test_04(){

    int nums[][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    int point=15;
    if(FindInPartially(nums,4,4,point)){
        cout<<"find this number"<<endl;
    }else{
        cout<<"can not find …"<<endl;
    }
    if(FindInPartially_official(nums,4,4,point)){
        cout<<"find this number"<<endl;
    }else{
        cout<<"can not find …"<<endl;
    }
}

void test_05(){
    string a="we are happy";
    const int blength=30;
    char b[blength]="we are happy";
    cout<<replace_Space(a)<<endl;
    ReplaceBlank(b,blength);
    cout<<b<<endl;
    char c[20]="acdfikm";
    char d[]="ehjp";
    merge_two_to_one(c,d,sizeof(c));
}

void test_06(){
    ListNode* pNode1 = CreateListNode(1);
    ListNode* pNode2 = CreateListNode(2);
    ListNode* pNode3 = CreateListNode(3);
    ListNode* pNode4 = CreateListNode(4);
    ListNode* pNode5 = CreateListNode(5);
    
    ConnectListNodes(pNode1, pNode2);
    ConnectListNodes(pNode2, pNode3);
    ConnectListNodes(pNode3, pNode4);
    ConnectListNodes(pNode4, pNode5);

    print_listnode_fromback(pNode1);
    cout<<""<<endl;
    printlistnode_fromback_recursion(pNode1);
}
void test_07(){
    // print_binaryTree();

    int front[]={1,2,4,7,3,5,6,8};
    int middle[]={4,7,2,1,5,3,8,6};
    BinaryTreeNode* root = Construct(front, middle, 8);
    PrintTree(root);
}

void test_08(){
    BinaryTreeNodeF* pNode8 = CreateBinaryTreeNodeF(8);
    BinaryTreeNodeF* pNode6 = CreateBinaryTreeNodeF(6);
    BinaryTreeNodeF* pNode10 = CreateBinaryTreeNodeF(10);
    BinaryTreeNodeF* pNode5 = CreateBinaryTreeNodeF(5);
    BinaryTreeNodeF* pNode7 = CreateBinaryTreeNodeF(7);
    BinaryTreeNodeF* pNode9 = CreateBinaryTreeNodeF(9);
    BinaryTreeNodeF* pNode11 = CreateBinaryTreeNodeF(11);
    
    ConnectTreeNodes(pNode8, pNode6, pNode10);
    ConnectTreeNodes(pNode6, pNode5, pNode7);
    ConnectTreeNodes(pNode10, pNode9, pNode11);

    // Test("Test1", pNode8, pNode9);
    // Test("Test2", pNode6, pNode7);
    // Test("Test3", pNode10, pNode11);
    // Test("Test4", pNode5, pNode6);
    // Test("Test5", pNode7, pNode8);
    // Test("Test6", pNode9, pNode10);
    // Test("Test7", pNode11, nullptr);
}
void test_09(){
    CQueue<char> queue;

    queue.appendTail('a');
    queue.appendTail('b');
    queue.appendTail('c');

    char head = queue.deleteHead();
    // Test(head, 'a');

    head = queue.deleteHead();
    // Test(head, 'b');

    queue.appendTail('d');
    head = queue.deleteHead();
    // Test(head, 'c');

    queue.appendTail('e');
    head = queue.deleteHead();
    // Test(head, 'd');

    head = queue.deleteHead();
    // Test(head, 'e');

}
void test_10(){
    // cout<<Fibonacci_n(9)<<endl;
    cout<<qingwatiaotaijie(10)<<endl;
}

int main(int argc,char *argv[]){
    clock_t start,end;
    double totaltime;
    start=clock();
    //添加测试程序

    test_10();

    //完成测试程序
    end=clock();
    totaltime=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<"process running times: "<<totaltime<<" (s)"<<endl;
    return 0;
}