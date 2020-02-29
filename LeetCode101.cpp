/*************************************************************************
	> File Name: LeetCode101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 21时00分24秒
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


bool is_check(struct TreeNode *p, struct TreeNode *q) {
    if (p == NULL && q== NULL) return true;
    if (p == NULL || q== NULL) return false;
    if (p->val != q->val) return false;
    return is_check(p->left, q->right) && is_check(p->right, q->left);
}

bool isSymmetric(struct TreeNode* root){
    if (root == NULL) return true;
    return is_check(root->left, root->right);
}
/*错误， 未修改好
bool isSymmetric(struct TreeNode* root){
    if (root->left->val != root->right->val) {
        return false;
    } else {
        return isSymmetric(root->left) && isSymmetric(root->right) ;
    }
}
/*
