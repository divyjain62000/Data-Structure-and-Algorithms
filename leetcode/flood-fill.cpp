// TC -> O(r*c) SC -> O(1)
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        int r=image.size();
        int c=image[0].size();
        _floodFill(image,sr,sc,color,color==newColor?-1:newColor,r,c);
        if(color==newColor)
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(image[i][j]==-1) image[i][j]=newColor;
                }   
            }
        }
        return image;
    }
    void _floodFill(vector<vector<int>> &image,int sr,int sc,int color,int newColor,int r,int c) {
        if(sr<0 || sr>=r || sc<0 || sc>=c) return;
        if(image[sr][sc]!=color) return;
        image[sr][sc]=newColor;
       _floodFill(image,sr,sc-1,color,newColor,r,c);
       _floodFill(image,sr,sc+1,color,newColor,r,c);
       _floodFill(image,sr-1,sc,color,newColor,r,c);
       _floodFill(image,sr+1,sc,color,newColor,r,c);
    }
};