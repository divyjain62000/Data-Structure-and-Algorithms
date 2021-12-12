class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (isBadVersion(mid) && !isBadVersion(mid - 1)) return mid;
            else if (isBadVersion(mid) && isBadVersion(mid - 1))
            {
                end = mid - 1;
            }
            else if (!isBadVersion(mid) && isBadVersion(mid + 1)) return mid + 1;
            else if (!isBadVersion(mid) && !isBadVersion(mid + 1))
            {
                start = mid + 1;
            }
        }
        return start;
    }
};