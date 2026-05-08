t = int(input())

for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))

    bad = [0] * (n + 2)

    for i in range(n):
        if p[i] > i + 1:
            bad[p[i] + 1] += 1

    current_bad = 0
    ans = 0

    for k in range(1, n + 2):
        current_bad += bad[k]

        # valid seats before k
        ans = max(ans, (k - 1) - current_bad)

    print(ans)