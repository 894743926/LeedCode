/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时08分48秒
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
int happynum(int n) {
        int cnt = 0;
        while (n != 0) {
            cnt += (n%10) * (n%10);
            n = n/10;
        }
        return cnt;
    }

bool isHappy(int n){
    int fast = n;
    int slow = n;
    do {
        fast = happynum(fast);
        slow = happynum(slow);
        fast = happynum(fast);
    } while (fast != slow);
    if (fast == 1) {
        return true;
    }else {
        return false;
    }
}
