class Solution 
{
public:
int _findMaxSum(Node *root,int &result)
{
if(root==NULL) return 0;
int left=_findMaxSum(root->left,result);
int right=_findMaxSum(root->right,result);
int maxSumStraight=max(max(left,right)+root->data,root->data);
int maxSumCase=max(left+right+root->data,maxSumStraight);
result=max(result,maxSumCase);
return maxSumStraight;
}
int findMaxSum(Node* root)
{
int result=INT_MIN;
_findMaxSum(root,result);
return result;
}
};