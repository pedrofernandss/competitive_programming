def isSubsequence(self, s: str, t: str) -> bool:
        s_len = len(s)
        t_len = len(t)
        pointer_s = 0

        if s_len == 0:
            return True
        
        if t_len == 0 and s_len > 0:
            return False

        for char in t:
            if char == s[pointer_s]:
                pointer_s += 1
                if pointer_s == s_len:
                    return True
        return False