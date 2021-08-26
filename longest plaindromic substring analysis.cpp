string longestPalindrome(string s) {
  if (s.empty()) {
    return {};
  }


  int max_len = 1, idx = 0;


  for (int i = 0; i < s.length();) {
    int start = i, end = i;
    while (start < s.length() - 1 && s[start] == s[end + 1]) {
      ++end;
    }
    i = end + 1;
    while (start > 0 && end < s.length() - 1 && s[start - 1] == s[end + 1]) {
      --start;
      ++end;
    }
    if (max_len < end - start + 1) {
      max_len = end - start + 1;
      idx = start;
    }
  }
  return s.substr(idx, max_len);
  {