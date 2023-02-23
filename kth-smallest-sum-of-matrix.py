from heapq import heappush, heappop

class Solution:
    def kthSmallest(self, mat: list[list[int]], k: int) -> int:
        if not mat:
            return 0
        
        COLS = len(mat[0])
        
        heap = [(sum([row[0] for row in mat]), [0 for _ in mat])]
        visited = set() # holds maximum k tuples of length m
        ret = []
        
        while heap and len(ret) < k: # O(k lg k)
            s, idx_lst = heappop(heap)
            ret.append(s)
            visited.add(tuple(idx_lst))
			
            for row, col in enumerate(idx_lst): # O(m)
                # print(row, col)
                idx_lst[row] = col + 1
                print(idx_lst)
                idx_lst_tup = tuple(idx_lst) # O(m)
				
                if col + 1 < COLS and idx_lst_tup not in visited:
                    new_s = s - mat[row][col] + mat[row][col + 1]
                    heappush(heap, (new_s, idx_lst.copy()))
                    visited.add(idx_lst_tup)
					
                idx_lst[row] = col
            
        return ret[-1]

mat = [
[13, 48, 86, 76, 70],
[36, 95, 31, 80, 56],
[46, 1 ,93 ,92 ,61],
[66, 94, 76, 15, 41],
[93, 33, 53, 97, 89]
]
abc = Solution()
print(abc.kthSmallest(mat, 5))