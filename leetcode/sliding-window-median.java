import java.util.*;

class Soution
{
public static double[] medianSlidingWindow(int[] nums, int k) 
{
Comparator<Integer> comparator=(a,b)->nums[a]!=nums[b]?Integer.compare(nums[a],nums[b]):a-b;
TreeSet<Integer> minHeap=new TreeSet<>(comparator);
TreeSet<Integer> maxHeap=new TreeSet<>(comparator.reversed());

double[] res=new double[nums.length-k+1];
int n=nums.length;
int e=0;
for(int i=0;i<n;i++)
{
if(i>=k)
{
minHeap.remove(i-k);
maxHeap.remove(i-k);
}
minHeap.add(i);
maxHeap.add(minHeap.pollFirst());

balanceHeaps(minHeap,maxHeap);

if(i>=k-1) res[e++]=getMedian(nums,k,minHeap,maxHeap);

}
return res;
}
public static void balanceHeaps(TreeSet<Integer> minHeap,TreeSet<Integer> maxHeap)
{
if(maxHeap.size()>minHeap.size()) minHeap.add(maxHeap.pollFirst());
}

public static double getMedian(int nums[],int k,TreeSet<Integer> minHeap,TreeSet<Integer> maxHeap)
{
if(k%2==0) return ((double)nums[minHeap.first()]+nums[maxHeap.first()])/2;
return (double) nums[minHeap.first()];
}

public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String numStrArr[]=sc.nextLine().split(" ");
int n=numStrArr.length;
int nums[]=new int[n];
for(int i=0;i<n;i++)
{
nums[i]=Integer.parseInt(numStrArr[i]);
}
int k=Integer.parseInt(sc.nextLine());
double[] res=medianSlidingWindow(nums,k);
for(int i=0;i<res.length;i++) System.out.print(res[i]+" ");
}
}