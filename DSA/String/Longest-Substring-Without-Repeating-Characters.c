#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int lengthOfLongestSubstring(char *s) {
    int last_seen[256];
    
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    int max_len = 0;
    int left = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char current_char = (unsigned char)s[right];

        if (last_seen[current_char] >= left) {
            left = last_seen[current_char] + 1;
        }

        last_seen[current_char] = right;
        max_len = MAX(max_len, right - left + 1);
    }

    return max_len;
}

int main() {
    char str1[] = "abcabcbb";
    char str2[] = "pwwkew";
    char str3[] = "bbbbb";

    printf("Input: \"%s\" -> Length: %d\n", str1, lengthOfLongestSubstring(str1));
    printf("Input: \"%s\" -> Length: %d\n", str2, lengthOfLongestSubstring(str2));
    printf("Input: \"%s\" -> Length: %d\n", str3, lengthOfLongestSubstring(str3));

    return 0;
}
