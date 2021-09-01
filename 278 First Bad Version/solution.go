func firstBadVersion(n int) int {
    left := 1;
    right := n;

    for right>left{
        mid := left+(right-left)/2

        if isBadVersion(mid){
            right = mid
        }else{
            left = mid+1
        }
    }

    return left

}