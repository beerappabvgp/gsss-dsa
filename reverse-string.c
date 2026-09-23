void reverse(char* s, int left, int right) {
    if (left >= right) {
        return;
    }

    // swap
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    reverse(s, left + 1, right - 1);
}


void reverseString(char* s, int sSize) {
    reverse(s, 0, sSize - 1);
}
