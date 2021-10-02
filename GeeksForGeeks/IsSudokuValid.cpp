class Solution{
public:
int isValid(vector<vector<int>> mat){
unordered_set<string> records;
for(int i=0;i<9;i++)
{
for(int j=0;j<9;j++)
{
if(mat[i][j]!=0)
{
string row=to_string(i)+"row"+to_string(mat[i][j]);
string col=to_string(j)+"col"+to_string(mat[i][j]);
string box=to_string((i/3)*3+j/3)+"box"+to_string(mat[i][j]);
if(records.find(row)!=records.end()) return 0;
else records.insert(row);
if(records.find(col)!=records.end()) return 0;
else records.insert(col);
if(records.find(box)!=records.end()) return 0;
else records.insert(box);
}
}
}
return 1;
}
};