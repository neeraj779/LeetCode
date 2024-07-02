class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == "0" or num2 == "0":
            return "0"
        
        len1, len2 = len(num1), len(num2)
        result = [0] * (len1 + len2)
        
        for i in range(len2-1, -1, -1):
            carry = 0
            n2 = int(num2[i])
            for j in range(len1-1, -1, -1):
                n1 = int(num1[j])
                prod = n1 * n2 + carry + result[i + j + 1]
                result[i + j + 1] = prod % 10
                carry = prod // 10
            result[i] += carry
        
        result_str = ''.join(map(str, result))
        
        result_str = result_str.lstrip('0')
        
        return result_str if result_str else "0"
