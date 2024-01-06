def generate_strings(s, seen):
    if s and s not in seen:
        seen.add(s)
        generate_strings(s[1:], seen)  # Remove first character
        generate_strings(s[0] + s[2:], seen)  # Remove second character

def count_distinct_strings(t, test_cases):
    for i in range(t):
        n, s = test_cases[i]
        seen = set()
        generate_strings(s, seen)
        print(len(seen) - 1)  # Subtract 1 to exclude the empty string
