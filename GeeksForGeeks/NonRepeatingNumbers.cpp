class Solution
{
public:
vector<int> singleNumber(vector<int> nums) 
{
vector<int> res;
int xxory=0;
for(int val:nums)
{
xxory=xxory^val;
}
int rsbm=xxory & -xxory;
int x=0;
int y=0;
for(int val:nums)
{
if(val & rsbm) x=x^val;
else y=y^val;
}
if(x<y) 
{
res.push_back(x);
res.push_back(y);
}
else 
{
res.push_back(y);
res.push_back(x);
}
return res;
}
};
