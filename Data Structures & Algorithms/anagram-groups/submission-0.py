class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        #solving this using the regular dict
        groups = {}
        for string in strs:
            key = "".join(sorted(string))
            if key in groups:
                groups[key].append(string)
            else:
                groups[key] = []
                groups[key].append(string)
        return list(groups.values())