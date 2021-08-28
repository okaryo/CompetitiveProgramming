A,B,C = gets.split.map(&:to_i)
b = B%4
if C == 1
  x = b + 4
else
  c = C%2 + 2
  x = b**c%4 + 4
end
a = A%10
puts(a**x%10)
