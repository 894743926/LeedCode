/*************************************************************************
	> File Name: LeetCode112.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 21时04分02秒
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


bool hasPathSum(struct TreeNode* root, int sum){
     if (root == NULL) return false;
     if (root->left == NULL && root->right == NULL ) return root->val == sum;
     return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}
