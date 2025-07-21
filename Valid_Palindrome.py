#This is LeetCode Question 125. Valid_Palindrome
class Solution:
    def isPalindrome(self, s: str) -> bool:
        # cleaned = ""
        # for char in s:
        #     if char.isalnum():  
        #         cleaned += char.lower()
        # return cleaned == cleaned[::-1]

         left, right = 0, len(s) - 1
         while left < right:
            while left < right and not s[left].isalnum():
                left += 1
            while left < right and not s[right].isalnum():
                right -= 1
            if s[left].lower() != s[right].lower():
                return False
            left += 1
            right -= 1
         return True
        
