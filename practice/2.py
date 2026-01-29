def solve(verse: str, words: list[str]) -> int:
    n = len(verse)
    min_words = [float("inf")] * (n + 1)
    ways = [0] * (n + 1)

    min_words[0] = 0
    ways[0] = 1

    max_len = max(len(w) for w in words) if words else 0

    for i in range(1, n + 1):
        for length in range(1, min(i, max_len) + 1):
            start = i - length
            word = verse[start:i]

            if word in words and min_words[start] != float("inf"):
                current_count = min_words[start] + 1
                if current_count < min_words[i]:
                    min_words[i] = current_count
                    ways[i] = ways[start]
                elif current_count == min_words[i]:
                    ways[i] += ways[start]

    if min_words[n] == float("inf"):
        return 0
    else:
        return ways[n]


if __name__ == "__main__":
    print(
        solve(
            "却是荷池跳雨",
            ["荷花", "荷池", "却", "是荷池", "却是", "雨露", "跳雨", "是"],
        )
    )

    print(
        solve("山外青山楼外楼", ["青", "山", "楼", "人", "山外", "楼外", "外", "青山"])
    )
