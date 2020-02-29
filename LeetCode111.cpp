/*************************************************************************
	> File Name: LeetCode111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 21时03分45秒
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


int minDepth(struct TreeNode* root){
    if(root == NULL) return 0;
	if(root->left == NULL && root->right == NULL)return 1;
	if(root->left == NULL || root->right == NULL){
        return minDepth(root->left ? root->left : root->right) + 1;
    }
    return fmin(minDepth(root->left), minDepth(root->right)) + 1;
}
