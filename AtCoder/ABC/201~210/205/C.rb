A,B,C = gets.split.map(&:to_i)
a = A
b = B
if C % 2 == 0
  a = A.abs
  b = B.abs
end
if a == b
  puts('=')
elsif a > b
  puts('>')
else
  puts('<')
end
