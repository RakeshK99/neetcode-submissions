# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        left = self.diameterOfBinaryTree(root.left)
        depL = 1+left
        right = self.diameterOfBinaryTree(root.right)
        depR = 1+right

        return int(depR + depL/3)
        
        
