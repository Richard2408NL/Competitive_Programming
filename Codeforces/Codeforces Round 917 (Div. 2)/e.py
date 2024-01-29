def construct_matrix(t, test_cases):
    results = []

    for i in range(t):
        n, k = test_cases[i]

        if k % n == 0:
            matrix = [[0] * n for _ in range(n)]

            for j in range(n):
                matrix[j][j] = 1

            k //= n
            for j in range(n):
                for l in range(k):
                    matrix[j][(j + l) % n] = 1

            results.append(("Yes", matrix))
        else:
            results.append(("No", None))

    return results


def main():
    t = int(input())
    test_cases = []

    for _ in range(t):
        n, k = map(int, input().split())
        test_cases.append((n, k))

    results = construct_matrix(t, test_cases)

    for result, matrix in results:
        print(result)
        if matrix:
            for row in matrix:
                print(" ".join(map(str, row)))


if __name__ == "__main__":
    main()
