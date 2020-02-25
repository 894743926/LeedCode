/*************************************************************************
	> File Name: 160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时07分22秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<queue>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int cntA = 0, cntB = 0;
    struct ListNode *p = headA, *q = headB;
    while (p) cntA++, p = p->next;
    while (q) cntB++, q = q->next;
    int m = cntA - cntB;
    p = headA, q = headB;
    if (m > 0) {
        while (m--) {
            p = p->next;
        }
        while (p != q) {
            p = p->next;
            q = q->next;
        }
    }else {
        while (m++) {
            q = q->next;
        }
        while (p != q) {
            p = p->next;
            q = q->next;
        }
    }
    return p;
}
