from collections import Counter

s = input().lower()

char_count = Counter(s)

e = char_count['e']
g = char_count['g']
y = char_count['y']
p = char_count['p']
t = char_count['t']

ans = min(e, g, y, p, t)
print(ans)

