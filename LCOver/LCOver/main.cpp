//
//  main.cpp
//  LCOver
//
//  Created by 你吗 on 2021/3/19.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <list>
#include <iomanip>
#include <queue>
#include <stack>
#include <string>
#include "HelloWorld.hpp"
#include "LeetCode.hpp"
#include "FFAlgorithm.hpp"

#define null -1

using namespace std;


void p(string s,vector<int> a){
    cout << s;
    for(auto item : a){
        cout << item << ",";
    }
    cout << endl;
}

void p(string s,int a[],int len){
    cout << s;
    for(int i = 0; i < len; i++){
        cout << a[i] << ",";
    }
    cout << endl;
}

void pList(ListNode *list){
    while(list){
        cout << list->val << ",";
        list = list->next;
    }
    cout << endl;
}


int main(int argc, const char * argv[]) {
    LeetCode leetCode = LeetCode();
//    LRUCache lru = LRUCache(2);
    //---------------leet---------------
    /* 链表 */
//    ListNode* list = List::createList({7,2,7,7});
//    ListNode* list2 = List::createList({1,3,4});
//    ListNode* list3 = List::createList({2,6});
    /* 二叉树 */
//    int a[] = {1,2,3,null,null,4,5,6};
//    int b[] = {1,NULL,2,NULL,3};1,2,3,null,null,4,5,6
//    TreeNode *tree1 = codec.deserialize("1,2,3,null,null,4,5,6");
//    TreeNode *tree2 = Tree::creatBTree(b, 0, sizeof(b)/sizeof(int));
    
    /* 字符串 */
    
//    vector<string> s_v = {"06","words and 987","225","-42","-91283472332","91283472332","    123","        -32","3.123","-3.123","+-3.2","+3"};
//    string s = "Let's take LeetCode contest";
//    vector<string> s_v = {"H2O","K4(ON(SO3)2)2","Mg(OH)2","Be32","H111He49NO35B7N46Li20"};
//    string st1 = s1.substr(0,4);
//    string st2 = s1.substr(4,s1.length() - 4);
//    cout << st1 << "," << st2 <<endl;
    
    /* 数组 */
    
//    vector<vector<string>> vvc = {
//        {".",".",".",".","5",".",".","1","."},
//        {".","4",".","3",".",".",".",".","."},
//        {".",".",".",".",".","3",".",".","1"},
//        {"8",".",".",".",".",".",".","2","."},
//        {".",".","2",".","7",".",".",".","."},
//        {".","1","5",".",".",".",".",".","."},
//        {".",".",".",".",".","2",".",".","."},
//        {".","2",".","9",".",".",".",".","."},
//        {".",".","4",".",".",".",".",".","."}};
//    vector<vector<string>> v = {{"David","3","Ceviche"},{"Corina","10","Beef Burrito"},{"David","3","Fried Chicken"},{"Carla","5","Water"},{"Carla","5","Ceviche"},{"Rous","3","Ceviche"}};
//    vector<string> v1 = {"i", "love", "leetcode", "i", "love", "coding"};
//    vector<int> v2 = {0,1,1};
//    vector<vector<int>> null_v = {2,1,0};
//    vector<vector<int>> v = {{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    //5
    //{{0,2},{2,1},{3,4},{2,3},{1,4},{2,0},{0,4}}
    //3

    
//    TreeNode * ans = codec.deserialize(codec.serialize(tree1));
//    for (string s : s_v) {
//        auto ans = leetCode.countPairs(v2);
//    pList(ans);
//        cout<< "ans:" << ans << endl;
//    }
//    Tree::pTree(tree1);
    
//    cout << "ans :";
//    for(auto a : ans){
//        cout << a << ",";
//    }
//    cout << endl;

//    LRUCache lRUCache = LRUCache(3);
//    lRUCache.put(1, 1); // 缓存是 {1=1}
//    lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
//    lRUCache.put(3, 3); // 缓存是 {1=1, 2=2}
//    lRUCache.put(4, 4); // 缓存是 {1=1, 2=2}
////
////    int a = lRUCache.get(2);    // 返回 1
////    lRUCache.put(4, 1); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
//    int a = lRUCache.get(4);    // 返回 -1 (未找到)
//    a = lRUCache.get(3);    // 返回 -1 (未找到)
//    a = lRUCache.get(2);    // 返回 -1 (未找到)
//    a = lRUCache.get(1);    // 返回 -1 (未找到)
//    lRUCache.put(5, 5); // 缓存是 {1=1, 2=2}
//    a = lRUCache.get(1);    // 返回 -1 (未找到)
//    a = lRUCache.get(2);    // 返回 -1 (未找到)
//    a = lRUCache.get(3);    // 返回 -1 (未找到)
//    a = lRUCache.get(4);    // 返回 -1 (未找到)
//    a = lRUCache.get(5);    // 返回 -1 (未找到)
//
//    a = lRUCache.get(3);    // 返回 3
//    a = lRUCache.get(4);    // 返回 4
    
    LRUCache lRUCache = LRUCache(2);
    lRUCache.put(2, 1); // 缓存是 {1=1}
    lRUCache.put(1, 1); // 缓存是 {1=1, 2=2}
//    lRUCache.get(1);    // 返回 1
    lRUCache.put(2, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
//    lRUCache.get(2);    // 返回 -1 (未找到)
    lRUCache.put(4, 1); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
    lRUCache.get(1);    // 返回 -1 (未找到)
    lRUCache.get(2);    // 返回 3
//    lRUCache.get(4);    // 返回 4


    
    
    //---------------排序---------------
//    vector<int> a = {3,5,2,4,1,6,7};
//    int randomLength = 10;
//    vector<int> randomList;
//    while (--randomLength) {
//        randomList.push_back(rand() % 100 - 50);
//    }
//    sortList = randomList;
//    SortAlgorithms sortMath;
//    p("原数组：", a);
//    sortMath.heapSort(a);
//    p("排序结果：",a);

    
    
    
    //---------------运气游戏---------------
//    MotherFxxker fxxker;
//    int x = 5;
//    int m = 5;
//    while(m--){
//        fxxker.sixsixsixsixsixsix(x);
//    }
//
    
    return 0;
}

