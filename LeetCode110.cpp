/*************************************************************************
	> File Name: LeetCode110.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 21时02分53秒
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

/*int Depth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int l = Depth(root->left), r = Depth(root->right);
    return(l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode* root){
    if (root == NULL) return true;
    int l = Depth(root->left), r = Depth(root->right);
    if (abs(l - r) > 1) return false;
    return isBalanced(root->left) && isBalanced(root->right);
}*/

int Depth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int l = Depth(root->left), r = Depth(root->right);
    if (l == -2 || r == -2 || abs(l - r) > 1) { 
        return -2 ;
    }
    return (l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode* root){
    return Depth(root) >= 0;
}
