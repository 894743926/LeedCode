/*************************************************************************
	> File Name: 206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 20时47分58秒
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

/*头插法*/
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode ret, *p, *q;
    ret.next = NULL;
    p = head;
    while (p) {
            q = p->next;
            p->next = ret.next;
            ret.next = p;
            p = q;
    }
    return ret.next;

}
