class Solution {
    public int longestkSubstr(String s, int k) {
        int ans=-1;
        int n=s.length();
        for(int i=0;i<n-1;i++)
        {
            Map<Character,Integer> map=new HashMap<>();
            int len=0;
            for(int j=i;j<n;j++)
            {
                char ch=s.charAt(j);
                map.put(ch,map.getOrDefault(ch,0)+1);
                len++;
                if(map.size()==k) {
                    if(len>ans) ans=len;
                }
                else if(map.size()>k) break;
            }
        }
        return ans;
    }
}