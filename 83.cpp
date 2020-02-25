/*************************************************************************
	> File Name: 83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时06分18秒
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


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p = head, *q;
   while (p && p->next) {
       if (p->val != p->next->val) {
           p = p->next;
       }else {
           q = p->next;
           p->next = q->next;
           free(q);
       }
   }
   return head;
}
