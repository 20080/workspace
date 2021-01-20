def my_func(s, z):
  total = 0
  len_str = len(s)

  for x, y in z:
    if x == 0:
      total += y
    else:
      total -= y
  total = total % len_str
  print(s[total:] + s[:total])


s = 'cutshort'
z = [[0, 3], [1, 11]]

if __name__ == "__main__":
  my_func(s, z)