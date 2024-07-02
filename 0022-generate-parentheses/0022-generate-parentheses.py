class Solution:
    def solve(self, left, right, n, s, res):
        if len(s) == n * 2:
            res.append(s)
            return 

        if left < n:
            self.solve(left + 1, right, n, s + '(', res)

        if right < left:
            self.solve(left, right + 1, n, s + ')', res)

    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        self.solve(0, 0, n, '', res)
        return res
