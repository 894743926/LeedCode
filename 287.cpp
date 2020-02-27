/*************************************************************************
	> File Name: 287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 20时51分25秒
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
int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while(p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}
