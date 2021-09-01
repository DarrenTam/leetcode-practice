func mergeSort(l []int, r []int) []int {
    i:=0;
    j:=0;

    result := []int{};

    for i<len(l) && j<len(r){

        if l[i]>r[j]{
           result = append( result,r[j]);
            j++;
        }else {
            result =  append( result,l[i])
            i++;
        }
    }

    for i != len(l) {
        result =  append( result,l[i])
        i++
    }

       for j != len(r) {
        result =  append( result,r[j])
        j++;
    }

    return result;

}

func sortedSquares(nums []int) []int {


    if len(nums) == 1 {
        nums[0] = int(math.Pow(float64(nums[0]), float64(2)))
        return nums;
    }

    mid := len(nums)/2;
    left := sortedSquares(nums[0:mid]);
    right := sortedSquares(nums[mid:]);

    return mergeSort(left,right)


}