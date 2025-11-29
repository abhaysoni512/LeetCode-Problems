func twoSum(nums []int, target int) []int {
    // simple logic hai slice m dekho ki agr target- arr[i] hai to daal do
    m := make(map[int]int) // map[value] = index
   
   for ind ,val := range nums{
    complement := target - val

    if val, ok := m[complement]; ok {
        return []int{ind, val}
    } 
    m[val] = ind

   }
     
     return []int{}


}