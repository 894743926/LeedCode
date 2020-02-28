/*************************************************************************
	> File Name: 19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时05分24秒
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


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
       int length = 0;
       struct ListNode *corrent_node = head;
       while (corrent_node->next != NULL) {
           corrent_node = corrent_node->next;
           length ++;
       }
       struct ListNode *delete_node = head;
       struct ListNode *flag_node = head;
       if (length - n == -1) {
           flag_node = head->next;
           return flag_node;
       }
       else {
           for (int i = 0; i < length - n; i++) {
           flag_node = flag_node->next;
           }
       for (int i = 0; i <= length - n; i++) {
           delete_node = delete_node->next;
       }
       flag_node->next = delete_node->next;
       return head;
       }
}
