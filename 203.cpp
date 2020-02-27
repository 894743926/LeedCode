/*************************************************************************
	> File Name: 203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 20时47分02秒
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


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret;
    while (p && p->next) {
        if (p->next->val  == val) {
            q = p->next;
            p->next = q->next;
            free(q);
        }else {
            p = p->next;
        }
    }
    return ret.next;
}
