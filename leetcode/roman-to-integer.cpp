// TC -> O(n)  SC -> O(1)
class Solution {
    public int romanToInt(String s) {
        Map<Character,Integer> m=new HashMap<>();
        m.put('I',1);
        m.put('V',5);
        m.put('X',10);
        m.put('L',50);
        m.put('C',100);
        m.put('D',500);
        m.put('M',1000);
        int number=0;
        int n=s.length();
        for(int i=0;i<n;i++) 
        {
            if(s.charAt(i)=='I') 
            {
                if(i+1<n && s.charAt(i+1)=='V') {
                    number+=4;
                    i++;
                }else
                if(i+1<n && s.charAt(i+1)=='X') {
                    number+=9;
                    i++;
                }
                else number+=m.get(s.charAt(i));
            }else
            if(s.charAt(i)=='X') 
            {
                if(i+1<n && s.charAt(i+1)=='L') {
                    number+=40;
                    i++;
                }else
                if(i+1<n && s.charAt(i+1)=='C') {
                    number+=90;
                    i++;
                }
                else number+=m.get(s.charAt(i));
            }else
            if(s.charAt(i)=='C') 
            {
                if(i+1<n && s.charAt(i+1)=='D') {
                    number+=400;
                    i++;
                }else
                if(i+1<n && s.charAt(i+1)=='M') {
                    number+=900;
                    i++;
                }
                else number+=m.get(s.charAt(i));
            }
            else number+=m.get(s.charAt(i));
            
        }
        return number;
    }
}