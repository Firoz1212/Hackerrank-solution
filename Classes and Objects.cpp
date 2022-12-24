/*
https://www.hackerrank.com/challenges/classes-objects/copy-from/223876863
*/

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student{
    int s[5];
    public:
    void input()
    {
        for (int i=0;i<5;i++) {
        cin>>s[i];
        }
    }
int calculateTotalScore()
{
    int sum=0;
    for (int i=0;i<5;i++){
    sum=sum+s[i];
    }
    return sum;
}
};
