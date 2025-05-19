def extended_gcd(a, m):
    if m == 0:
        return a, 1, 0
    g, x1, y1 = extended_gcd(m, a % m)
    x = y1
    y = x1 - (a // m) * y1
    return g, x, y

def mod_inverse(a, m):
    g, x, _ = extended_gcd(a, m)
    if g != 1:
        return 0, False
    return x % m, True

def estimate_lcg_params(seq):
    n = len(seq)
    if n < 3:
        print("数列の長さが不十分です")
        return 0, 0, 0, False
    m = max(seq) + 1
    diff1 = seq[1] - seq[0]
    diff2 = seq[2] - seq[1]
    inv, ok = mod_inverse(diff1, m)
    if not ok:
        print("A の一意な推定が困難です")
        return 0, 0, 0, False
    a = (diff2 * inv) % m
    b = (seq[1] - a * seq[0]) % m
    for i in range(n - 1):
        if (a * seq[i] + b) % m != seq[i + 1]:
            print("推定されたパラメータが数列と一致しません")
            return 0, 0, 0, False
    return a, b, m, True

if __name__ == "__main__":
    sequence = [
        8, 81, 94, 47, 60, 13, 26, 99, 112, 65, 78, 31, 44, 117,
        10, 83, 96, 49, 62, 15, 28, 101, 114, 67, 80, 33, 46, 119,
        12, 85, 98, 51, 64, 17, 30, 103, 116, 69, 82, 35, 48, 1,
        14, 87, 100, 53, 66, 19, 32, 105, 118, 71, 84, 37, 50, 3,
        16, 89, 102, 55, 68, 21, 34, 107, 0, 73, 86, 39, 52, 5,
        18, 91, 104, 57, 70, 23, 36, 109, 2, 75, 88, 41, 54, 7,
        20, 93, 106, 59, 72, 25, 38, 111, 4, 77, 90, 43, 56, 9,
        22, 95, 108, 61, 74, 27, 40, 113, 6, 79, 92, 45, 58, 11,
        24, 97, 110, 63, 76, 29, 42, 115
    ]
    a, b, m, ok = estimate_lcg_params(sequence)
    if ok:
        print(f"推定されたパラメータ: A = {a}, B = {b}, M = {m}")