/*************************************************************************
	> File Name: LeetCode104.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 21时01分43秒
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


int maxDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    int l = maxDepth(root->left), r = maxDepth(root->right);
    return (l > r ? l : r) + 1;
}
