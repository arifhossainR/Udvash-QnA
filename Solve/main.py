from collections import Counter

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    freq = Counter(a)
    values = sorted(freq)

    left = 0
    answer = n

    for sixseven in values:
        cnt = freq[sixseven]

        l = left

        r = n - left - cnt

        answer = min(answer, max(l, r))

        left += cnt

    print(answer)