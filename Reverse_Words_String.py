#This is LeetCode Question 151. Reverse Words in String
class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """

        words=s.split()  #we convert string into list 

        revers_words=words[::-1] #Revers the List

        new_word=" ".join(revers_words) #Again Convert into String
        return new_word
        
