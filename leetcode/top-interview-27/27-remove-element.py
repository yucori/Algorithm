#### 나의 풀이 ####
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        index = 0
        for num in nums:
            if num != val:
                nums[index] = num
                index += 1
        return index
      
#### 배운 점 ####
# - 리스트에서 앞에서부터 k개의 원소들만 반환한다는 것을 기억했다면 더 빠른 코드 작성이 가능했을 것
# - 문제를 잘 읽어보고, 조건, 특징을 기억하여 풀이하자
# - 해당 문제에서는 nums 리스트에서 val이 아닌 원소들만을 앞으로 옮기는 것으로 문제를 해결할 수 있었다.