def f(nums,i,j):
        if i >= j:
            return 0
        
        med = ( i + j ) >> 1
        count = f(nums,i,med) + f(nums,med + 1,j)
        
        ii = i
        for k in range(med + 1, j + 1):
            while(ii <= med and nums[ii] < nums[k]):
                ii += 1
            count += (med - ii + 1)
                
        nums[i:j + 1] = sorted(nums[i:j + 1])
        return count


nums = [7,9,4,5,6,3,10,7,100]

glo = f(nums,0,len(nums) - 1)
print(glo)