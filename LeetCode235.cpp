/*************************************************************************
	> File Name: LeetCode235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 21时04分50秒
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
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/*
struct TreeNode *__lowestCommonAncestor (struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
    if (root->val == p->val) return p;
    if (root->val == q->val) return q;
    if (root->val > p->val && root->val < q->val) {
        return root;
    }
    if (p->val > root->val) return __lowestCommonAncestor(root->right, p ,q);
    return __lowestCommonAncestor(root->left, p, q);
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL) return NULL;
    if (p->val == q->val) return p;
    if ((p->val > root->val && q->val < root->val) || (q->val > root->val && p->val < root->val)) return root;
    if (p->val > q->val) {
        struct TreeNode *temp = p;
        p = q;
        q = temp;
    }
    return __lowestCommonAncestor(root, p, q);
}
*/
struct TreeNode *lowestCommonAncestor (struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
    if (p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left, p, q);
    else if (p->val > root->val && q->val > root->val) return lowestCommonAncestor(root->right, p, q);
    return root;
}
