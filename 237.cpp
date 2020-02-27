/*************************************************************************
	> File Name: 237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 20时50分47秒
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
void deleteNode(struct ListNode* node) {
   struct ListNode *p = node->next;
   node->val = p->val;
   node->next = p->next;
   free(p);
   return;
}
