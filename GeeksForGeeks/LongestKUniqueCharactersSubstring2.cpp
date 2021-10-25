class Solution {
    public int longestkSubstr(String s, int k) {
        Map<Character,Integer> map=new HashMap<>();
        int n=s.length();
        boolean f1=false;
        boolean f2=false;
        int i=-1;
        int j=-1;
        int ans=-1;
        while(true)
        {
            
            while(i<n-1)
            {
                f1=true;
                i++;
                char ch=s.charAt(i);
                map.put(ch,map.getOrDefault(ch,0)+1);
                if(map.size()<k) {
                    continue;
                }else if(map.size()==k) {
                    if(ans<i-j) ans=i-j;
                }else {
                    break;
                }
            }
            
            while(j<i)
            {
                f2=true;
                j++;
                char ch=s.charAt(j);
                if(map.get(ch)==1) map.remove(ch);
                else map.put(ch,map.get(ch)-1);
                if(map.size()>k) {
                       continue;
                }else if(map.size()==k) {
                    if(ans<i-j) ans=i-j;
                    break;
                }
            }
            
            if(f1==false && f2==false) break;
            f1=false;
            f2=false;
            
        }
        return ans;
    }
}